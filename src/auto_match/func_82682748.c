typedef struct Item_82682748 { int pad0; int flags; } Item_82682748;
typedef struct Counter_82682748 { int pad[2]; unsigned int count; } Counter_82682748;
typedef struct Stats_82682748 { int a; int pad4; int b; } Stats_82682748;

extern void fn_8267C4F0(void *p);
extern Counter_82682748 *fn_826BD8C8(Stats_82682748 *stats);
extern void fn_826824B0(Counter_82682748 *c);
extern void fn_826944C8(Stats_82682748 *stats);
extern void fn_8269A608(Stats_82682748 *stats);
extern void fn_8267BE38(Stats_82682748 *stats);

/* Release counterpart of Matching fn_82681FE0. */
void fn_82682748(void *self, Item_82682748 *item, Stats_82682748 *stats)
{
    switch (item->flags & 0x8f) {
    case 4:
        if (--stats->b == 0)
            fn_826944C8(stats);
        break;
    case 5:
        fn_8267C4F0((char *)stats - 0xc);
        break;
    case 6:
    case 7:
        fn_826824B0(fn_826BD8C8(stats));
        break;
    case 8:
        if (--stats->a <= 0) {
            fn_8269A608(stats);
            fn_8267BE38(stats);
        }
        break;
    }
}
