typedef struct Obj_82C09800 Obj_82C09800;
typedef void (*VFn_82C09800)(Obj_82C09800 *self, int a, int b, int size, void *buf);
struct Obj_82C09800 { VFn_82C09800 *vtbl; };

void fn_82C09800(Obj_82C09800 *self, int a, int b)
{
    self->vtbl[12](self, a, b, 0x28, (char *)self + 0xcc);
}
