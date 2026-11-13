typedef struct Item { void (**vt)(struct Item *); int pad[7]; int m20; } Item;
typedef struct { Item **items; unsigned count; int m8; int mc; } Arr;
extern void fn_82699740(Arr *, int);

void fn_82699AD0(Arr *a)
{
  unsigned n = a->count;
  unsigned i;
  a->mc = 0;
  for (i = 0; i < n; i++) {
    Item **p = &a->items[i];
    (*p)->vt[0x74 / 4](*p);
    (*p)->m20 = 0;
  }
  fn_82699740(a, 0);
}
