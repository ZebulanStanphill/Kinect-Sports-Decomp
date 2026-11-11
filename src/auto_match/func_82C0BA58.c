typedef struct Obj_82C0BA58 Obj_82C0BA58;
typedef void (*VFn_82C0BA58)(Obj_82C0BA58 *self, int a, int b, int size, void *buf);
struct Obj_82C0BA58 { VFn_82C0BA58 *vtbl; };

void fn_82C0BA58(Obj_82C0BA58 *self, int a, int b)
{
    self->vtbl[12](self, a, b, 0x28, (char *)self + 0x16c);
}
