typedef struct { unsigned a; unsigned b; } Pair_826679C0;
extern unsigned *fn_82BA02A8(void *);
extern unsigned *fn_8265D5A8(void *);

Pair_826679C0 *fn_826679C0(Pair_826679C0 *self, void *first, void *second)
{
  self->a = *fn_82BA02A8(first);
  self->b = *fn_8265D5A8(second);
  return self;
}
