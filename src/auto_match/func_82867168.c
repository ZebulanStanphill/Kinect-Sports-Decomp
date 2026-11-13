typedef struct {
    union {
        char buf[16];
        char *ptr;
    } bx;
    unsigned int size;
    unsigned int res;
} String_82867168;
extern String_82867168 *fn_82230110(String_82867168 *s, const char *text);
extern void fn_82230300(String_82867168 *s, int a, int b);
extern int fn_8260D428(String_82867168 *s, unsigned int off, unsigned int n0, const char *ptr, unsigned int count);

static __forceinline const char *String_Ptr(String_82867168 *s)
{
    return 16 <= s->res ? s->bx.ptr : s->bx.buf;
}

static __forceinline int String_Compare(String_82867168 *s, String_82867168 *r)
{
    unsigned int count = r->size;
    return fn_8260D428(s, 0, s->size, String_Ptr(r), count);
}

typedef struct {
    String_82867168 s;
    unsigned int pad[4];
} StrBuf_82867168;

unsigned char fn_82867168(void *self, const char *name)
{
    StrBuf_82867168 a;
    String_82867168 b;
    String_82867168 *pa;
    String_82867168 *pb;
    unsigned char r;
    pa = fn_82230110(&a.s, "WWISE");
    pb = fn_82230110(&b, name);
    r = String_Compare(pb, pa) == 0;
    fn_82230300(&b, 1, 0);
    fn_82230300(&a.s, 1, 0);
    return r;
}
