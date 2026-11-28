typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct RenderState_82569598 {
    char pad0[0x820];
    float scale;
    char pad824[0x14];
    float paused; /* 0x838 */
} RenderState_82569598;

typedef struct Mover_82569740 Mover_82569740;

struct Mover_82569740 {
    struct {
        void *pad[5];
        void (*update)(Mover_82569740 *, RenderState_82569598 *);
    } *vt;

    char pad4[0x9c];
    __vector4 direction;
    char padb0[0xc0];
    int moving;
    char pad174[0x9c8];
    float elapsed; /* 0xb3c */
    float speed;   /* 0xb40 */
};

typedef struct Item_82569598 {
    char pad0[0x10];
    Mover_82569740 *body; /* 0x10 */
    void *timeline;       /* 0x14 */
    int pad18;
    int fixedDirection;
    int fixedSpeed;
    char pad24[0xc];
} Item_82569598;

typedef struct Event_82569898 {
    int type;
    int size;
    float value;
} Event_82569898;

typedef struct Dispatcher_82569898 {
    char pad0[0x78];
    char queue[4];
} Dispatcher_82569898;

typedef struct World_82569598 {
    char pad0[0x10];
    __vector4 direction;
    char pad20[0x40];
    Dispatcher_82569898 **dispatcher;
    char pad64[0x24];
    float time;
    float lastTime;
    char pad90[0x44];
    int itemCount;        /* 0xd4 */
    Item_82569598 *items; /* 0xd8 */
    char paddc[8];
    char events[4];
} World_82569598;

extern void fn_82528948(Mover_82569740 *mover);
extern void fn_8252D970(Mover_82569740 *mover, float dt);
extern void fn_825BC5E0(World_82569598 *self, void *events, void *timeline, Mover_82569740 *mover, float time,
                        float lastTime, int mode, int skip);
extern void *XMemSet(void *dest, int c, unsigned long count);
extern void fn_8257C8F0(Dispatcher_82569898 *dispatcher, Event_82569898 *event);
extern void fn_8257CB40(void *queue, Event_82569898 *event, int flags);
extern float lbl_8327F880[8];

__vector4 __vpermwi(__vector4 v, int control);
__vector4 __vcmpeqfpR(__vector4 a, __vector4 b, unsigned int *cr);

static __forceinline int Vector3Equal(__vector4 a, __vector4 b)
{
    unsigned int cr = 0;

    a = __vpermwi(a, 24);
    b = __vpermwi(b, 24);
    __vcmpeqfpR(a, b, &cr);
    return (cr & 0x80) != 0;
}

void fn_82569598(World_82569598 *self, RenderState_82569598 *state, float dt)
{
    Event_82569898 event;
    int i;

    for (i = 0; i < self->itemCount; ++i) {
        Mover_82569740 *body = self->items[i].body;
        if (body != 0) {
            void *timeline = self->items[i].timeline;
            if (!self->items[i].fixedDirection) {
                const __vector4 *direction = &self->direction;
                if (!Vector3Equal(*direction, body->direction)) {
                    body->direction = *direction;
                    body->moving = 0;
                    fn_82528948(body);
                }
                fn_8252D970(body, dt);
            }
            if (timeline != 0) {
                fn_825BC5E0(self, self->events, timeline, body, self->time, self->lastTime, 0, 0);
            }
            if (!self->items[i].fixedSpeed) {
                float factor;
                if (state->paused > 0.0f) {
                    factor = 0.0f;
                } else {
                    factor = state->scale * lbl_8327F880[5];
                }
                body->elapsed = body->speed * factor;
                body->vt->update(body, state);
            }
        }
    }
    XMemSet(&event.value, 0, sizeof(event.value));
    event.value = dt;
    event.type = 0x49;
    event.size = 0xc;
    fn_8257C8F0(*self->dispatcher, &event);
    fn_8257CB40((*self->dispatcher)->queue, &event, 1);
}
