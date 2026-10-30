typedef struct {
  char pad0[0x20];
  int f20;
  char pad24[0x2f0 - 0x24];
  int f2f0;
  unsigned int *buf;
} Obj_82B4AB48;

extern void *fn_82AE60E8(Obj_82B4AB48 *, unsigned int, int);
extern void fn_82ABE5F8(Obj_82B4AB48 *, void *, unsigned int, int);
extern void *memcpy(void *, const void *, unsigned int);

void fn_82B4AB48(Obj_82B4AB48 *self)
{
  unsigned int n;
  unsigned int n2;
  unsigned int *nb;

  if (self->buf == 0) {
    self->buf = (unsigned int *)fn_82AE60E8(self, 0x28, 0);
    *self->buf = 10;
  } else {
    n = *self->buf;
    if (self->f20 + 1U >= n) {
      n2 = n * 2;
      nb = (unsigned int *)fn_82AE60E8(self, n2 * 4, 0);
      memcpy(nb, self->buf, n * 4);
      *nb = n2;
      fn_82ABE5F8(self, self->buf, n * 4, 0);
      self->buf = nb;
    }
  }
  self->buf[self->f20] = self->f2f0;
}
