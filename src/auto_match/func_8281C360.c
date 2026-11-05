typedef struct If_8281C360 {
  int pad0;
  int (*f4)(unsigned, struct O_8281C360 *);
  char pad8[0x20];
  int (*f28)(struct O_8281C360 *, unsigned);
} If_8281C360;
typedef struct O_8281C360 {
  char pad0[0xc]; unsigned flags; If_8281C360 *m10; char pad14[0x3c];
  unsigned m50; unsigned m54; char pad58[0x20]; unsigned m78;
} O_8281C360;

int fn_8281C360(O_8281C360 *s, unsigned x)
{
  int r;
  int (*f)(O_8281C360 *, unsigned);
  unsigned z;
  if (x < s->m50 || x > s->m54) {
    r = 0;
  } else {
    unsigned y = x;
    if (s->flags & 4) y = x - s->m78;
    r = s->m10->f4(y, s);
  }
  if (r != 0) {
    z = x;
    if (s->flags & 4) z = x - s->m78;
    f = s->m10->f28;
    if (f != 0) {
      r = f(s, z);
    } else {
      r = 1;
    }
  }
  return r;
}
