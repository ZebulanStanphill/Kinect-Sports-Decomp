typedef struct V3_8281F248 {
  int a, b, c;
} V3_8281F248;

typedef struct Out_8281F248 {
  int w[4];
} Out_8281F248;

extern int fn_82810360(Out_8281F248 *, V3_8281F248 *);
extern int fn_828107B0(void *, V3_8281F248 *, Out_8281F248 *);
extern int fn_828107F0(void *, V3_8281F248 *, Out_8281F248 *);

void fn_8281F248(char *self, V3_8281F248 *p, V3_8281F248 *q)
{
  V3_8281F248 t0;
  V3_8281F248 t1;
  Out_8281F248 o1;
  Out_8281F248 o2;

  t0 = p[0];
  t1 = p[1];
  fn_828107F0(self + 0xc, &t1, &o2);
  fn_828107B0(self, &t0, &o1);
  fn_82810360(&o1, q);
  fn_82810360(&o2, q + 1);
}
