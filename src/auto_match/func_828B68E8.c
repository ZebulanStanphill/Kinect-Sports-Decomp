typedef struct Elem_828B68E8 {
  int key;
  int value;
} Elem_828B68E8;

extern float fn_828B9180(int key);

static __forceinline unsigned char Pred(int l, int r)
{
  return fn_828B9180(l) > fn_828B9180(r);
}

static __forceinline void swap_int(int *x, int *y)
{
  int t = *x;
  *x = *y;
  *y = t;
}

void fn_828B68E8(Elem_828B68E8 *a, Elem_828B68E8 *b, Elem_828B68E8 *c)
{
  if (Pred(b->key, a->key)) {
    swap_int(&b->value, &a->value);
    swap_int(&b->key, &a->key);
  }
  if (Pred(c->key, b->key)) {
    swap_int(&c->value, &b->value);
    swap_int(&c->key, &b->key);
  }
  if (Pred(b->key, a->key)) {
    swap_int(&b->value, &a->value);
    swap_int(&b->key, &a->key);
  }
}
