typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Config_823CFFE8 {
    int pad0;
    unsigned char enabled; /* 0x4 */
} Config_823CFFE8;

typedef struct Entry_823CFFE8 {
    void **items; /* 0x0 */
    char pad4[0xc];
    unsigned int current; /* 0x10 */
} Entry_823CFFE8;

typedef struct Table_823CFFE8 {
    Entry_823CFFE8 **entries;
} Table_823CFFE8;

typedef struct Self_823CFFE8 {
    char pad0[0x8];
    Table_823CFFE8 *table; /* 0x8 */
    char padC[0x84 - 0xc];
    void *target; /* 0x84 */
} Self_823CFFE8;

typedef struct Value_823CFFE8 {
    char pad0[0x168];
    void *dynamic; /* 0x168 */
    int enabled;   /* 0x16c */
} Value_823CFFE8;

typedef struct Sp_823CFFE8 {
    void *px;
    void *rep;
} Sp_823CFFE8;

typedef struct Target_823CFFE8 {
    char *base;
} Target_823CFFE8;

typedef struct IndexList_823CFFE8 {
    int count;      /* 0x0 */
    int indices[7]; /* 0x4 */
} IndexList_823CFFE8;

typedef struct Params_823CFFE8 {
    IndexList_823CFFE8 first;  /* 0x0 */
    IndexList_823CFFE8 second; /* 0x20 */
    int field40;               /* 0x40 */
    int field44;               /* 0x44 */
    int field48;               /* 0x48 */
} Params_823CFFE8;

extern Config_823CFFE8 *lbl_832975B0;
extern Config_823CFFE8 *fn_82250A18(void);
extern void fn_822315A0(void *rep);
extern Sp_823CFFE8 *fn_822EFBF0(Sp_823CFFE8 *out, void *target);
extern Value_823CFFE8 *fn_822ABA88(void *obj, int key);
extern unsigned char fn_8288B760(void *obj);
extern void fn_82250D10(Params_823CFFE8 *params);
extern void fn_823E7368(Self_823CFFE8 *self, Params_823CFFE8 *params, __vector4 a, __vector4 b);
extern void fn_823D0140(Self_823CFFE8 *self, int key, int index, int arg4, int arg5, __vector4 a, __vector4 b,
                        Params_823CFFE8 *params);
extern void fn_823F1EC0(char *target, int key, int index, int arg4, int arg5, __vector4 a, __vector4 b,
                        Params_823CFFE8 *params);

static __forceinline Config_823CFFE8 *GetConfig(void)
{
    if (lbl_832975B0) {
        return lbl_832975B0;
    }
    return fn_82250A18();
}

void fn_823CFFE8(Self_823CFFE8 *self, int key, int index, int arg4, int arg5, __vector4 a, __vector4 b)
{
    Params_823CFFE8 params;
    Sp_823CFFE8 sp;

    fn_82250D10(&params);
    fn_823E7368(self, &params, a, b);
    if (GetConfig()->enabled) {
        void *target = self->target;
        Entry_823CFFE8 *entry = self->table->entries[index];
        Value_823CFFE8 *v = fn_822ABA88(entry->items[entry->current], key);
        if (target != 0) {
            int enabled;
            if (v->dynamic) {
                enabled = fn_8288B760(v->dynamic);
            } else {
                enabled = v->enabled;
            }
            if (enabled) {
                fn_823F1EC0(((Target_823CFFE8 *)fn_822EFBF0(&sp, target)->px)->base + 0xa58, key, index, arg4,
                            arg5, a, b, &params);
                if (sp.rep != 0) {
                    fn_822315A0(sp.rep);
                }
            }
        }
    } else {
        fn_823D0140(self, key, index, arg4, arg5, a, b, &params);
    }
}
