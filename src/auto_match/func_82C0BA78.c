typedef struct Obj_82C0BA78 Obj_82C0BA78;
typedef void (*VFn_82C0BA78)(Obj_82C0BA78 *self, int a, int b, int size, void *buf);
struct Obj_82C0BA78 { VFn_82C0BA78 *vtbl; };

void fn_82C0BA78(Obj_82C0BA78 *self, int a, int b)
{
    self->vtbl[12](self, a, b, 0x28, (char *)self + 0x11c);
}
