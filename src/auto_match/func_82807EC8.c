typedef struct { char pad0[0x10]; int base; unsigned short pad14; unsigned short pad16; unsigned short x; unsigned short y; unsigned short w; } Dim_82807EC8;
extern void fn_82807DA8(void *, int *);

void fn_82807EC8(void *self, Dim_82807EC8 *d, int *in, unsigned char mask)
{
  int out[4];
  int base = d->base;
  int i;
  for (i = 0; i < 4; i++) {
    int v;
    if ((mask & (1 << i)) != 0) {
      v = in[i] * d->w + d->y + d->x + base;
    } else {
      v = 0;
    }
    out[i] = v;
  }
  fn_82807DA8(self, out);
}
