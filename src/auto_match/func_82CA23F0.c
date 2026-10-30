extern void fn_82C53970(void *p);
typedef struct { void *a; void *b; } P;

int fn_82CA23F0(P *p)
{
    if (p->a) {
        fn_82C53970(p->a);
        p->a = 0;
    }
    if (p->b) {
        fn_82C53970(p->b);
        p->b = 0;
    }
    fn_82C53970(p);
    return 0;
}
