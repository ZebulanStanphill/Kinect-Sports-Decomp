typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef union Vec_824E09C0 {
    __vector4 v;
    float f[4];
} Vec_824E09C0;

typedef struct Obj_824E09C0 {
    char pad[0xb0];
    Vec_824E09C0 pos;
} Obj_824E09C0;

typedef struct Self_824E09C0 {
    char pad[8];
    char sub[1];
} Self_824E09C0;

extern double sqrt(double);
extern void fn_824DC998(void *p);
extern void fn_824DC918(void *p, float len);

void fn_824E09C0(Self_824E09C0 *self, Obj_824E09C0 *o)
{
    float len;
    Vec_824E09C0 v;

    fn_824DC998(self->sub);
    len = 0.0f;
    if (o->pos.f[2] > len) {
        v.v = o->pos.v;
        len = (float)sqrt(v.f[0] * v.f[0] + v.f[2] * v.f[2]);
    }
    fn_824DC918(self->sub, len);
}
