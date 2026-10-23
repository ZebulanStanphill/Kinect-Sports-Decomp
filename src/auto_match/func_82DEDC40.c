extern int fn_82D890C8();

typedef struct Entry {
    int a;
    int b;
    void *p;
} Entry;

typedef struct Obj {
    int pad0[2];
    Entry *entries;     /* 0x08 */
    int nentries;       /* 0x0c */
    int pad10[4];
    void **items;       /* 0x20 */
    int nitems;         /* 0x24 */
} Obj;

void fn_82DEDC40(int ctx, Obj *o)
{
    int i;
    char buf[1];

    for (i = 0; i < o->nitems; i++) {
        fn_82D890C8(buf, ctx, o->items[i]);
    }
    for (i = 0; i < o->nentries; i++) {
        if (o->entries[i].p != 0) {
            fn_82D890C8(buf, ctx, o->entries[i].p);
        }
    }
}
