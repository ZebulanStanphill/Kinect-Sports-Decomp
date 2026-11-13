typedef struct Elem_829E4EB0 { int a; } Elem_829E4EB0;
extern void fn_829E63A0(void *);
extern void fn_82A28E60(void *heap, int flags, void *p);
extern char *lbl_832179FC;

static __forceinline void Free_829E4EB0(void *p)
{
    if (p != 0)
        fn_82A28E60(*(void **)(lbl_832179FC + 0x8f4cc), 0, p);
}

void *fn_829E4EB0(Elem_829E4EB0 *self, unsigned flags)
{
    if (flags & 2) {
        int *base = (int *)self - 1;
        int n = ((int *)self)[-1];
        Elem_829E4EB0 *p = self + n;
        int i = n - 1;
        if (i >= 0) {
            do {
                p--;
                fn_829E63A0(p);
            } while (--i >= 0);
        }
        if (flags & 1)
            Free_829E4EB0(base);
        return base;
    }
    fn_829E63A0(self);
    if (flags & 1)
        Free_829E4EB0(self);
    return self;
}
