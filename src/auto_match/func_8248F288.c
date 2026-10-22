typedef struct { int a; int b; } Elem;
typedef struct { int v[2]; } Key;
extern Key *fn_82365BD8(Key *out, Elem *e);
extern unsigned char fn_8248E2C0(Key *x, Key *y);

static void swap_int(int *x, int *y)
{
  int t = *x;
  *x = *y;
  *y = t;
}

void fn_8248F288(Elem *a, Elem *b, Elem *c)
{
  Key k[2];
  if (fn_8248E2C0(fn_82365BD8(&k[1], b), fn_82365BD8(&k[0], a))) {
    swap_int(&b->b, &a->b); swap_int(&b->a, &a->a);
  }
  if (fn_8248E2C0(fn_82365BD8(&k[0], c), fn_82365BD8(&k[1], b))) {
    swap_int(&c->b, &b->b); swap_int(&c->a, &b->a);
  }
  if (fn_8248E2C0(fn_82365BD8(&k[0], b), fn_82365BD8(&k[1], a))) {
    swap_int(&b->b, &a->b); swap_int(&b->a, &a->a);
  }
}
