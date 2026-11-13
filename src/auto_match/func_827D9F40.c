typedef struct {
    union {
        char buf[16];
        char *ptr;
    } bx;
    unsigned int size;
    unsigned int res;
} String_827D9F40;
typedef struct {
    int pad0[5];
    int kind;
    int pad18[7];
    String_827D9F40 name;
} Item_827D9F40;
extern int fn_8260D428(String_827D9F40 *s, unsigned int off, unsigned int n0, const char *ptr, unsigned int count);

static __forceinline const char *String_Ptr(String_827D9F40 *s)
{
    return 16 <= s->res ? s->bx.ptr : s->bx.buf;
}

static __forceinline int String_Compare(String_827D9F40 *s, String_827D9F40 *r)
{
    unsigned int count = r->size;
    return fn_8260D428(s, 0, s->size, String_Ptr(r), count);
}

unsigned char fn_827D9F40(Item_827D9F40 *a, Item_827D9F40 *b)
{
    if (a->kind != b->kind) {
        return 0;
    }
    return String_Compare(&a->name, &b->name) == 0;
}
