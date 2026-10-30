typedef struct { int a, b, c; } V3_8281EFB8;
typedef struct { V3_8281EFB8 lo; V3_8281EFB8 hi; } Box_8281EFB8;
extern void fn_828107B0(V3_8281EFB8 *, V3_8281EFB8 *, V3_8281EFB8 *);
extern void fn_828107F0(V3_8281EFB8 *, V3_8281EFB8 *, V3_8281EFB8 *);

void fn_8281EFB8(Box_8281EFB8 *o, V3_8281EFB8 *in, int n)
{
  V3_8281EFB8 *p;
  int i;
  o->hi = *in;
  o->lo = *in;
  if (n > 1) {
    p = in + 1;
    i = n - 1;
    do {
      fn_828107F0(&o->hi, p, &o->hi);
      fn_828107B0(&o->lo, p, &o->lo);
      p++;
      i--;
    } while (i != 0);
  }
}
