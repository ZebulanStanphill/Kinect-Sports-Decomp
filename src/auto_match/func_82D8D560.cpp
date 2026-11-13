struct Less_82D8D560 {};
struct Obj_82D8D560 {
    char pad0[0xd0];
    void **items;
    int size;
    int pad168;
    unsigned char dirty;
};
extern "C" void fn_82DA2EE0(void **arr, int lo, int hi, Less_82D8D560 cmp);

static __forceinline void quickSort(void **arr, int size, Less_82D8D560 cmp)
{
    if (size > 1) {
        fn_82DA2EE0(arr, 0, size - 1, cmp);
    }
}

extern "C" void fn_82D8D560(Obj_82D8D560 *o)
{
    if (o->dirty) {
        quickSort(o->items, o->size, Less_82D8D560());
        o->dirty = 0;
    }
}
