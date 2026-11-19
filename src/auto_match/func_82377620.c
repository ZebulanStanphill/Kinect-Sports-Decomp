typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Config_82377620 {
    char pad[4];
    unsigned char enabled; /* 0x04 */
} Config_82377620;

typedef struct Link_82377620 {
    char pad[0x88];
    void *target; /* 0x88 */
} Link_82377620;

typedef struct Entry_82377620 {
    void **items; /* 0x00 */
    char pad[0xc];
    unsigned int current; /* 0x10 */
} Entry_82377620;

typedef struct Table_82377620 {
    Entry_82377620 **entries; /* 0x00 */
} Table_82377620;

typedef struct Self_82377620 {
    char pad00[0x8];
    Table_82377620 *table; /* 0x08 */
    char pad0c[0x78];
    Link_82377620 *link; /* 0x84 */
} Self_82377620;

typedef struct Value_82377620 {
    char pad[0x168];
    void *dynamic; /* 0x168 */
    int enabled;   /* 0x16c */
} Value_82377620;

typedef struct Params_82377620 {
    __vector4 a; /* 0x00 */
    __vector4 b; /* 0x10 */
    __vector4 c; /* 0x20 */
    float t;     /* 0x30 */
    int value;   /* 0x34 */
    char pad38[0x8];
    int index; /* 0x40 */
    int key;   /* 0x44 */
    int arg5;  /* 0x48 */
    int arg6;  /* 0x4c */
    int arg7;  /* 0x50 */
    char pad54[0xc];
    __vector4 d;        /* 0x60 */
    int arg8;           /* 0x70 */
    int arg9;           /* 0x74 */
    float u;            /* 0x78 */
    float v;            /* 0x7c */
    unsigned char flag; /* 0x80 */
} Params_82377620;

extern Config_82377620 *lbl_832975B0;
extern Config_82377620 *fn_82250A18(void);
extern Value_82377620 *fn_822ABA88(void *obj, int key);
extern unsigned char fn_8288B760(void *obj);
extern void fn_8238EE00(void *target, Params_82377620 *params);

static __forceinline void Notify_82377620(Link_82377620 *link, Params_82377620 *params)
{
    if (link->target)
        fn_8238EE00(link->target, params);
}

static __forceinline Config_82377620 *GetConfig_82377620(void)
{
    if (lbl_832975B0)
        return lbl_832975B0;
    return fn_82250A18();
}

void fn_82377620(Self_82377620 *self, __vector4 a, __vector4 b, __vector4 c, float t, int value, int index,
                 int key, int arg5, int arg6, int arg7, __vector4 d, int arg8, int arg9, float u, float v,
                 unsigned char flag)
{
    if (GetConfig_82377620()->enabled) {
        Link_82377620 *link = self->link;
        if (link) {
            Table_82377620 *table = self->table;
            Entry_82377620 *entry = table->entries[index];
            Value_82377620 *val = fn_822ABA88(entry->items[entry->current], key);
            int enabled;
            Params_82377620 params;

            if (val->dynamic)
                enabled = fn_8288B760(val->dynamic);
            else
                enabled = val->enabled;
            if (enabled) {
                params.a = a;
                params.b = b;
                params.c = c;
                params.t = t;
                params.value = value;
                params.index = index;
                params.key = key;
                params.arg5 = arg5;
                params.arg6 = arg6;
                params.arg7 = arg7;
                params.d = d;
                params.arg8 = arg8;
                params.arg9 = arg9;
                params.u = u;
                params.v = v;
                params.flag = flag;
                Notify_82377620(link, &params);
            }
        }
    }
}
