typedef struct Target_83036560 Target_83036560;
typedef struct {
    void *slots[15];
    void (*apply)(Target_83036560 *self, int a, float delta, int b, int c);   /* 0x3c */
} TargetVtbl_83036560;
struct Target_83036560 { TargetVtbl_83036560 *vtbl; };

typedef struct Ctl_83036560 {
    int pad0;
    Target_83036560 *target;    /* 0x04 */
    int pending;                /* 0x08 */
    float value;                /* 0x0c */
} Ctl_83036560;

extern float fn_83009C40(Target_83036560 *t);
extern void fn_83009C10(Target_83036560 *t);

void fn_83036560(Ctl_83036560 *self, float value, int unused, unsigned char reset)
{
    float before = fn_83009C40(self->target);
    float delta;

    self->value = value;
    delta = fn_83009C40(self->target) - before;
    if (reset) {
        fn_83009C10(self->target);
        self->pending = 0;
    }
    if (delta != 0.0f)
        self->target->vtbl->apply(self->target, 0, delta, 0, 0);
}
