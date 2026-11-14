typedef struct Obj_82FA96A8 {
    int vtable;
    int base;
    char pad8[0x20];
    void *arg;
} Obj_82FA96A8;

extern void *lbl_832642E8;
extern void fn_82FF7820(void *mgr, void *object, void *arg);

void fn_82FA96A8(Obj_82FA96A8 *self)
{
    fn_82FF7820(lbl_832642E8, self != 0 ? &self->base : 0, self->arg);
}
