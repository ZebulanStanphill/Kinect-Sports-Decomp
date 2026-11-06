typedef struct Item_8256A858 {
    char pad[0x20];
    int index;
    int unk24;
    unsigned char flags;
} Item_8256A858;

typedef struct Vec_8256A858 {
    Item_8256A858 **first;
    Item_8256A858 **last;
    Item_8256A858 **end;
} Vec_8256A858;

typedef struct Mgr_8256A858 {
    char pad[0x44];
    Vec_8256A858 pending;
    char pad50[4];
    Vec_8256A858 items;
} Mgr_8256A858;

typedef struct Lock_8256A858 {
    void *handle;
    int unk[3];
} Lock_8256A858;

extern Mgr_8256A858 *fn_82569B10(void);
extern void fn_82549610(Lock_8256A858 *lock, Mgr_8256A858 *mgr);
extern void fn_8256B720(void);
extern void fn_8256B658(Item_8256A858 *item);
extern void fn_8256B398(Item_8256A858 *item);
extern void fn_82A1BB18(void);
extern void fn_8259C738(void *handle);
extern void *memmove(void *dst, const void *src, unsigned int n);

static __forceinline void Erase_8256A858(Vec_8256A858 *v, Item_8256A858 **first, Item_8256A858 **last)
{
    if (first != last) {
        int n = v->last - last;
        memmove(first, last, n * sizeof(Item_8256A858 *));
        v->last = first + n;
    }
}

void fn_8256A858(void)
{
    Lock_8256A858 lock;
    Item_8256A858 **it;
    Vec_8256A858 *v;

    fn_82549610(&lock, fn_82569B10());
    fn_8256B720();
    for (it = fn_82569B10()->items.first; it != fn_82569B10()->items.last; it++) {
        if ((*it)->index == -1 && ((*it)->flags & 0x40) == 0) {
            fn_8256B658(*it);
        }
    }
    for (it = fn_82569B10()->pending.first; it != fn_82569B10()->pending.last; it++) {
        fn_8256B398(*it);
        (*it)->index = -1;
    }
    v = &fn_82569B10()->pending;
    Erase_8256A858(v, v->first, v->last);
    fn_82A1BB18();
    fn_8259C738(lock.handle);
}
