typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Self_823CEC40 Self_823CEC40;
typedef struct Data_823CEC40 { int kind; __vector4 v; } Data_823CEC40;
typedef struct Method_823CEC40 { void (*fn)(void); int adjust; } Method_823CEC40;
typedef struct Bind_823CEC40 {
    Method_823CEC40 method;
    Self_823CEC40 *obj;
    Data_823CEC40 data;
} Bind_823CEC40;
typedef struct Func_823CEC40 { int words[6]; } Func_823CEC40;
typedef struct Sp_823CEC40 { void *px; void *rep; } Sp_823CEC40;
typedef struct Target_823CEC40 { char *base; } Target_823CEC40;
struct Self_823CEC40 {
    char pad0[0x84];
    void *target;
    char pad88[0xb48 - 0x88];
    int callbacks;
};
typedef struct Cfg_823CEC40 { int pad0; unsigned char enabled; } Cfg_823CEC40;

extern void fn_822315A0(void *rep);
extern Cfg_823CEC40 *fn_82250A18(void);
extern void fn_8227CB30(int *list, Func_823CEC40 *f);
extern Sp_823CEC40 *fn_822EFBF0(Sp_823CEC40 *out, void *target);
extern void fn_82359C18(Func_823CEC40 *f);
extern void fn_823CED90(void);
extern Func_823CEC40 *fn_823D1F70(Func_823CEC40 *out, Bind_823CEC40 b);
extern void fn_823F0828(void *target, int kind, __vector4 v);
extern Cfg_823CEC40 *lbl_832975B0;

void fn_823CEC40(Self_823CEC40 *self, int kind, __vector4 v)
{
    Cfg_823CEC40 *cfg;
    Sp_823CEC40 sp;
    cfg = lbl_832975B0 ? lbl_832975B0 : fn_82250A18();
    if (cfg->enabled != 0) {
        void *target = self->target;
        if (target != 0) {
            Func_823CEC40 f;
            Func_823CEC40 *pf;
            Bind_823CEC40 b;
            Method_823CEC40 m;
            b.obj = self;
            m.adjust = 0;
            m.fn = fn_823CED90;
            b.method = m;
            b.data.kind = kind;
            b.data.v = v;
            pf = fn_823D1F70(&f, b);
            fn_8227CB30(&self->callbacks, pf);
            fn_82359C18(pf);
            fn_823F0828(((Target_823CEC40 *)fn_822EFBF0(&sp, target)->px)->base + 0xa8, kind, v);
            if (sp.rep != 0)
                fn_822315A0(sp.rep);
        }
    } else {
        Func_823CEC40 f;
        Func_823CEC40 *pf;
        Bind_823CEC40 b;
        Method_823CEC40 m;
        b.obj = self;
        m.adjust = 0;
        m.fn = fn_823CED90;
        b.method = m;
        b.data.kind = kind;
        b.data.v = v;
        pf = fn_823D1F70(&f, b);
        fn_8227CB30(&self->callbacks, pf);
        fn_82359C18(pf);
    }
}
