typedef struct D_8273A100 {
  char pad0[0x48];
  long long ms;
  int x50;
  int year;
  int doy;
} D_8273A100;
typedef struct O_8273A100 {
  char pad0[8];
  char *m8;
  char pad1[0x18 - 0xc];
  int x18;
  int x1c;
} O_8273A100;
extern unsigned char fn_82695468(O_8273A100 *, int);
extern void fn_826954C0(O_8273A100 *, const char *, int, int);
extern void *fn_826957D0(O_8273A100 *, int);
extern double fn_826972E0(void *, int);
extern unsigned char fn_82739680(int);
extern void fn_827397D8(D_8273A100 *);

void fn_8273A100(O_8273A100 *p)
{
  if (fn_82695468(p, 0x23) == 0) {
    fn_826954C0(p, "Date", 0, 0);
  } else {
    D_8273A100 *d = p->m8 != 0 ? (D_8273A100 *)(p->m8 - 0x10) : 0;
    if (p->x1c >= 1) {
      int y = (int)fn_826972E0(fn_826957D0(p, 0), p->x18);
      int doy = d->doy;
      int w;
      if (doy >= 0x3c) {
        int u = fn_82739680(d->year);
        int v = fn_82739680(y);
        d->doy = doy - u + v;
      }
      d->year = y;
      w = y - 0x7b2;
      d->ms = (long long)((w + 0x171) / 400 - (w + 0x45) / 100 + (w + 1) / 4 + w * 0x16d + d->doy) * 86400000 + d->x50;
      fn_827397D8(d);
    }
  }
}
