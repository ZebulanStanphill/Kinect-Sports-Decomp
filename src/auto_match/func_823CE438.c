typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct SP_823CE438 { char **px; int *rep; } SP_823CE438;
extern SP_823CE438 *fn_822EFBF0(SP_823CE438 *, void *);
extern void fn_822315A0(void *);
extern void fn_823F0828(void *, int, __vector4);
extern unsigned char fn_8288B760(void *);

typedef struct Sub_823CE438 {
    unsigned char flag;
    int value;
    char pad[8];
    __vector4 vec;
    char pad5[0x20];
    float f;
} Sub_823CE438;

typedef struct Obj_823CE438 {
    char pad[0x84];
    void *target;
    char pad2[0x1540 - 0x88];
    Sub_823CE438 s;
} Obj_823CE438;

void fn_823CE438(Obj_823CE438 *o, int a, __vector4 v)
{
    void *t = o->target;
    if (t != 0 && fn_8288B760(t) == 0) {
        SP_823CE438 sp;
        SP_823CE438 *r = fn_822EFBF0(&sp, t);
        fn_823F0828(*r->px + 0x360, a, v);
        if (sp.rep != 0)
            fn_822315A0(sp.rep);
        return;
    }
    {
        Sub_823CE438 *s = &o->s;
        s->value = a;
        s->f = 0.0f;
        s->flag = 1;
        s->vec = v;
    }
}
