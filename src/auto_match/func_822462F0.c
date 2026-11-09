typedef struct Str_822462F0 {
    union {
        char buf[16];
        char *ptr;
    } u;
    unsigned int size;
    unsigned int cap;
} Str_822462F0;

extern int fn_8260D428(const Str_822462F0 *, unsigned int, unsigned int, const char *, unsigned int);

int fn_822462F0(const Str_822462F0 *a, const Str_822462F0 *b)
{
    unsigned int len = b->size;
    const char *p;
    if (b->cap >= 0x10)
        p = b->u.ptr;
    else
        p = b->u.buf;
    return fn_8260D428(a, 0, a->size, p, len);
}
