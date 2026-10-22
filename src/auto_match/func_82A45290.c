typedef struct Item {
    char pad0[0x40];
    void *ctx;
    char pad44[0x60 - 0x44];
} Item;

typedef struct Obj {
    unsigned int count;
    unsigned int flags;
    Item *items;
} Obj;

extern void XMAReleaseContext(void *ctx);

int fn_82A45290(Obj *o)
{
    unsigned int i;

    for (i = 0; i < o->count; i++) {
        if (o->items[i].ctx != 0) {
            XMAReleaseContext(o->items[i].ctx);
            o->items[i].ctx = 0;
        }
    }
    o->flags &= ~0x40000;
    return 0;
}
