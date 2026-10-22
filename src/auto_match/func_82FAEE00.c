typedef struct Item Item;
typedef struct Arg {
    int pad[2];
    unsigned char flag;
} Arg;

typedef struct ItemVtbl {
    void *slots[0x34 / 4];
    void (*update)(Item *self, Arg *arg);
} ItemVtbl;

struct Item {
    ItemVtbl *vtbl;
    int pad[4];
    int f14;
    unsigned short f18;
};

typedef struct Entry {
    int key;
    Item *item;
} Entry;

typedef struct Obj {
    char pad[0x7c];
    Entry *begin;
    Entry *end;
} Obj;

void fn_82FAEE00(Obj *p, Arg *arg)
{
    Entry *e;
    Item *it;

    for (e = p->begin; e != p->end; e++) {
        if (!arg->flag || e->item->f14 == 0) {
            it = e->item;
            if (it->f18 != 0) {
                it->vtbl->update(it, arg);
            }
        }
    }
}
