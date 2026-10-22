typedef struct {
  char *base;
  int stride;
  unsigned char *idx;
  char pad0c[0x32 - 0x0c];
  unsigned short count;
  char pad34[4];
  int size;
} Desc;

typedef struct {
  char pad[0x48];
  unsigned short n;
  char pad4a[6];
  char *flags;
  int src;
  char pad58[0x64 - 0x58];
  Desc *desc;
} Obj;

extern void fn_82A1DDC0(char *, char *, int);

void fn_82808858(Obj *param_1, int *param_2, char *param_3)
{
  Desc *d;
  unsigned int cnt;
  unsigned int i;
  int off;

  d = param_1->desc;
  cnt = d->count;
  fn_82A1DDC0(param_3, d->base + d->idx[param_2[1]] * d->stride, d->size);
  off = 0;
  for (i = 0; i < param_1->n; i++) {
    if (param_1->flags != 0 && param_1->flags[i] == 0) {
      fn_82A1DDC0(param_3 + off, (char *)param_1->src, cnt * 4);
    }
    off += cnt * 4;
  }
}
