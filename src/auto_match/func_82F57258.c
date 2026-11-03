typedef struct Pair_82F57258 { int ptr; int rep; } Pair_82F57258;
typedef struct Out_82F57258 { int a; int b; } Out_82F57258;
extern void *fn_82F526B8(int);
extern void *fn_82F5C990(void *);
extern void fn_82F56EA0();
extern void fn_8256E1D8();

Out_82F57258 *fn_82F57258(Out_82F57258 *param_1, int param_2)
{
  Pair_82F57258 *sp = (Pair_82F57258 *)(param_2 + 0x1d8);
  void *mem;
  void *n;

  if (sp->ptr == 0) {
    mem = fn_82F526B8(0xc);
    n = mem ? fn_82F5C990(mem) : 0;
    fn_82F56EA0(sp, n);
  }
  param_1->a = 0;
  param_1->b = 0;
  fn_8256E1D8(param_1, sp->ptr, sp->rep);
  return param_1;
}
