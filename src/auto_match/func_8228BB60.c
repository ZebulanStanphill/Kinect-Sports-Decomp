typedef struct Item_8228BB60 {
    int v[14];
} Item_8228BB60;

typedef struct ItemVector_8228BB60 {
    int alloc;
    Item_8228BB60 *begin;
    Item_8228BB60 *end;
    Item_8228BB60 *last;
} ItemVector_8228BB60;

static __forceinline unsigned int Size(ItemVector_8228BB60 *v)
{
    return v->end - v->begin;
}

typedef struct Pages_8228BB60 {
    char pad0[0x5c0];
    int list;                   /* 0x5c0 */
    char pad5c4[0x5d8 - 0x5c4];
    unsigned int first;         /* 0x5d8 */
    char pad5dc[0x630 - 0x5dc];
    unsigned int perPage;       /* 0x630 */
    char pad634[0x6e4 - 0x634];
    ItemVector_8228BB60 items;  /* 0x6e4 */
} Pages_8228BB60;

typedef struct Screen_8228BB60 {
    char pad0[0x614];
    Pages_8228BB60 *pages;
} Screen_8228BB60;

typedef struct Owner_8228BB60 {
    int f00;
    Screen_8228BB60 *screen;
} Owner_8228BB60;

extern void fn_82267750(int list, unsigned int index);
extern void fn_82268470(Pages_8228BB60 *pages);

void fn_8228BB60(Owner_8228BB60 *self)
{
    Pages_8228BB60 *p = self->screen->pages;
    unsigned int old, cur, i;

    old = p->first;
    i = 0;
    cur = p->perPage + old;
    p->first = cur;
    if (cur >= Size(&p->items)) p->first = 0;
    if (p->first != old) {
        if (p->perPage != 0) {
            do {
                fn_82267750(p->list, i);
                i++;
            } while (i < p->perPage);
        }
        fn_82268470(p);
    }
}
