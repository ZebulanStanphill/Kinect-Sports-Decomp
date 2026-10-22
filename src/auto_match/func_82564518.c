typedef struct Item {
    char pad0[0x2a];
    unsigned short parent;
    char pad2c[2];
    char name[6];
} Item;

typedef struct Src Src;
typedef struct SrcVtbl {
    void *f0;
    void (*getItems)(Src *self, Item **out);
} SrcVtbl;
struct Src {
    SrcVtbl *vt;
};

extern void fn_8234D330(void *ctx, char *name);
extern void fn_825645B0(void *ctx, Src *src, Item *item, int flag);

void fn_82564518(void *ctx, Src *src, int index)
{
    Item *items;
    Item *all;
    Item *it;

    src->vt->getItems(src, &items);
    it = &items[index];
    src->vt->getItems(src, &all);
    if (it != 0) {
        fn_8234D330(ctx, it->name);
        if (it->parent != 0xffff) {
            fn_825645B0(ctx, src, &all[it->parent], 1);
        }
    }
}
