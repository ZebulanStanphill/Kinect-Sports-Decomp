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
  unsigned int cap;
} Buf;

extern int fn_82CE5410(void);
extern void fn_82CE6310(int, Buf *, int, int);
extern void fn_8308AF58(Obj *, Item *, Out *);

void fn_8308C4D8(Obj *self, Buf *param_2)
{
  int i;
  int n;
  int k;
  int r;
  Item *it;

  n = self->count - self->skip;
  r = fn_82CE5410();
  if ((int)(param_2->cap & 0x3fffffff) < n) {
    fn_82CE6310(*(int *)(r + 0x10), param_2, n, 0x20);
  }
  param_2->n = self->count - self->skip;
  k = 0;
  for (i = 0; i < self->count; i++) {
    it = &self->items[i];
    if ((it->fc & 1) == 0) {
      fn_8308AF58(self, it, &param_2->base[k]);
      k++;
    }
  }
}
