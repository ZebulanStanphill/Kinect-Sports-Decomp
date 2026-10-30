typedef struct {
  char pad0[8];
  int f8;
  int fc;
  char pad10[8];
  int f18;
  char pad1c[0xd8 - 0x1c];
  void *fd8;
  char pade0[0x1c4 - 0xdc];
  int f1c4;
} Obj_82677E98;

extern void fn_82631578(void *, int);
extern void fn_82631920(void *, int);
extern void fn_82631AF0(void *, int);

void fn_82677E98(Obj_82677E98 *self, int idx)
{
  int *w = (int *)self;
  int v;

  if (idx != self->f18) {
    self->fc = idx;
    if (idx != 0) {
      if (self->f8 != 0) {
        fn_82631920(self->fd8, w[self->f1c4 + 0x30]);
        v = 0;
      } else {
        fn_82631920(self->fd8, w[idx + 0x1d]);
        v = w[idx + 0xa];
      }
      fn_82631578(self->fd8, v);
      fn_82631AF0(self->fd8, 0);
    }
    self->f18 = idx;
  }
}
