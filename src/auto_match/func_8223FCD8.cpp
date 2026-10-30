struct Base { int x; };
struct Obj : virtual Base { int y; };
typedef void (*fnp)(Base *, __int64);
struct Bind { fnp f; int pad; __int64 arg; };

extern "C" Obj *fn_8223FCD8(Obj *param_1, Bind *param_2)
{
  param_2->f(param_1, param_2->arg);
  return param_1;
}
