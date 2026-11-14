extern void fn_824A7FF8(void *p);
extern void fn_8265CA20(void *p);
extern char lbl_821B9BC8[];

typedef struct Item_82417020 {
    int pad0;
    void *vtable;           /* 0x4 */
    char pad8[0x10];
} Item_82417020;

typedef struct Entry_82417020 {
    char data[0x1ac];
} Entry_82417020;

typedef struct EntryVec_82417020 {
    Entry_82417020 *begin;
    Entry_82417020 *end;
    Entry_82417020 *cap;
} EntryVec_82417020;

typedef struct Vec_82417020 {
    void *begin;
    void *end;
    void *cap;
} Vec_82417020;

typedef struct ItemVec_82417020 {
    Item_82417020 *begin;
    Item_82417020 *end;
    Item_82417020 *cap;
} ItemVec_82417020;

typedef struct Self_82417020 {
    char pad0[0x8];
    EntryVec_82417020 entries;  /* 0x8 */
    char pad14[0xc];
    Vec_82417020 v20;           /* 0x20 */
    char pad2c[0x88 - 0x2c];
    Vec_82417020 v88;           /* 0x88 */
    char pad94[0xa0 - 0x94];
    char setA0[0x70];           /* 0xa0 */
    char set110[0x3f8 - 0x110]; /* 0x110 */
    ItemVec_82417020 items;     /* 0x3f8 */
} Self_82417020;

void fn_82417020(Self_82417020 *self)
{
    EntryVec_82417020 *v;
    Entry_82417020 *e;

    if (self->items.begin != 0) {
        Item_82417020 *p = self->items.begin;
        Item_82417020 *end = self->items.end;
        for (; p != end; p++) {
            p->vtable = lbl_821B9BC8;
        }
        fn_8265CA20(self->items.begin);
    }
    self->items.begin = 0;
    self->items.end = 0;
    self->items.cap = 0;
    fn_824A7FF8(self->set110);
    fn_824A7FF8(self->setA0);
    {
        Vec_82417020 *w = &self->v88;
        if (w->begin != 0) {
            fn_8265CA20(w->begin);
        }
        w->begin = 0;
        w->end = 0;
        w->cap = 0;
    }
    if (self->v20.begin != 0) {
        fn_8265CA20(self->v20.begin);
    }
    self->v20.begin = 0;
    self->v20.end = 0;
    self->v20.cap = 0;
    v = &self->entries;
    if (v->begin != 0) {
        for (e = v->begin; e != v->end; e++) {
        }
        fn_8265CA20(v->begin);
    }
    v->begin = 0;
    v->end = 0;
    v->cap = 0;
}
