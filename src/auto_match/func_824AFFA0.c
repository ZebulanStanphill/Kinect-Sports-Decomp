typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float vector4_f32[4]; } __vector4;

typedef struct Target_824AFFA0 {
    char pad[0x20];
    __vector4 v;
} Target_824AFFA0;

typedef struct Obj_824AFFA0 {
    char pad[0x3c];
    Target_824AFFA0 *target;
} Obj_824AFFA0;

extern void fn_824B0058(Obj_824AFFA0 *self);
extern __vector4 *fn_824B0580(__vector4 *out, Obj_824AFFA0 *self);

void fn_824AFFA0(Obj_824AFFA0 *self)
{
    __vector4 tmp;
    Target_824AFFA0 *target;
    fn_824B0058(self);
    target = self->target;
    target->v = *fn_824B0580(&tmp, self);
}
