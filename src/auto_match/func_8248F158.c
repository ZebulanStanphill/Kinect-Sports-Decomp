/* std::_Insertion_sort1 over shared_ptr elements with an empty by-value predicate (VC10 <algorithm>):
 * fn_82365BD8 is the shared_ptr copy constructor, fn_823F2E20 the move assignment, fn_822315A0 the
 * reference count's _Decref, fn_8248E2C0 the predicate (it takes both shared_ptrs by value). */
typedef struct RefCount_8248F158 RefCount_8248F158;

typedef struct SharedPtr_8248F158 {
    void *ptr;
    RefCount_8248F158 *rep;
} SharedPtr_8248F158;

extern SharedPtr_8248F158 *fn_82365BD8(SharedPtr_8248F158 *dst, const SharedPtr_8248F158 *src);
extern void fn_823F2E20(SharedPtr_8248F158 *dst, SharedPtr_8248F158 *src);
extern void fn_822315A0(RefCount_8248F158 *rep);
extern unsigned char fn_8248E2C0(SharedPtr_8248F158 *a, SharedPtr_8248F158 *b);

static __forceinline void SwapRep(RefCount_8248F158 **a, RefCount_8248F158 **b)
{
    RefCount_8248F158 *t = *a;
    *a = *b;
    *b = t;
}

static __forceinline void SwapPtr(void **a, void **b)
{
    void *t = *a;
    *a = *b;
    *b = t;
}

static __forceinline unsigned char Less(SharedPtr_8248F158 *a, const SharedPtr_8248F158 *b)
{
    SharedPtr_8248F158 ta;
    SharedPtr_8248F158 tb;

    return fn_8248E2C0(fn_82365BD8(&ta, a), fn_82365BD8(&tb, b));
}

void fn_8248F158(SharedPtr_8248F158 *first, SharedPtr_8248F158 *last)
{
    SharedPtr_8248F158 *next;

    for (next = first; ++next != last; ) {
        SharedPtr_8248F158 *next1 = next;
        SharedPtr_8248F158 val;

        val.ptr = 0;
        val.rep = 0;
        if (&val != next) {
            SwapRep(&val.rep, &next->rep);
            SwapPtr(&val.ptr, &next->ptr);
        }
        if (Less(&val, first)) {
            SharedPtr_8248F158 *dest = ++next1;
            SharedPtr_8248F158 *src = next;
            while (first != src) {
                --dest;
                --src;
                fn_823F2E20(dest, src);
            }
            fn_823F2E20(first, &val);
        } else {
            SharedPtr_8248F158 *first1;
            for (first1 = next1; Less(&val, --first1); next1 = first1)
                fn_823F2E20(next1, first1);
            fn_823F2E20(next1, &val);
        }
        if (val.rep != 0)
            fn_822315A0(val.rep);
    }
}
