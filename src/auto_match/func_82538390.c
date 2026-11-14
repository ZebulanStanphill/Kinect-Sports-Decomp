/* std::unique over 0x38-byte elements whose operator== compares the std::string at +8. */
typedef struct String_82538390 {
    union {
        char buf[16];
        char *ptr;
    } bx;
    unsigned int size;
    unsigned int res;
    char alval;
} String_82538390;

typedef struct Elem_82538390 {
    unsigned __int64 key;
    String_82538390 name;           /* 0x08 */
    int pad24[5];
} Elem_82538390;

typedef struct Iter_82538390 {
    Elem_82538390 *ptr;
} Iter_82538390;

extern int fn_8260D428(const String_82538390 *self, unsigned int off, unsigned int n0, const char *ptr, unsigned int count);
extern Elem_82538390 *fn_82268638(Elem_82538390 *dst, const Elem_82538390 *src);

static __forceinline const char *Myptr(const String_82538390 *s)
{
    return 16 <= s->res ? s->bx.ptr : s->bx.buf;
}

static __forceinline unsigned int Size(const String_82538390 *s)
{
    return s->size;
}

static __forceinline int Compare(const String_82538390 *l, const String_82538390 *r)
{
    return fn_8260D428(l, 0, l->size, Myptr(r), Size(r));
}

static __forceinline int Equal(const Elem_82538390 *l, const Elem_82538390 *r)
{
    return Compare(&l->name, &r->name) == 0;
}

static __forceinline Elem_82538390 *Unique(Elem_82538390 *first, Elem_82538390 *last)
{
    Elem_82538390 *firstb;
    if (first != last) {
        for (; (firstb = first), ++first != last; ) {
            if (Equal(firstb, first)) {
                for (; ++first != last; ) {
                    if (!Equal(firstb, first)) {
                        fn_82268638(++firstb, first);
                    }
                }
                return ++firstb;
            }
        }
    }
    return last;
}

Iter_82538390 *fn_82538390(Iter_82538390 *result, Elem_82538390 *first, Elem_82538390 *last)
{
    result->ptr = Unique(first, last);
    return result;
}
