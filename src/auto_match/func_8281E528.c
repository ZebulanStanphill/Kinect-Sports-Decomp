typedef struct { int x, y, z; } V3_8281E528;
extern void fn_82810B78(V3_8281E528 *, V3_8281E528 *);
extern void fn_8280D9D8(V3_8281E528 *, V3_8281E528 *, void *);
extern void fn_8280E418(void *, void *);

void fn_8281E528(void *out, V3_8281E528 *p2, V3_8281E528 *p3)
{
  V3_8281E528 a = *p2;
  V3_8281E528 b = *p3;
  fn_82810B78(&a, &a);
  fn_82810B78(&b, &b);
  fn_8280D9D8(&a, &b, out);
  fn_8280E418(out, out);
}
