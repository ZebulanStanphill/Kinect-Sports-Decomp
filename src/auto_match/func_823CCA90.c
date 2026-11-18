typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Config_823CCA90 {
    int pad0;
    unsigned char enabled; /* 0x4 */
} Config_823CCA90;

typedef struct Body_823CCA90 {
    char pad0[0x50];
    __vector4 position; /* 0x50 */
} Body_823CCA90;

typedef struct Self_823CCA90 {
    char pad0[0x84];
    void *target; /* 0x84 */
    char pad88[0xe10 - 0x88];
    Body_823CCA90 *body; /* 0xe10 */
} Self_823CCA90;

typedef struct Sp_823CCA90 {
    void *px;
    void *rep;
} Sp_823CCA90;

typedef struct Target_823CCA90 {
    char *base;
} Target_823CCA90;

typedef struct IndexList_823CCA90 {
    int count;      /* 0x0 */
    int indices[7]; /* 0x4 */
} IndexList_823CCA90;

typedef struct Params_823CCA90 {
    IndexList_823CCA90 first;  /* 0x0 */
    IndexList_823CCA90 second; /* 0x20 */
    int field40;               /* 0x40 */
    int field44;               /* 0x44 */
    int field48;               /* 0x48 */
} Params_823CCA90;

__vector4 __VMXGetReg(int n);

extern unsigned int lbl_83265A28;
extern Config_823CCA90 *lbl_832975B0;
extern Config_823CCA90 *fn_82250A18(void);
extern void fn_822315A0(void *rep);
extern Sp_823CCA90 *fn_822EFBF0(Sp_823CCA90 *out, void *target);
extern void fn_82250D10(Params_823CCA90 *params);
extern void fn_823E7368(Self_823CCA90 *self, Params_823CCA90 *params, __vector4 a, __vector4 b);
extern void fn_823CCBA8(Self_823CCA90 *self, __vector4 position, int key, unsigned char arg,
                        unsigned char flip, Params_823CCA90 *params, int extra);
extern void fn_823F2978(char *target, __vector4 position, int key, unsigned char flip,
                        Params_823CCA90 *params, int extra);

static __forceinline Config_823CCA90 *GetConfig(void)
{
    if (lbl_832975B0) {
        return lbl_832975B0;
    }
    return fn_82250A18();
}

void fn_823CCA90(Self_823CCA90 *self, int key, int extra)
{
    Params_823CCA90 params;
    Sp_823CCA90 sp;
    __vector4 position;
    __vector4 zero;
    unsigned char flip;

    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    flip = (int)lbl_83265A28 > 0;
    position = self->body->position;
    fn_82250D10(&params);
    zero = __VMXGetReg(77);
    fn_823E7368(self, &params, position, zero);
    if (GetConfig()->enabled) {
        void *target = self->target;
        if (target != 0) {
            fn_823F2978(((Target_823CCA90 *)fn_822EFBF0(&sp, target)->px)->base + 0xc38, position, key, flip,
                        &params, extra);
            if (sp.rep != 0) {
                fn_822315A0(sp.rep);
            }
        }
    } else {
        fn_823CCBA8(self, position, key, 0, flip, &params, extra);
    }
}
