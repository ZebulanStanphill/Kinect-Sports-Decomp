typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;
__vector4 __lvlx(const void *, int);
__vector4 __vspltw(__vector4, int);

typedef struct Obj_82DE5718 {
    float base;
    float value;
    char pad8[0x18];
    char target[0x10];
} Obj_82DE5718;

extern void fn_82CEBE20(void *target, const __vector4 *scale);

void fn_82DE5718(float scale, Obj_82DE5718 *self)
{
    __vector4 v;
    self->value *= scale;
    v = __vspltw(__lvlx(&scale, 0), 0);
    fn_82CEBE20(self->target, &v);
}
