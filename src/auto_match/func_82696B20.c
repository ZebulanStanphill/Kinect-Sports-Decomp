typedef struct Rep_82696B20 { int a; int b; unsigned int uses; } Rep_82696B20;

typedef struct Weak_82696B20 {
    Rep_82696B20 *rep;
    unsigned int obj;
    unsigned char c;
} Weak_82696B20;

typedef struct Value_82696B20 {
    unsigned char type;
    Weak_82696B20 w;
} Value_82696B20;

extern void fn_826C3378(void *, unsigned int, unsigned int);
extern void fn_82696728(Weak_82696B20 *dst, const Value_82696B20 *src);

Weak_82696B20 *fn_82696B20(Weak_82696B20 *dst, const Value_82696B20 *src)
{
    switch (src->type) {
    case 8:
        dst->c = 0;
        dst->rep = src->w.rep;
        if (dst->rep != 0) {
            dst->rep->uses = (dst->rep->uses + 1) & 0x8fffffff;
        }
        dst->obj = 0;
        if (src->w.obj != 0) {
            fn_826C3378(dst, src->w.obj, src->w.c & 1);
        }
        break;
    case 11:
        fn_82696728(dst, src);
        break;
    default:
        dst->c = 0;
        dst->rep = 0;
        dst->obj = 0;
        return dst;
    }
    return dst;
}
