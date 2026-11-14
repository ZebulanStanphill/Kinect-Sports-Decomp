typedef struct Str_8286B190 {
    union { char buf[16]; char *ptr; } u;
    unsigned int len;
    unsigned int cap;
    unsigned char alloc;
} Str_8286B190;


extern int fn_8260D428(Str_8286B190 *self, unsigned int pos, unsigned int count, const char *s, unsigned int n);
extern void fn_822402F8(Str_8286B190 *dst, Str_8286B190 *src);

static __forceinline int Compare(Str_8286B190 *a, Str_8286B190 *b)
{
    unsigned int n = b->len;
    const char *s;
    if (b->cap >= 16)
        s = b->u.ptr;
    else
        s = b->u.buf;
    return fn_8260D428(a, 0, a->len, s, n);
}

void fn_8286B190(Str_8286B190 *first, int hole, int top, Str_8286B190 *value)
{
    int idx;
    for (idx = (hole - 1) / 2; top < hole && Compare(&first[idx], value) < 0; idx = (hole - 1) / 2) {
        fn_822402F8(&first[hole], &first[idx]);
        hole = idx;
    }
    fn_822402F8(&first[hole], value);
}
