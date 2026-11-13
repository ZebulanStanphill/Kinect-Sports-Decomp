typedef struct A_826AB218 { int p0; unsigned mask; } A_826AB218;
typedef struct B_826AB218 { char p0[0xc]; unsigned m; } B_826AB218;
typedef struct R_826AB218 { void *obj; int hr; } R_826AB218;
extern int fn_826A9D30(void *, void *, unsigned);

R_826AB218 *fn_826AB218(R_826AB218 *r, A_826AB218 **a, B_826AB218 **b)
{
  int hr;
  if (*a != 0) {
    { unsigned am = (*a)->mask; unsigned bm = (*b)->m; hr = fn_826A9D30(a, b, am & bm); }
    if (hr >= 0) { r->obj = a; r->hr = hr; return r; }
  }
  r->obj = 0;
  r->hr = 0;
  return r;
}
