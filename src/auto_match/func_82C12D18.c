typedef struct Obj_82C12D18 Obj_82C12D18;
typedef void (*VFn_82C12D18)(Obj_82C12D18 *self, int a, int b, int size, void *buf);
struct Obj_82C12D18 { VFn_82C12D18 *vtbl; };

void fn_82C12D18(Obj_82C12D18 *self, int a, int b)
{
    self->vtbl[12](self, a, b, 0x28, (char *)self + 0x2c);
}
