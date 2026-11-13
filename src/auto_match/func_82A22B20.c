typedef struct {
  unsigned int a0;
  unsigned int hi : 16;
  unsigned int lo : 16;
  unsigned int a8;
  unsigned short ac;
} T;

typedef struct {
  T **items;
  unsigned int count;
} L;

extern int fn_82A21DC0(T *t, int b, int c, int d, int e);

unsigned char *fn_82A22B20(L *l, int param_2, int param_3, int param_4)
{
  unsigned int i;
  T *t;
  int r;

  for (i = 0; i < l->count; i++) {
    t = l->items[i];
    r = fn_82A21DC0(t, 0, param_2, param_3, param_4);
    if (r != -1) {
      return (unsigned char *)t + ((unsigned char *)t)[(r - t->ac) * 4 + t->hi] * t->lo + 0x14;
    }
  }
  return 0;
}
