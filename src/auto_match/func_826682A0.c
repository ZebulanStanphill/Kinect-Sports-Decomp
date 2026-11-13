typedef struct Pair_826682A0 { unsigned a; unsigned char b; } Pair_826682A0;
extern void *fn_82BA02A8(void *);
extern void *fn_8265D5A8(void *);
extern Pair_826682A0 *fn_82668328(Pair_826682A0 *self, void *first, void *second);

Pair_826682A0 *fn_826682A0(Pair_826682A0 *self, void *first, void *second)
{
    fn_82668328(self, fn_8265D5A8(first), fn_82BA02A8(second));
    return self;
}
