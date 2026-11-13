struct Less_82DA2B38 {};
struct Obj_82DA2B38 {
    char pad0[0x160];
    void **items;
    int size;
    int pad168;
    unsigned char dirty;
};
extern "C" void fn_82DA2EE0(void **arr, int lo, int hi, Less_82DA2B38 cmp);

static __forceinline void quickSort(void **arr, int size, Less_82DA2B38 cmp)
{
    if (size > 1) {
        fn_82DA2EE0(arr, 0, size - 1, cmp);
    }
}

extern "C" void fn_82DA2B38(Obj_82DA2B38 *o)
{
    if (o->dirty) {
        quickSort(o->items, o->size, Less_82DA2B38());
        o->dirty = 0;
    }
}
