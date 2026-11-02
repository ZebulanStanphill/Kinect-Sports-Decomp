typedef struct Elem_828317E0 { int a, b; } Elem_828317E0;
extern void fn_8265CA20(void *);
extern void fn_8265CAA0(void *);
extern void fn_82835BE8(void *);

void *fn_828317E0(Elem_828317E0 *self, unsigned flags)
{
    if (flags & 2) {
        int *base = (int *)self - 1;
        int n = *base;
        Elem_828317E0 *p = self + n;
        int i = n - 1;
        if (i >= 0) {
            do {
                p--;
                fn_82835BE8(p);
            } while (--i >= 0);
        }
        if (flags & 1)
            fn_8265CAA0(base);
        return base;
    }
    fn_82835BE8(self);
    if (flags & 1)
        fn_8265CA20(self);
    return self;
}
