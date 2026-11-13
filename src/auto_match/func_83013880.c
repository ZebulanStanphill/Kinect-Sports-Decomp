typedef unsigned U;
typedef int (*Handler_83013880)(const void *iid);
typedef struct Value_83013880 {
    int unk0;
    Handler_83013880 handler;
} Value_83013880;
typedef struct Entry_83013880 {
    U key;
    Value_83013880 value;
} Entry_83013880;
typedef struct Table_83013880 {
    Entry_83013880 *first;
    Entry_83013880 *last;
} Table_83013880;

extern Table_83013880 lbl_832645D8;

static __forceinline Value_83013880 *Find(Table_83013880 *self, U key)
{
    Entry_83013880 *end = self->last, *p = self->first;
    for (; p != end && p->key != key; p++) {}
    return (p != end) != 0 ? &p->value : 0;
}

int fn_83013880(const void *iid, U key, int *out)
{
    Value_83013880 *v;

    *out = 0;
    v = Find(&lbl_832645D8, key);
    if (v == 0)
        return 2;
    if (v->handler == 0)
        return 1;
    *out = v->handler(iid);
    return (*out == 0) + 1;
}
