typedef struct Elem_8282D5B8 { int a, b, c, d; } Elem_8282D5B8;
extern void fn_8265CA20(void *);
extern void fn_8265CAA0(void *);
extern void fn_828317C8(void *);

void *fn_8282D5B8(Elem_8282D5B8 *self, unsigned flags)
{
    if (flags & 2) {
        int *base = (int *)self - 1;
        int n = *base;
        Elem_8282D5B8 *p = self + n;
        int i = n - 1;
        if (i >= 0) {
            do {
                p--;
                fn_828317C8(p);
            } while (--i >= 0);
        }
        if (flags & 1)
            fn_8265CAA0(base);
        return base;
    }
    fn_828317C8(self);
    if (flags & 1)
        fn_8265CA20(self);
    return self;
}
