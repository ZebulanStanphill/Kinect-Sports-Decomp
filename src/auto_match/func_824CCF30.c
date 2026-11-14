typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Skeleton_824CCF30 Skeleton_824CCF30;
typedef struct Self_824CCF30 { char pad[0x20]; Skeleton_824CCF30 *skeleton; } Self_824CCF30;

extern __vector4 *fn_82F512E8(__vector4 *out, Skeleton_824CCF30 *skeleton, int joint, int space);
extern __vector4 *fn_82F50DA8(__vector4 *out, Skeleton_824CCF30 *skeleton, int joint, int space);
extern float fn_82F52348(Skeleton_824CCF30 *skeleton, int joint);

void fn_824CCF30(Self_824CCF30 *self, int joint, int space, __vector4 *pos, __vector4 *rot)
{
    __vector4 tmp;
    if (pos != 0)
        *pos = *fn_82F512E8(&tmp, self->skeleton, joint, space != 2 ? 2 : 0);
    if (rot != 0)
        *rot = *fn_82F50DA8(&tmp, self->skeleton, joint, space != 2 ? 2 : 0);
    fn_82F52348(self->skeleton, joint);
}
