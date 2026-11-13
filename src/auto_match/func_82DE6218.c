typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;
__vector4 __lvlx(const void *, int);
__vector4 __vspltw(__vector4, int);

typedef struct Obj_82DE6218 {
    float base;
    float value;
    char pad8[0x18];
    char target[0x10];
} Obj_82DE6218;

extern void fn_82CEBE20(void *target, const __vector4 *scale);

void fn_82DE6218(Obj_82DE6218 *self, float value)
{
    __vector4 v;
    float ratio = value / self->value;
    self->value = value;
    v = __vspltw(__lvlx(&ratio, 0), 0);
    fn_82CEBE20(self->target, &v);
}
