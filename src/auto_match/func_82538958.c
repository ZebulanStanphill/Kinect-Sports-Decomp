/* std::_Stable_partition over 0x38-byte elements; the predicate tests titleId == 0x4D5308C9. */
typedef struct Elem_82538958 {
    char reserved00[0x24]; /* 0x00 */
    unsigned int titleId;  /* 0x24 */
    char reserved28[0x10]; /* 0x28 */
} Elem_82538958;

typedef struct TempRange_82538958 {
    Elem_82538958 *first; /* 0x0 */
    Elem_82538958 *last;  /* 0x4 */
} TempRange_82538958;

typedef struct TempIter_82538958 {
    char reserved00[0x10];     /* 0x00 */
    TempRange_82538958 *range; /* 0x10 */
} TempIter_82538958;

typedef struct IsTitle_82538958 {
    char unused;
} IsTitle_82538958;

extern Elem_82538958 *fn_82268638(Elem_82538958 *dst, const Elem_82538958 *src);
extern TempIter_82538958 *fn_82538DC0(TempIter_82538958 *buf, const Elem_82538958 *src);
extern int fn_82538E40(TempIter_82538958 *buf);
extern Elem_82538958 *fn_82539150(Elem_82538958 *first, Elem_82538958 *mid, Elem_82538958 *last, int count1,
                                  int count2, TempIter_82538958 *buf);

static __forceinline Elem_82538958 *Move(Elem_82538958 *first, Elem_82538958 *last, Elem_82538958 *dest)
{
    for (; first != last; ++dest, ++first) {
        fn_82268638(dest, first);
    }
    return dest;
}

Elem_82538958 *fn_82538958(Elem_82538958 *first, Elem_82538958 *last, IsTitle_82538958 pred, int count,
                           TempIter_82538958 *buf)
{
    if (count == 0) {
        return first;
    } else if (count == 1) {
        return first->titleId == 0x4D5308C9 ? last : first;
    } else if (count <= fn_82538E40(buf)) {
        Elem_82538958 *next = first;

        for (buf->range->last = buf->range->first; first != last; ++first) {
            if (first->titleId == 0x4D5308C9) {
                Elem_82538958 *dest = next++;

                fn_82268638(dest, first);
            } else {
                fn_82538DC0(buf, first);
            }
        }
        Move(buf->range->first, buf->range->last, next);
        return next;
    } else {
        int half = count / 2;
        Elem_82538958 *mid = first + half;
        Elem_82538958 *left = fn_82538958(first, mid, pred, half, buf);
        Elem_82538958 *right = fn_82538958(mid, last, pred, count - half, buf);

        return fn_82539150(left, mid, right, mid - left, right - mid, buf);
    }
}
