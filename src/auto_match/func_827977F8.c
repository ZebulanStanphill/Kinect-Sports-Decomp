typedef struct Item { void *p; int x4; int x8; } Item;
typedef struct Vec { Item **data; unsigned int size; } Vec;
typedef struct Obj {
    char pad[0xc];
    Vec items;
    char pad14[0xc];
    unsigned char flags;
} Obj;
extern void fn_82794B88(Obj *o);
extern void fn_8267BE38(void *p);
extern void fn_82796100(Vec *v, unsigned int n);

void fn_827977F8(Obj *o)
{
    unsigned int n = o->items.size;
    unsigned int i;
    for (i = 0; i < n; i++) {
        Item **d = o->items.data;
        Item *it = d[i];
        fn_82794B88(o);
        fn_8267BE38(it->p);
        it->p = 0;
        it->x8 = 0;
        it->x4 = 0;
    }
    fn_82796100(&o->items, 0);
    o->flags &= ~1;
}
