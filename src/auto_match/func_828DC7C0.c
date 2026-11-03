extern int fn_828D1F90(void *, void *, int, int);
extern int fn_828E9D90(void *);
extern int fn_828E9DA8(void *);
extern int fn_828E9FF8(void *, int);

void fn_828DC7C0(char *self, void *r)
{
  int a, b, v;
  unsigned __int64 t;
  a = fn_828E9DA8(r);
  b = fn_828E9D90(r);
  if (a - b >= 1) {
    v = fn_828E9FF8(r, 1);
  } else {
    v = 0;
  }
  *(unsigned char *)(self + 0x80) = v != 0;
  fn_828D1F90(r, &t, 8, 0);
  *(unsigned __int64 *)(self + 0x88) = t;
}
