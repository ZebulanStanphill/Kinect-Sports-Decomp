typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Self_823CE840 Self_823CE840;
typedef struct Data_823CE840 { __vector4 v[9]; } Data_823CE840;
typedef struct Method_823CE840 { void (*fn)(void); int adjust; } Method_823CE840;
typedef struct Bind_823CE840 {
    Method_823CE840 method;
    Self_823CE840 *obj;
    Data_823CE840 data;
} Bind_823CE840;
typedef struct Func_823CE840 { int words[6]; } Func_823CE840;
typedef struct Sp_823CE840 { void *px; void *rep; } Sp_823CE840;
struct Self_823CE840 {
    char pad0[0x84];
    void *target;
    char pad88[0xba8 - 0x88];
    int callbacks;
};
typedef struct Cfg_823CE840 { int pad0; unsigned char enabled; } Cfg_823CE840;

extern void fn_822315A0(void *rep);
extern Cfg_823CE840 *fn_82250A18(void);
extern void fn_82250D78(Data_823CE840 *data);
extern void fn_8227CB30(int *list, Func_823CE840 *f);
extern Sp_823CE840 *fn_822EFBF0(Sp_823CE840 *out, void *target);
extern void fn_82359C18(Func_823CE840 *f);
extern void fn_823CE9E0(void);
extern Func_823CE840 *fn_823D1ED0(Func_823CE840 *out, Bind_823CE840 b);
extern void fn_823E4820(Self_823CE840 *self, int kind, Data_823CE840 *data, __vector4 v);
extern void fn_823EAC80(void *px, Data_823CE840 *data);
extern Cfg_823CE840 *lbl_832975B0;

void fn_823CE840(Self_823CE840 *self, int kind, __vector4 v)
{
    Data_823CE840 data;
    Cfg_823CE840 *cfg;
    Sp_823CE840 sp;
    fn_82250D78(&data);
    fn_823E4820(self, kind, &data, v);
    cfg = lbl_832975B0 ? lbl_832975B0 : fn_82250A18();
    if (cfg->enabled != 0) {
        void *target = self->target;
        if (target != 0) {
            Func_823CE840 f;
            Func_823CE840 *pf;
            Bind_823CE840 b;
            Method_823CE840 m;
            b.obj = self;
            m.adjust = 0;
            m.fn = fn_823CE9E0;
            b.method = m;
            b.data = data;
            pf = fn_823D1ED0(&f, b);
            fn_8227CB30(&self->callbacks, pf);
            fn_82359C18(pf);
            fn_823EAC80(fn_822EFBF0(&sp, target)->px, &data);
            if (sp.rep != 0)
                fn_822315A0(sp.rep);
        }
    } else {
        Func_823CE840 f;
        Func_823CE840 *pf;
        Bind_823CE840 b;
        Method_823CE840 m;
        b.obj = self;
        m.adjust = 0;
        m.fn = fn_823CE9E0;
        b.method = m;
        b.data = data;
        pf = fn_823D1ED0(&f, b);
        fn_8227CB30(&self->callbacks, pf);
        fn_82359C18(pf);
    }
}
