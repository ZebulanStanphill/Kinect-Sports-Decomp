typedef __declspec(passinreg) __declspec(align(16)) union __vector4 { float v[4]; unsigned int u[4]; } __vector4;

typedef struct Obj_82382E28 {
    char pad00[0x40];
    __vector4 value;
    char pad50[0xa0 - 0x50];
    int set;
} Obj_82382E28;

typedef struct { Obj_82382E28 *p; void *ref; } Ptr_82382E28;

extern Ptr_82382E28 *fn_82383000(Ptr_82382E28 *out, void *key);
extern void fn_822315A0(void *ref);

void fn_82382E28(void *key, __vector4 v)
{
    Ptr_82382E28 a;
    Obj_82382E28 *o = fn_82383000(&a, key)->p;
    o->set = 1;
    o->value = v;
    if (a.ref)
        fn_822315A0(a.ref);
}
