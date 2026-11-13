typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Self_823CF8B0 Self_823CF8B0;
typedef struct Data_823CF8B0 { __vector4 v[9]; } Data_823CF8B0;
typedef struct Method_823CF8B0 { void (*fn)(void); int adjust; } Method_823CF8B0;
typedef struct Bind_823CF8B0 {
    Method_823CF8B0 method;
    Self_823CF8B0 *obj;
    Data_823CF8B0 data;
} Bind_823CF8B0;
typedef struct Func_823CF8B0 { int words[6]; } Func_823CF8B0;
typedef struct Sp_823CF8B0 { void *px; void *rep; } Sp_823CF8B0;
struct Self_823CF8B0 {
    char pad0[0x84];
    void *target;
    char pad88[0xcc - 0x88];
    int id;                 /* 0xcc */
    char padd0[0xbd8 - 0xd0];
    int callbacks;          /* 0xbd8 */
};
typedef struct Cfg_823CF8B0 { int pad0; unsigned char enabled; } Cfg_823CF8B0;

extern void fn_822315A0(void *rep);
extern Cfg_823CF8B0 *fn_82250A18(void);
extern void fn_82250D78(Data_823CF8B0 *data);
extern void fn_8227CB30(int *list, Func_823CF8B0 *f);
extern Sp_823CF8B0 *fn_822EFBF0(Sp_823CF8B0 *out, void *target);
extern void fn_82359C18(Func_823CF8B0 *f);
extern void fn_823CFA50(void);
extern Func_823CF8B0 *fn_823D20A8(Func_823CF8B0 *out, Bind_823CF8B0 b);
extern void fn_823E51E8(Self_823CF8B0 *self, int id, int kind, Data_823CF8B0 *data);
extern void fn_823EAD78(void *px, Data_823CF8B0 *data);
extern Cfg_823CF8B0 *lbl_832975B0;

void fn_823CF8B0(Self_823CF8B0 *self, int id, int kind)
{
    Data_823CF8B0 data;
    Cfg_823CF8B0 *cfg;
    Sp_823CF8B0 sp;
    fn_82250D78(&data);
    fn_823E51E8(self, id, kind, &data);
    cfg = lbl_832975B0 ? lbl_832975B0 : fn_82250A18();
    if (cfg->enabled != 0) {
        void *target = self->target;
        if (target != 0 && id == self->id) {
            Func_823CF8B0 f;
            Func_823CF8B0 *pf;
            Bind_823CF8B0 b;
            Method_823CF8B0 m;
            b.obj = self;
            m.adjust = 0;
            m.fn = fn_823CFA50;
            b.method = m;
            b.data = data;
            pf = fn_823D20A8(&f, b);
            fn_8227CB30(&self->callbacks, pf);
            fn_82359C18(pf);
            fn_823EAD78(fn_822EFBF0(&sp, target)->px, &data);
            if (sp.rep != 0)
                fn_822315A0(sp.rep);
        }
    } else {
        Func_823CF8B0 f;
        Func_823CF8B0 *pf;
        Bind_823CF8B0 b;
        Method_823CF8B0 m;
        b.obj = self;
        m.adjust = 0;
        m.fn = fn_823CFA50;
        b.method = m;
        b.data = data;
        pf = fn_823D20A8(&f, b);
        fn_8227CB30(&self->callbacks, pf);
        fn_82359C18(pf);
    }
}
