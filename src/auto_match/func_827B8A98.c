typedef struct Obj_827B8A98 {
    int pad0;
    void *target;
    void *source;
} Obj_827B8A98;

extern void fn_827B85D8(void *target, void *source, int reverse);

void fn_827B8A98(Obj_827B8A98 *self, int unused, int mode)
{
    if (mode == 1) {
        fn_827B85D8(self->target, self->source, 0);
        return;
    }
    if (mode == 2) {
        fn_827B85D8(self->target, self->source, 1);
        return;
    }
}
