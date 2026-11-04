typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct SP_823CE798 { char **px; int *rep; } SP_823CE798;
extern SP_823CE798 *fn_822EFBF0(SP_823CE798 *, void *);
extern void fn_822315A0(void *);
extern void fn_823F0828(void *, int, __vector4);
extern unsigned char fn_8288B760(void *);
extern float lbl_821CC160;

typedef struct Sub_823CE798 {
    unsigned char flag;
    int value;
    char pad[8];
    __vector4 vec;
    char pad5[0x20];
    float f;
} Sub_823CE798;

typedef struct Obj_823CE798 {
    char pad[0x84];
    void *target;
    char pad2[0x1590 - 0x88];
    Sub_823CE798 s;
} Obj_823CE798;

void fn_823CE798(Obj_823CE798 *o, int a, __vector4 v)
{
    void *t = o->target;
    if (t != 0 && fn_8288B760(t) == 0) {
        SP_823CE798 sp;
        SP_823CE798 *r = fn_822EFBF0(&sp, t);
        fn_823F0828(*r->px + 0x3d8, a, v);
        if (sp.rep != 0)
            fn_822315A0(sp.rep);
        return;
    }
    {
        Sub_823CE798 *s = &o->s;
        s->value = a;
        s->f = lbl_821CC160;
        s->flag = 1;
        s->vec = v;
    }
}
