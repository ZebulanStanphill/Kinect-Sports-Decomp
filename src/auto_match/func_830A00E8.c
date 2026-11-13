typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Triple_830A00E8 {
    __vector4 a;
    __vector4 b;
    __vector4 c;
    float f0;
    float f1;
} Triple_830A00E8;

typedef struct Info_830A00E8 {
    char pad0[2];
    unsigned char index;
    char pad3;
    float f0;
    float f1;
} Info_830A00E8;

typedef struct Body_830A00E8 {
    char pad0[0x30];
    __vector4 position;
} Body_830A00E8;

extern void fn_830A6890(Triple_830A00E8 *triple, void *arg, void *out);

void fn_830A00E8(Info_830A00E8 *info, void *arg, Body_830A00E8 *first, Body_830A00E8 *second, void *out)
{
    Triple_830A00E8 triple;

    triple.f0 = info->f0;
    triple.f1 = info->f1;
    triple.a = first->position;
    triple.b = second->position;
    triple.c = ((__vector4 *)second)[info->index];
    fn_830A6890(&triple, arg, out);
}
