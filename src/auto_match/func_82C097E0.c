typedef struct Obj_82C097E0 Obj_82C097E0;
typedef void (*VFn_82C097E0)(Obj_82C097E0 *self, int a, int b, int size, void *buf);
struct Obj_82C097E0 { VFn_82C097E0 *vtbl; };

void fn_82C097E0(Obj_82C097E0 *self, int a, int b)
{
    self->vtbl[12](self, a, b, 0x28, (char *)self + 0x7c);
}
