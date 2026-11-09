typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float vector4_f32[4]; } __vector4;

typedef struct Target_824AEA50 {
    char pad[0x20];
    __vector4 v;
} Target_824AEA50;

typedef struct Obj_824AEA50 {
    char pad[0x3c];
    Target_824AEA50 *target;
} Obj_824AEA50;

extern void fn_824AEB10(Obj_824AEA50 *self);
extern __vector4 *fn_824AED00(__vector4 *out, Obj_824AEA50 *self);

void fn_824AEA50(Obj_824AEA50 *self)
{
    __vector4 tmp;
    Target_824AEA50 *target;
    fn_824AEB10(self);
    target = self->target;
    target->v = *fn_824AED00(&tmp, self);
}
