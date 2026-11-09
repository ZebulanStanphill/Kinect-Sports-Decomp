typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct SP_823CEF08 { char **px; int *rep; } SP_823CEF08;
extern SP_823CEF08 *fn_822EFBF0(SP_823CEF08 *, void *);
extern void fn_822315A0(void *);
extern void fn_823F0828(void *, int, __vector4);
extern unsigned char fn_8288B760(void *);

typedef struct Sub_823CEF08 {
    unsigned char flag;
    int value;
    char pad[8];
    __vector4 vec;
    char pad5[0x20];
    float f;
} Sub_823CEF08;

typedef struct Obj_823CEF08 {
    char pad[0x84];
    void *target;
    char pad2[0x1630 - 0x88];
    Sub_823CEF08 s;
} Obj_823CEF08;

void fn_823CEF08(Obj_823CEF08 *o, int a, __vector4 v)
{
    void *t = o->target;
    if (t != 0 && fn_8288B760(t) == 0) {
        SP_823CEF08 sp;
        SP_823CEF08 *r = fn_822EFBF0(&sp, t);
        fn_823F0828(*r->px + 0x270, a, v);
        if (sp.rep != 0)
            fn_822315A0(sp.rep);
        return;
    }
    {
        Sub_823CEF08 *s = &o->s;
        s->value = a;
        s->f = 0.0f;
        s->flag = 1;
        s->vec = v;
    }
}
