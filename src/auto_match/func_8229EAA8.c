typedef struct Val_8229EAA8 { int w0; int type; unsigned int value; } Val_8229EAA8;
typedef struct Obj_8229EAA8 { int pending; int f4; void *handle; } Obj_8229EAA8;

extern void fn_82672C20(void *h, const char *name, Val_8229EAA8 *args, int n);
extern void fn_82273CD8(Val_8229EAA8 *v, int type);
extern void fn_82273C88(Val_8229EAA8 *v);

void fn_8229EAA8(Obj_8229EAA8 *self, unsigned int value)
{
    Val_8229EAA8 v;

    if (self->pending != 0) {
        self->pending = 0;
        fn_82672C20(self->handle, "_root.transIn", 0, 0);
        if (self->pending != 0) {
            return;
        }
    }
    v.w0 = 0;
    v.type = 0;
    fn_82273CD8(&v, 5);
    v.value = value;
    fn_82672C20(self->handle, "_root.infoText", &v, 1);
    fn_82273C88(&v);
}
