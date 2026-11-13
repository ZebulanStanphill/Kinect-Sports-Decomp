typedef struct Pair_82667048 { unsigned a; unsigned b; } Pair_82667048;
extern void *fn_82BA02A8(void *);
extern void *fn_8265D5A8(void *);
extern Pair_82667048 *fn_826679C0(Pair_82667048 *self, void *first, void *second);

Pair_82667048 *fn_82667048(Pair_82667048 *self, void *first, void *second)
{
    fn_826679C0(self, fn_82BA02A8(first), fn_8265D5A8(second));
    return self;
}
