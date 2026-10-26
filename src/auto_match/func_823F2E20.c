typedef struct { void *p; void *rep; } SP;
extern void fn_822315A0(void *rep);

static void swap_ptr(void **a, void **b)
{
  void *t = *a;
  *a = *b;
  *b = t;
}

static void SP_swap(SP *a, SP *b)
{
  swap_ptr(&a->rep, &b->rep);
  swap_ptr(&a->p, &b->p);
}

SP *fn_823F2E20(SP *self, SP *src)
{
  SP tmp;

  tmp.p = 0;
  tmp.rep = 0;
  if (&tmp != src) {
    SP_swap(&tmp, src);
  }
  SP_swap(self, &tmp);
  if (tmp.rep != 0) {
    fn_822315A0(tmp.rep);
  }
  return self;
}
