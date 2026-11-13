struct Less_82D9C398 {};
struct Obj_82D9C398 {
    char pad0[0x160];
    void **items;
    int size;
    int pad168;
    unsigned char dirty;
};
extern "C" void fn_82D9C5E8(void **arr, int lo, int hi, Less_82D9C398 cmp);

static __forceinline void quickSort(void **arr, int size, Less_82D9C398 cmp)
{
    if (size > 1) {
        fn_82D9C5E8(arr, 0, size - 1, cmp);
    }
}

extern "C" void fn_82D9C398(Obj_82D9C398 *o)
{
    if (o->dirty) {
        quickSort(o->items, o->size, Less_82D9C398());
        o->dirty = 0;
    }
}
