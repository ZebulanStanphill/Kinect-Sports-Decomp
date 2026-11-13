typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Triple_8309EE78 {
    __vector4 a;
    __vector4 b;
    __vector4 c;
} Triple_8309EE78;

typedef struct Info_8309EE78 {
    char pad0[2];
    unsigned char index;
} Info_8309EE78;

typedef struct Body_8309EE78 {
    char pad0[0x30];
    __vector4 position;
} Body_8309EE78;

extern void fn_830A6170(Triple_8309EE78 *triple, void *arg, void *out);

void fn_8309EE78(Info_8309EE78 *info, void *arg, Body_8309EE78 *first, Body_8309EE78 *second, void *out)
{
    Triple_8309EE78 triple;

    triple.a = first->position;
    triple.b = second->position;
    triple.c = ((__vector4 *)second)[info->index];
    fn_830A6170(&triple, arg, out);
}
