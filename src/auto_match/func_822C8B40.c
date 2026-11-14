typedef struct Str_822C8B40 {
    union {
        char *p;
        char buf[16];
    } u;
    unsigned int size;
    unsigned int cap;
    int alloc;
} Str_822C8B40;

typedef struct Item_822C8B40 {
    int pad0;
    Str_822C8B40 name;
} Item_822C8B40;

typedef struct RefCount_822C8B40 RefCount_822C8B40;

typedef struct ItemPtr_822C8B40 {
    Item_822C8B40 *ptr;
    RefCount_822C8B40 *rep;
} ItemPtr_822C8B40;

typedef struct Vec_822C8B40 {
    ItemPtr_822C8B40 *first;
    ItemPtr_822C8B40 *last;
    ItemPtr_822C8B40 *end;
} Vec_822C8B40;

typedef struct Self_822C8B40 {
    char pad0[0x10];
    Vec_822C8B40 items;
} Self_822C8B40;

extern int fn_8260D428(Str_822C8B40 *, int, unsigned int, const char *, unsigned int);
extern ItemPtr_822C8B40 *fn_82365BD8(ItemPtr_822C8B40 *out, ItemPtr_822C8B40 *src);
extern void fn_822315A0(RefCount_822C8B40 *rep);
extern void fn_822C9D68(Vec_822C8B40 *vec, ItemPtr_822C8B40 *item);

static __forceinline const char *cstr(Str_822C8B40 *s)
{
    return s->cap >= 0x10 ? s->u.p : s->u.buf;
}

static __forceinline int cmp(Str_822C8B40 *a, Str_822C8B40 *b)
{
    unsigned int len = b->size;
    const char *p = cstr(b);
    return fn_8260D428(a, 0, a->size, p, len);
}

static __forceinline void SwapRep(RefCount_822C8B40 **a, RefCount_822C8B40 **b)
{
    RefCount_822C8B40 *t = *a;
    *a = *b;
    *b = t;
}

static __forceinline void SwapPtr(Item_822C8B40 **a, Item_822C8B40 **b)
{
    Item_822C8B40 *t = *a;
    *a = *b;
    *b = t;
}

static __forceinline void Swap(ItemPtr_822C8B40 *a, ItemPtr_822C8B40 *b)
{
    SwapRep(&a->rep, &b->rep);
    SwapPtr(&a->ptr, &b->ptr);
}

static __forceinline void Release(ItemPtr_822C8B40 *p)
{
    if (p->rep != 0) {
        fn_822315A0(p->rep);
    }
}

void fn_822C8B40(Self_822C8B40 *self, ItemPtr_822C8B40 *item)
{
    ItemPtr_822C8B40 *last = self->items.last;
    ItemPtr_822C8B40 *it;
    for (it = self->items.first; it != last; it++) {
        if (cmp(&it->ptr->name, &item->ptr->name) == 0) {
            break;
        }
    }
    if (it != self->items.last) {
        ItemPtr_822C8B40 tmp;
        ItemPtr_822C8B40 *t = fn_82365BD8(&tmp, item);
        RefCount_822C8B40 *rep;
        Item_822C8B40 *ptr;
        Swap(t, it);
        Release(&tmp);
    } else {
        fn_822C9D68(&self->items, item);
    }
}
