/* std::_Median over deque iterators: median of nine for more than 40 elements, else median of three. */
typedef struct Deque_828D54B8 {
    void *proxy;
    unsigned int **map;
    unsigned int mapsize;
    unsigned int off;
    unsigned int size;
} Deque_828D54B8;

typedef struct Iter_828D54B8 {
    Deque_828D54B8 *cont;
    unsigned int off;
} Iter_828D54B8;

extern void fn_828D4F38(Iter_828D54B8 first, Iter_828D54B8 mid, Iter_828D54B8 last);

static __forceinline Iter_828D54B8 Add_828D54B8(Iter_828D54B8 it, int n)
{
    it.off += n;
    return it;
}

static __forceinline Iter_828D54B8 Sub_828D54B8(Iter_828D54B8 it, int n)
{
    it.off -= n;
    return it;
}

static __forceinline int Diff_828D54B8(Iter_828D54B8 a, Iter_828D54B8 b)
{
    return b.off <= a.off ? a.off - b.off : -(int)(b.off - a.off);
}

void fn_828D54B8(Iter_828D54B8 first, Iter_828D54B8 mid, Iter_828D54B8 last)
{
    int step;

    if (40 < Diff_828D54B8(last, first)) {
        step = (Diff_828D54B8(last, first) + 1) / 8;
        fn_828D4F38(first, Add_828D54B8(first, step), Add_828D54B8(first, 2 * step));
        fn_828D4F38(Sub_828D54B8(mid, step), mid, Add_828D54B8(mid, step));
        fn_828D4F38(Sub_828D54B8(last, 2 * step), Sub_828D54B8(last, step), last);
        fn_828D4F38(Add_828D54B8(first, step), mid, Sub_828D54B8(last, step));
    } else {
        fn_828D4F38(first, mid, last);
    }
}
