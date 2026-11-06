typedef struct Str_8286A350 {
    union {
        char buf[16];
        char *ptr;
    } u;
    unsigned int size;
    unsigned int cap;
} Str_8286A350;
extern int fn_8260D428(Str_8286A350 *, unsigned int, unsigned int, const char *, unsigned int);
extern Str_8286A350 *fn_8286A240(Str_8286A350 *, Str_8286A350 *, Str_8286A350 *, int);
static __forceinline int cmp(Str_8286A350 *a, Str_8286A350 *b)
{
    unsigned int len = b->size;
    const char *p;
    if (b->cap >= 0x10)
        p = b->u.ptr;
    else
        p = b->u.buf;
    return fn_8260D428(a, 0, a->size, p, len);
}

unsigned char fn_8286A350(Str_8286A350 *param_1, Str_8286A350 *param_2, Str_8286A350 *param_3)
{
    Str_8286A350 *n = fn_8286A240(param_1, param_2, param_3, 0);
    return n != param_2 && cmp(param_3, n) >= 0;
}
