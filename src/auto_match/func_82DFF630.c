struct Sub;
typedef struct SVT { char pad[0x30]; int (*f30)(struct Sub *); } SVT;
typedef struct Sub { SVT *vt; } Sub;
typedef struct It { char pad[0x3c]; Sub *sub; } It;
typedef struct L { char pad[8]; It **items; int count; } L;

int fn_82DFF630(L *l)
{
  int sum = 0;
  int i = 0;
  if (0 < l->count) {
    do {
      It *it = l->items[i];
      sum = it->sub->vt->f30(it->sub) + sum;
      i++;
    } while (i < l->count);
  }
  return sum;
}
