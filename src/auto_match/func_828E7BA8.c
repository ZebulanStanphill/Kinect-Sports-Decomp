typedef struct Fn_828E7BA8 { unsigned int m; int pad; char buf[0x18]; } Fn_828E7BA8;
typedef void (*Mgr_828E7BA8)(void *, void *, int);
extern void fn_828E6358(Fn_828E7BA8 *);
extern void fn_828E6658(Fn_828E7BA8 *, Fn_828E7BA8 *);
extern void fn_828E68F8(Fn_828E7BA8 *);

Fn_828E7BA8 *fn_828E7BA8(Fn_828E7BA8 *param_1)
{
  Fn_828E7BA8 a;
  Fn_828E7BA8 b;
  a.m = 0;
  fn_828E68F8(&a);
  if (param_1 != &a) {
    b.m = 0;
    fn_828E6658(&b, &a);
    fn_828E6658(&a, param_1);
    fn_828E6658(param_1, &b);
    fn_828E6358(&b);
  }
  if (a.m != 0 && (a.m & 1) == 0) {
    Mgr_828E7BA8 f = *(Mgr_828E7BA8 *)(a.m & 0xfffffffe);
    if (f != 0) {
      f(a.buf, a.buf, 2);
    }
  }
  return param_1;
}
