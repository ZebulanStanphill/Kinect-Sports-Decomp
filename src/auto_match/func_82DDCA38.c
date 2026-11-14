typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct {
    __vector4 a;
    __vector4 b;
    __vector4 c;
} Item_82DDCA38;

typedef struct {
    char pad[0x60];
    __vector4 *b;
    __vector4 *c;
    __vector4 *a;
    int count;
} Obj_82DDCA38;

void fn_82DDCA38(Obj_82DDCA38 *self, const Item_82DDCA38 *item)
{
    int n = self->count;
    self->a[n] = item->a;
    self->b[n] = item->b;
    self->c[n] = item->c;
    self->count = n + 1;
}
