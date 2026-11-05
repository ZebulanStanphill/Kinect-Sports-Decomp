typedef struct Buf_82643A48 {
    char pad[0x30];
    unsigned base;
    unsigned limit;
} Buf_82643A48;
extern void fn_82645110(Buf_82643A48 *);
extern unsigned fn_826441E0(Buf_82643A48 *, unsigned);
unsigned fn_82643A48(Buf_82643A48 *b, unsigned n)
{
    unsigned r;
    if (b->base + n * 4 > b->limit) {
        fn_82645110(b);
        if (b->base + n * 4 > b->limit) {
            r = fn_826441E0(b, n);
            if (r == 0 && b->base + n * 4 > b->limit)
                return r;
        }
    }
    return b->base;
}
