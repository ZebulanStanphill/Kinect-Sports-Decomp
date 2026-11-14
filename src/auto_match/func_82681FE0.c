typedef struct Item_82681FE0 { int pad0; int flags; } Item_82681FE0;
typedef struct Counter_82681FE0 { int pad[2]; unsigned int count; } Counter_82681FE0;
typedef struct Stats_82681FE0 { int a; int pad4; int b; } Stats_82681FE0;

extern void fn_8267C4C8(void *p);
extern Counter_82681FE0 *fn_826BD8C8(Stats_82681FE0 *stats);

void fn_82681FE0(void *self, Item_82681FE0 *item, Stats_82681FE0 *stats)
{
    Counter_82681FE0 *c;
    switch (item->flags & 0x8f) {
    case 4:
        stats->b++;
        break;
    case 5:
        fn_8267C4C8((char *)stats - 0xc);
        break;
    case 6:
    case 7:
        c = fn_826BD8C8(stats);
        c->count = (c->count + 1) & 0x8fffffff;
        break;
    case 8:
        stats->a++;
        break;
    }
}
