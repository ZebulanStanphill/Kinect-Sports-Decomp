typedef struct Mgr_82464660 {
    char pad0[0xB8];
    char *b8;
    char pad1[0x3E4 - 0xBC];
    char *p3e4;
    char pad3[0x8C4 - 0x3E8];
    char *p8c4;
} Mgr_82464660;

typedef struct Vec_82464660 {
    void **first;
    void **last;
    void **end;
} Vec_82464660;

typedef struct Obj_82464660 {
    char pad0[8];
    Mgr_82464660 *mgr;
    char pad1[0x54 - 0xC];
    Vec_82464660 items;
} Obj_82464660;

extern void fn_8252ACC0(void *item, Mgr_82464660 *mgr);
extern void *memmove(void *, const void *, unsigned int);

static __forceinline void **Erase_82464660(Vec_82464660 *v, void **first, void **last)
{
    if (first != last) {
        int n = v->last - last;
        memmove(first, last, n * sizeof(void *));
        v->last = first + n;
    }
    return first;
}

static __forceinline void Clear_82464660(Vec_82464660 *v)
{
    Erase_82464660(v, v->first, v->last);
}

void fn_82464660(Obj_82464660 *o)
{
    void **it;
    char *p;

    for (it = o->items.first; it != o->items.last; it++)
        fn_8252ACC0(*it, o->mgr);
    Clear_82464660(&o->items);
    p = o->mgr->p3e4;
    if (p != 0)
        *(int *)(p + 0xb70) = 0;
    *(int *)(o->mgr->p8c4 + 0x2c) = 0;
    *(int *)(o->mgr->b8 + 0x28) = 0;
}
