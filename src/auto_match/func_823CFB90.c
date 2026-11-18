typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Matrix_823CFB90 {
    __vector4 rows[4];
} Matrix_823CFB90;

typedef struct Config_823CFB90 {
    int pad0;
    unsigned char enabled; /* 0x4 */
} Config_823CFB90;

typedef struct Entry_823CFB90 {
    void **items; /* 0x0 */
    char pad4[0xc];
    unsigned int current; /* 0x10 */
} Entry_823CFB90;

typedef struct Table_823CFB90 {
    Entry_823CFB90 **entries;
} Table_823CFB90;

typedef struct Self_823CFB90 {
    char pad0[0x8];
    Table_823CFB90 *table; /* 0x8 */
    char padC[0x84 - 0xc];
    void *target; /* 0x84 */
} Self_823CFB90;

typedef struct Value_823CFB90 {
    char pad0[0x168];
    void *dynamic; /* 0x168 */
    int enabled;   /* 0x16c */
} Value_823CFB90;

typedef struct Sp_823CFB90 {
    void *px;
    void *rep;
} Sp_823CFB90;

typedef struct Target_823CFB90 {
    char *base;
} Target_823CFB90;

extern Config_823CFB90 *lbl_832975B0;
extern Config_823CFB90 *fn_82250A18(void);
extern void fn_822315A0(void *rep);
extern Sp_823CFB90 *fn_822EFBF0(Sp_823CFB90 *out, void *target);
extern Value_823CFB90 *fn_822ABA88(void *obj, int key);
extern unsigned char fn_8288B760(void *obj);
extern void fn_823CFCE8(Self_823CFB90 *self, int key, int index, __vector4 v, float f, Matrix_823CFB90 *m,
                        int flag);
extern void fn_823F1B08(char *target, int key, int index, __vector4 v, float f, Matrix_823CFB90 m,
                        unsigned char flag);

static __forceinline Config_823CFB90 *GetConfig(void)
{
    if (lbl_832975B0) {
        return lbl_832975B0;
    }
    return fn_82250A18();
}

void fn_823CFB90(Self_823CFB90 *self, int key, int index, __vector4 v, float f, Matrix_823CFB90 *m, int flag)
{
    Sp_823CFB90 sp;

    if (GetConfig()->enabled) {
        void *target = self->target;
        Entry_823CFB90 *entry = self->table->entries[index];
        Value_823CFB90 *value = fn_822ABA88(entry->items[entry->current], key);
        if (target != 0) {
            int enabled;
            if (value->dynamic) {
                enabled = fn_8288B760(value->dynamic);
            } else {
                enabled = value->enabled;
            }
            if (enabled) {
                fn_823F1B08(((Target_823CFB90 *)fn_822EFBF0(&sp, target)->px)->base + 0x9c0, key, index, v, f,
                            *m, flag != 0);
                if (sp.rep != 0) {
                    fn_822315A0(sp.rep);
                }
            }
        }
    } else {
        fn_823CFCE8(self, key, index, v, f, m, flag);
    }
}
