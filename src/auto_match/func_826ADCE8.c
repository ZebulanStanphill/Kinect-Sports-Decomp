typedef struct {
    void *a;
    void *b;
    unsigned char flags;
} Pair_826ADCE8;

extern void fn_8265CA20(void *p);
extern void fn_826824B0(void *p);

Pair_826ADCE8 *fn_826ADCE8(Pair_826ADCE8 *p, unsigned int flags)
{
    if ((p->flags & 2) == 0 && p->a != 0) {
        fn_826824B0(p->a);
    }
    p->a = 0;
    if ((p->flags & 1) == 0 && p->b != 0) {
        fn_826824B0(p->b);
    }
    p->b = 0;
    if (flags & 1) {
        fn_8265CA20(p);
    }
    return p;
}
