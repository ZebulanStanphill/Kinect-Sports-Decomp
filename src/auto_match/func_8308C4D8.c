typedef unsigned int uint;

typedef struct {
  int f0;
  int f4;
  int f8;
  int fc;
} Item;

typedef struct {
  char data[0x20];
} Out;

typedef struct {
  char pad[0xa0];
  Item *items;
  int count;
  char pad2[0xd0 - 0xa8];
  int skip;
} Obj;

typedef struct {
  Out *base;
  int n;
  uint cap;
} Buf;

extern int fn_82CE5410(void);
extern void fn_82CE6310(int, Buf *, int, int);
extern void fn_8308AF58(Obj *, Item *, Out *);

void fn_8308C4D8(Obj *param_1, Buf *param_2)
{
  int i;
  int n;
  int k;
  int r;
  Item *it;

  n = param_1->count - param_1->skip;
  r = fn_82CE5410();
  if ((int)(param_2->cap & 0x3fffffff) < n) {
    fn_82CE6310(*(int *)(r + 0x10), param_2, n, 0x20);
  }
  param_2->n = param_1->count - param_1->skip;
  k = 0;
  for (i = 0; i < param_1->count; i++) {
    it = &param_1->items[i];
    if ((it->fc & 1) == 0) {
      fn_8308AF58(param_1, it, &param_2->base[k]);
      k++;
    }
  }
}
