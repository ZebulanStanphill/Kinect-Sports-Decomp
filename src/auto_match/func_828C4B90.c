/* std::_Median with a predicate over deque iterators: median of nine for more than 40 elements,
   else median of three. */
typedef struct Deque_828C4B90 {
    void *proxy;
    unsigned int **map;
    unsigned int mapsize;
    unsigned int off;
    unsigned int size;
} Deque_828C4B90;

typedef struct Iter_828C4B90 {
    Deque_828C4B90 *cont;
    unsigned int off;
} Iter_828C4B90;

typedef unsigned char (*Less_828C4B90)(const void *a, const void *b);

extern void fn_828C4710(Iter_828C4B90 first, Iter_828C4B90 mid, Iter_828C4B90 last, Less_828C4B90 less);

static __forceinline Iter_828C4B90 Add_828C4B90(Iter_828C4B90 it, int n)
{
    it.off += n;
    return it;
}

static __forceinline Iter_828C4B90 Sub_828C4B90(Iter_828C4B90 it, int n)
{
    it.off -= n;
    return it;
}

static __forceinline int Diff_828C4B90(Iter_828C4B90 a, Iter_828C4B90 b)
{
    return b.off <= a.off ? a.off - b.off : -(int)(b.off - a.off);
}

void fn_828C4B90(Iter_828C4B90 first, Iter_828C4B90 mid, Iter_828C4B90 last, Less_828C4B90 less)
{
    int step;

    if (40 < Diff_828C4B90(last, first)) {
        step = (Diff_828C4B90(last, first) + 1) / 8;
        fn_828C4710(first, Add_828C4B90(first, step), Add_828C4B90(first, 2 * step), less);
        fn_828C4710(Sub_828C4B90(mid, step), mid, Add_828C4B90(mid, step), less);
        fn_828C4710(Sub_828C4B90(last, 2 * step), Sub_828C4B90(last, step), last, less);
        fn_828C4710(Add_828C4B90(first, step), mid, Sub_828C4B90(last, step), less);
    } else {
        fn_828C4710(first, mid, last, less);
    }
}
