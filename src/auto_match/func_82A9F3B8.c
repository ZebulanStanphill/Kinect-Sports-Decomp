extern void *fn_8265C940(unsigned, unsigned);
extern int fn_82A9E7D8();
extern void *memcpy(void *, const void *, unsigned);

typedef struct O_82A9F3B8 { char pad[4]; char *tab; char pad2[0x88]; int f90; } O_82A9F3B8;

int fn_82A9F3B8(O_82A9F3B8 *p, int a, const void *src, unsigned n)
{
  int hr;
  int idx;
  int off;
  char *buf;

  hr = fn_82A9E7D8(p, a, &idx);
  p->f90 = hr;
  if (hr >= 0) {
    off = idx * 0x114;
    if (*(char **)(off + p->tab + 0x110) == 0) {
      buf = (char *)fn_8265C940(n + 1, 0x24870000);
      if (buf == 0) {
        p->f90 = 0x80004005;
      } else {
        memcpy(buf, src, n);
        buf[n] = 0;
        *(char **)(off + p->tab + 0x110) = buf;
      }
    }
  }
  return p->f90;
}
