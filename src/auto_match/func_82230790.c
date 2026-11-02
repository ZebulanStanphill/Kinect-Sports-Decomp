typedef struct Elem_82230790 { int a, b; } Elem_82230790;
extern void fn_8265CA20(void *);
extern void fn_8265CAA0(void *);
extern void fn_8267C488(void *);

void *fn_82230790(Elem_82230790 *self, unsigned flags)
{
    if (flags & 2) {
        int *base = (int *)self - 1;
        int n = *base;
        Elem_82230790 *p = self + n;
        int i = n - 1;
        if (i >= 0) {
            do {
                p--;
                fn_8267C488(p);
            } while (--i >= 0);
        }
        if (flags & 1)
            fn_8265CAA0(base);
        return base;
    }
    fn_8267C488(self);
    if (flags & 1)
        fn_8265CA20(self);
    return self;
}
