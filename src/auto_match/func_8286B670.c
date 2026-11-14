/* std::_Insertion_sort1 over std::string elements ordered by operator< (VC10 <algorithm>). */
typedef struct String_8286B670 {
    union {
        char buf[16];
        char *ptr;
    } bx;
    unsigned int size;
    unsigned int res;
    char alval;
} String_8286B670;

extern int fn_8260D428(const String_8286B670 *self, unsigned int off, unsigned int n0, const char *ptr, unsigned int count);
extern void fn_82240378(String_8286B670 *self, String_8286B670 *right);
extern String_8286B670 *fn_822402F8(String_8286B670 *self, String_8286B670 *right);
extern void fn_82230300(String_8286B670 *self, unsigned char built, unsigned int newsize);

static __forceinline const char *Myptr(const String_8286B670 *s)
{
    return 16 <= s->res ? s->bx.ptr : s->bx.buf;
}

static __forceinline unsigned int Size(const String_8286B670 *s)
{
    return s->size;
}

static __forceinline int Compare(const String_8286B670 *l, const String_8286B670 *r)
{
    return fn_8260D428(l, 0, l->size, Myptr(r), Size(r));
}

static __forceinline int Less(const String_8286B670 *l, const String_8286B670 *r)
{
    return Compare(l, r) < 0;
}

void fn_8286B670(String_8286B670 *first, String_8286B670 *last)
{
    String_8286B670 *next;
    if (first != last) {
        for (next = first; ++next != last; ) {
            String_8286B670 *next1 = next;
            String_8286B670 val;
            fn_82240378(&val, next);
            if (Less(&val, first)) {
                String_8286B670 *dest = ++next1;
                String_8286B670 *src = next;
                while (first != src) {
                    fn_822402F8(--dest, --src);
                }
                fn_822402F8(first, &val);
            } else {
                String_8286B670 *first1;
                for (first1 = next1; Less(&val, --first1); next1 = first1) {
                    fn_822402F8(next1, first1);
                }
                fn_822402F8(next1, &val);
            }
            fn_82230300(&val, 1, 0);
        }
    }
}
