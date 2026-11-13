typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Self_823CEFB0 Self_823CEFB0;
typedef struct Data_823CEFB0 {
    int id;                 /* 0x0 */
    int value;              /* 0x4 */
    int slots[3];           /* 0x8 */
    unsigned char flag;     /* 0x14 */
} Data_823CEFB0;
typedef struct Method_823CEFB0 { void (*fn)(void); int adjust; } Method_823CEFB0;
typedef struct Bind_823CEFB0 {
    Method_823CEFB0 method;     /* 0x0 */
    Self_823CEFB0 *obj;         /* 0x8 */
    int pad;
    int kind;                   /* 0x10 */
    __vector4 v;                /* 0x20 */
    Data_823CEFB0 data;         /* 0x30 */
} Bind_823CEFB0;
typedef struct Func_823CEFB0 { int words[6]; } Func_823CEFB0;
typedef struct Sp_823CEFB0 { void *px; void *rep; } Sp_823CEFB0;
struct Self_823CEFB0 {
    char pad0[0x84];
    void *target;
    char pad88[0xb18 - 0x88];
    int callbacks;
};
typedef struct Cfg_823CEFB0 { int pad0; unsigned char enabled; } Cfg_823CEFB0;

extern void fn_822315A0(void *rep);
extern Cfg_823CEFB0 *fn_82250A18(void);
extern void fn_8227CB30(int *list, Func_823CEFB0 *f);
extern Sp_823CEFB0 *fn_822EFBF0(Sp_823CEFB0 *out, void *target);
extern void fn_82359C18(Func_823CEFB0 *f);
extern void fn_823CF178(void);
extern Func_823CEFB0 *fn_823D2008(Func_823CEFB0 *out, Bind_823CEFB0 b);
extern void fn_823E6E98(Self_823CEFB0 *self, int kind, Data_823CEFB0 *data);
extern void fn_823EAA88(void *px, int kind, Data_823CEFB0 *data, __vector4 v);
extern Cfg_823CEFB0 *lbl_832975B0;

void fn_823CEFB0(Self_823CEFB0 *self, int kind, __vector4 v)
{
    Data_823CEFB0 data;
    Cfg_823CEFB0 *cfg;
    Sp_823CEFB0 sp;
    int i;

    data.id = -1;
    data.value = 0;
    for (i = 0; i < 3; i++)
        data.slots[i] = 0;
    data.flag = 0;
    fn_823E6E98(self, kind, &data);
    cfg = lbl_832975B0 ? lbl_832975B0 : fn_82250A18();
    if (cfg->enabled != 0) {
        void *target = self->target;
        if (target != 0) {
            Func_823CEFB0 f;
            Func_823CEFB0 *pf;
            Bind_823CEFB0 b;
            Method_823CEFB0 m;
            m.adjust = 0;
            m.fn = fn_823CF178;
            b.v = v;
            b.obj = self;
            b.kind = kind;
            b.method = m;
            b.data = data;
            pf = fn_823D2008(&f, b);
            fn_8227CB30(&self->callbacks, pf);
            fn_82359C18(pf);
            fn_823EAA88(fn_822EFBF0(&sp, target)->px, kind, &data, v);
            if (sp.rep != 0)
                fn_822315A0(sp.rep);
        }
    } else {
        Func_823CEFB0 f;
        Func_823CEFB0 *pf;
        Bind_823CEFB0 b;
        Method_823CEFB0 m;
        m.adjust = 0;
        m.fn = fn_823CF178;
        b.v = v;
        b.obj = self;
        b.kind = kind;
        b.method = m;
        b.data = data;
        pf = fn_823D2008(&f, b);
        fn_8227CB30(&self->callbacks, pf);
        fn_82359C18(pf);
    }
}
