typedef unsigned U;
typedef int (*Handler_830137C8)(const void *iid);
typedef struct Entry_830137C8 {
    U key;
    Handler_830137C8 handler;
    int extra;
} Entry_830137C8;
typedef struct Table_830137C8 {
    Entry_830137C8 *first;
    Entry_830137C8 *last;
} Table_830137C8;

extern Table_830137C8 lbl_832645D8;

static __forceinline Handler_830137C8 *Find(Table_830137C8 *self, U key)
{
    Entry_830137C8 *end = self->last, *p = self->first;
    for (; p != end && p->key != key; p++) {}
    return (p != end) != 0 ? &p->handler : 0;
}

int fn_830137C8(const void *iid, U key, int *out)
{
    Handler_830137C8 *h;

    *out = 0;
    h = Find(&lbl_832645D8, key);
    if (h == 0)
        return 2;
    *out = (*h)(iid);
    return (*out == 0) + 1;
}
