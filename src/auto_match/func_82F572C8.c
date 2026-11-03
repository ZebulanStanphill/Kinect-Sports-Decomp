typedef struct Pair_82F572C8 { int ptr; int rep; } Pair_82F572C8;
typedef struct Out_82F572C8 { int a; int b; } Out_82F572C8;
extern void *fn_8265C9E0(int);
extern void *fn_82F540D8(void *);
extern void fn_82F56F00();
extern void fn_8256E1D8();

Out_82F572C8 *fn_82F572C8(Out_82F572C8 *param_1, int param_2)
{
  Pair_82F572C8 *sp = (Pair_82F572C8 *)(param_2 + 0x1e0);
  void *mem;
  void *n;

  if (sp->ptr == 0) {
    mem = fn_8265C9E0(0x14);
    n = mem ? fn_82F540D8(mem) : 0;
    fn_82F56F00(sp, n);
  }
  param_1->a = 0;
  param_1->b = 0;
  fn_8256E1D8(param_1, sp->ptr, sp->rep);
  return param_1;
}
