typedef struct Elem_82275698 {
    unsigned int a;
    unsigned int b;
} Elem_82275698;

typedef struct Buf_82275698 {
    Elem_82275698 *first;
    Elem_82275698 *last;
} Buf_82275698;

typedef struct Temp_82275698 {
    int pad[4];
    Buf_82275698 *buf;
} Temp_82275698;

typedef struct Iter_82275698 {
    unsigned int a;
    unsigned int b;
    unsigned int c;
    unsigned int d;
    Buf_82275698 *buf;
} Iter_82275698;

extern void fn_822755F8(Elem_82275698 *first, Elem_82275698 *last);
extern void fn_82275B20(Elem_82275698 *first, Elem_82275698 *last, Iter_82275698 *dest, int chunk, int count);
extern Elem_82275698 *fn_82275D00(Elem_82275698 *first1, Elem_82275698 *last1, Elem_82275698 *first2,
                                  Elem_82275698 *last2, Elem_82275698 *dest);

static __forceinline Elem_82275698 *Copy_82275698(Elem_82275698 *first, Elem_82275698 *last, Elem_82275698 *dest)
{
    for (; first != last; ++dest, ++first) {
        *dest = *first;
    }
    return dest;
}

void fn_82275698(Elem_82275698 *first, Elem_82275698 *last, int count, Temp_82275698 *temp)
{
    Iter_82275698 it;
    Elem_82275698 *p;
    Elem_82275698 *next;
    Elem_82275698 *src;
    Elem_82275698 *srcEnd;
    Elem_82275698 *mid;
    Elem_82275698 *end;
    Elem_82275698 *dest;
    unsigned int n;
    int chunk;
    int twice;
    int left;

    p = first;
    if (count >= 0x20) {
        n = (unsigned int)count >> 5;
        do {
            next = p + 0x20;
            fn_822755F8(p, next);
            p = next;
        } while (--n != 0);
    }
    fn_822755F8(p, last);
    for (chunk = 0x20; chunk < count; chunk = twice) {
        it.a = 0;
        it.b = 0;
        it.c = 0;
        it.d = 0;
        temp->buf->last = temp->buf->first;
        it.buf = temp->buf;
        fn_82275B20(first, last, &it, chunk, count);
        chunk <<= 1;

        src = temp->buf->first;
        srcEnd = temp->buf->last;
        twice = chunk << 1;
        left = count;
        dest = first;
        for (; twice <= left; left -= twice) {
            mid = src + chunk;
            end = mid + chunk;
            dest = fn_82275D00(src, mid, mid, end, dest);
            src = end;
        }
        if (left <= chunk) {
            Copy_82275698(src, srcEnd, dest);
        } else {
            mid = src + chunk;
            fn_82275D00(src, mid, mid, srcEnd, dest);
        }
    }
}
