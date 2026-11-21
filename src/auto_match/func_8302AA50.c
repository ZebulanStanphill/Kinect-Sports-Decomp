typedef struct Listener_8302AA50 Listener_8302AA50;

typedef struct ListenerVtbl_8302AA50 {
    void (*OnUpdate)(Listener_8302AA50 *self, int id, float value, unsigned char finished);
} ListenerVtbl_8302AA50;

struct Listener_8302AA50 {
    ListenerVtbl_8302AA50 *vt;
};

typedef struct Tween_8302AA50 {
    void *vt;                         /* 0x00 */
    unsigned int mode;                /* 0x04 */
    float from;                       /* 0x08 */
    float to;                         /* 0x0c */
    float value;                      /* 0x10 */
    int id;                           /* 0x14 */
    float startTime;                  /* 0x18 */
    float duration;                   /* 0x1c */
    float progress;                   /* 0x20 */
    int pad24;                        /* 0x24 */
    Listener_8302AA50 **listeners;    /* 0x28 */
    Listener_8302AA50 **listenersEnd; /* 0x2c */
    int pad30;                        /* 0x30 */
    int pad34;                        /* 0x34 */
    unsigned char flags;              /* 0x38 */
} Tween_8302AA50;

extern char lbl_83264368[];
extern float fn_83016920(void *easing, float t, float from, float to, unsigned int mode);
extern float fn_83016AB8(void *easing, float value);
extern float fn_83016B68(void *easing, float t, float from, float to, unsigned int mode);

unsigned char fn_8302AA50(Tween_8302AA50 *self, unsigned int now)
{
    unsigned char finished = 0;
    float value;
    Listener_8302AA50 **it;

    if (self->duration != 0.0f) {
        float t = ((float)now - self->startTime) / self->duration;

        self->progress = t;
        if (t < 1.0f) {
            if (t < 0.0f) {
                self->progress = 0.0f;
            }
            goto evaluate;
        }
    }
    finished = 1;
evaluate:
    if (finished == 1) {
        value = self->to;
        if ((self->flags & 0x80) == 0x80) {
            value = fn_83016AB8(lbl_83264368, value);
        }
    } else if ((self->flags & 0x80) != 0) {
        value = fn_83016B68(lbl_83264368, self->progress, self->from, self->to, self->mode);
    } else {
        value = fn_83016920(lbl_83264368, self->progress, self->from, self->to, self->mode);
    }
    self->value = value;
    self->flags |= 0x40;
    for (it = self->listeners; it != self->listenersEnd; it++) {
        (*it)->vt->OnUpdate(*it, self->id, value, finished);
    }
    return finished;
}
