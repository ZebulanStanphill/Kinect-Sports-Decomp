typedef struct { unsigned v; } It_82660588;
typedef struct { unsigned a; unsigned b; } Pair_82660588;
extern unsigned *fn_8265D5A8(void *);
Pair_82660588 *fn_82660588(Pair_82660588 *self, It_82660588 *first, void *second)
{
  self->a = first->v;
  self->b = *fn_8265D5A8(second);
  return self;
}
