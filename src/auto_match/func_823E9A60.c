typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float vector4_f32[4]; } __vector4;
typedef struct Obj_823E9A60 {
    char pad0[0x20];
    unsigned char active;
    char pad21[3];
    int value;
    char pad28[8];
    __vector4 vec;
    float time;
} Obj_823E9A60;

void fn_823E9A60(Obj_823E9A60 *o, int value, __vector4 vec)
{
    o->value = value;
    o->active = 1;
    o->time = 0.0f;
    o->vec = vec;
}
