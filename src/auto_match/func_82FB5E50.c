typedef struct S_82FB5E50 {
  char pad0[0xc]; unsigned fc;
  char pad10[0x1c]; int f2c;
  char pad30[8]; int f38;
  char pad3c[4]; char f40[4]; int f44; int f48; int f4c;
  char pad50[4]; char f54[0x24]; unsigned char f78;
} S_82FB5E50;
typedef struct { char pad[0x28]; int x28; } Inner_82FB5E50;
extern int fn_82FABF68(S_82FB5E50 *, int, int);
extern int fn_82FB2590(int, int, int *);
extern void *fn_82FB5408(S_82FB5E50 *, unsigned, int *);
extern int fn_82FB5640(S_82FB5E50 *, void *);
extern unsigned fn_82FB5D80(S_82FB5E50 *, int);
extern int fn_82FB60A0(void *, int, int, unsigned);
extern int fn_8300CA50(void *, int, int);
extern int fn_8300CAF0(void *, int, int, int);
extern unsigned int lbl_831BC768;

int fn_82FB5E50(S_82FB5E50 *s, int a, int b, int c, int d, int *out)
{
  int r;
  int v;
  unsigned x;
  void *k;
  int t;

  s->f4c = d;
  r = fn_82FABF68(s, a, b);
  if (r != 1) return r;
  r = fn_8300CA50(s->f40, c, d);
  if (r != 1) return r;
  r = fn_82FB60A0(s->f54, 8, -1, lbl_831BC768);
  if (r != 1) return r;
  s->f78 = 1;
  s->f2c = s->f2c + 1;
  v = fn_8300CAF0(s->f40, ((Inner_82FB5E50 *)s->f38)->x28, c, d);
  if (s->fc == 0) {
    k = fn_82FB5408(s, 0, out);
    if (k != 0 && fn_82FB5640(s, k) == 1) {
      x = fn_82FB5D80(s, v);
      if (x != 0) {
        *out = x;
      }
      goto done;
    }
  } else {
    fn_82FB2590(s->f44, v, &t);
    k = fn_82FB5408(s, t, out);
    if (k != 0 && fn_82FB5640(s, k) == 1) goto done;
  }
  r = 2;
done:
  s->f48 = v;
  return r;
}
