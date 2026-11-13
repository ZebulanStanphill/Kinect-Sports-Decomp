typedef struct Item_82A46670 {
    int key;                 /* 0x00 */
    int pad4[4];
    unsigned int count;      /* 0x14 */
    int value;               /* 0x18 */
} Item_82A46670;

typedef struct Obj_82A46670 {
    char pad0[0x8c];
    char table[0x1c4 - 0x8c];  /* 0x8c */
    int f1c4;
    int f1c8;
    int pad1cc;
    int f1d0;
    char pad1d4[0x25c - 0x1d4];
    int active;              /* 0x25c */
    int f260;
    char pad264[0xc];
    char src[0x18];          /* 0x270 */
    Item_82A46670 **current; /* 0x288 */
    char pad28c[0xc];
    char dst[1];             /* 0x298 */
} Obj_82A46670;

extern int fn_82A40BA8(void *src);
extern void fn_82A44370(void *dst, int v);
extern void fn_82A43340(void *table, int value, int key);

void fn_82A46670(Obj_82A46670 *o)
{
    Item_82A46670 *item;

    if (o->active != 0) {
        if (o->current != 0) {
            item = *o->current;
        } else {
            item = 0;
        }
        if (item->count != 0xff) {
            item->count--;
        }
        fn_82A43340(o->table, item->value, item->key);
    } else {
        fn_82A44370(o->dst, fn_82A40BA8(o->src));
        o->f260 = 0;
    }
    o->f1c4 = 0;
    o->f1c8 = 0;
    o->f1d0 = 0;
}
