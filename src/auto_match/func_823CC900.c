typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Vec_823CC900 {
    __vector4 v;
} Vec_823CC900;

typedef struct Config_823CC900 {
    int pad0;
    unsigned char enabled; /* 0x4 */
} Config_823CC900;

typedef struct Self_823CC900 {
    char pad0[0x84];
    void *target; /* 0x84 */
} Self_823CC900;

typedef struct Sp_823CC900 {
    void *px;
    void *rep;
} Sp_823CC900;

typedef struct Target_823CC900 {
    char *base;
} Target_823CC900;

typedef struct IndexList_823CC900 {
    int count;      /* 0x0 */
    int indices[7]; /* 0x4 */
} IndexList_823CC900;

typedef struct Params_823CC900 {
    IndexList_823CC900 first;  /* 0x0 */
    IndexList_823CC900 second; /* 0x20 */
    int field40;               /* 0x40 */
    int field44;               /* 0x44 */
    int field48;               /* 0x48 */
} Params_823CC900;

__vector4 __VMXGetReg(int n);

extern Config_823CC900 *lbl_832975B0;
extern Config_823CC900 *fn_82250A18(void);
extern void fn_822315A0(void *rep);
extern Sp_823CC900 *fn_822EFBF0(Sp_823CC900 *out, void *target);
extern void fn_82250D10(Params_823CC900 *params);
extern Vec_823CC900 fn_82368E38(Self_823CC900 *self, float time);
extern void fn_823E7368(Self_823CC900 *self, Params_823CC900 *params, __vector4 a, __vector4 b);
extern void fn_823CC9F0(Self_823CC900 *self, int key, Params_823CC900 *params);
extern void fn_823F0A30(char *target, int key, Params_823CC900 *params);

static __forceinline Config_823CC900 *GetConfig(void)
{
    if (lbl_832975B0) {
        return lbl_832975B0;
    }
    return fn_82250A18();
}

void fn_823CC900(Self_823CC900 *self, int key)
{
    Params_823CC900 params;
    Sp_823CC900 sp;
    __vector4 zero;

    fn_82250D10(&params);
    zero = __VMXGetReg(77);
    fn_823E7368(self, &params, fn_82368E38(self, 0.0f).v, zero);
    if (GetConfig()->enabled) {
        void *target = self->target;
        if (target != 0) {
            fn_823F0A30(((Target_823CC900 *)fn_822EFBF0(&sp, target)->px)->base + 0x618, key, &params);
            if (sp.rep != 0) {
                fn_822315A0(sp.rep);
            }
        }
    } else {
        fn_823CC9F0(self, key, &params);
    }
}
