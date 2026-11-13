typedef struct Desc_82BD90C0 { short f0; short kind; unsigned id; } Desc_82BD90C0;
typedef struct Item_82BD90C0 { Desc_82BD90C0 *desc; unsigned n; } Item_82BD90C0;
extern int fn_82A5ED20();

int fn_82BD90C0(int a, int b, Item_82BD90C0 *x, int d, Item_82BD90C0 *y)
{
  int hr;
  int err;

  hr = fn_82A5ED20();
  if (hr >= 0) {
    err = (int)0x88970001;
    if (x->desc->kind != 4 || y->desc->kind != 4) hr = err;
    if (hr >= 0) {
      if (x->n != y->n) hr = err;
      if (hr >= 0 && (x->desc->id != 0x3efd || y->desc->id != 0x3efd)) hr = err;
    }
  }
  return hr;
}
