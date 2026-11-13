typedef struct Pair_82668670 { unsigned a; unsigned b; } Pair_82668670;
extern void *fn_82BA02A8(void *);
extern void *fn_8265D5A8(void *);
extern Pair_82668670 *fn_826679C0(Pair_82668670 *self, void *first, void *second);

Pair_82668670 *fn_82668670(Pair_82668670 *self, Pair_82668670 *src)
{
    fn_826679C0(self, fn_82BA02A8(src), fn_8265D5A8(&src->b));
    return self;
}
