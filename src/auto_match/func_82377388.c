typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Config_82377388 {
    char pad[4];
    unsigned char enabled;
} Config_82377388;

typedef struct Target_82377388 {
    char pad[0x78];
    char *base;
} Target_82377388;

typedef struct Link_82377388 {
    char pad[0x88];
    Target_82377388 *target;
} Link_82377388;

typedef struct Self_82377388 {
    char pad[0x84];
    Link_82377388 *link;
} Self_82377388;

extern Config_82377388 *lbl_832975B0;
extern Config_82377388 *fn_82250A18(void);

typedef struct Entry_82377388 {
    void **items;
    char pad[0xc];
    unsigned int current;
} Entry_82377388;

typedef struct Table_82377388 {
    Entry_82377388 **entries;
} Table_82377388;

typedef struct Value_82377388 {
    char pad[0x168];
    void *dynamic;
    int enabled;
} Value_82377388;

extern Value_82377388 *fn_822ABA88(void *obj, int key);
extern unsigned char fn_8288B760(void *obj);
extern void fn_82390DC0(void *obj, __vector4 a, __vector4 b, __vector4 c, float t, int value, int index,
                        int key, float u);

static __forceinline Config_82377388 *GetConfig(void)
{
    if (lbl_832975B0)
        return lbl_832975B0;
    return fn_82250A18();
}

void fn_82377388(Self_82377388 *self, __vector4 a, __vector4 b, __vector4 c, float t, int value, int index,
                 int key, float u)
{
    if (GetConfig()->enabled) {
        Link_82377388 *link = self->link;
        if (link) {
            Table_82377388 *table = *(Table_82377388 **)((char *)self + 8);
            Entry_82377388 *entry = table->entries[index];
            Value_82377388 *v = fn_822ABA88(entry->items[entry->current], key);
            int enabled;
            if (v->dynamic)
                enabled = fn_8288B760(v->dynamic);
            else
                enabled = v->enabled;
            if (enabled && link->target)
                fn_82390DC0(link->target->base + 0xc0, a, b, c, t, value, index, key, u);
        }
    }
}
