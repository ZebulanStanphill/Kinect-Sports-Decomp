typedef struct Self_82712148 Self_82712148;

typedef struct Holder_82712148 {
    void *target;
} Holder_82712148;

typedef struct Vt_82712148 {
    void *slots[30];
    void (*handle)(Self_82712148 *self, void *msg);  /* 0x78 */
} Vt_82712148;

struct Self_82712148 {
    Vt_82712148 *vt;
    int pad[2];
    Holder_82712148 *holder;  /* 0x0c */
};

extern unsigned char fn_82711940(Self_82712148 *self);
extern void fn_826F62D0(void *target, void *msg);

int fn_82712148(Self_82712148 *self, void *msg)
{
    if (fn_82711940(self)) {
        self->vt->handle(self, msg);
        return 1;
    }
    if (self->holder->target != 0) {
        fn_826F62D0(self->holder->target, msg);
        return 1;
    }
    return 0;
}
