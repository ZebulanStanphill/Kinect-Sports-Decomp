typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float vector4_f32[4]; } __vector4;
typedef int (*code)();
extern void fn_822315A0(unsigned int);
extern void fn_82255EA8(int, int, int);
extern void fn_822D79D8(int *, int);
extern int fn_822D7FE0(int);
extern unsigned int fn_8265C9E0(int);
extern void fn_828B55B0(int);
extern void fn_828E2B28(int, int *);
extern void fn_828E9D40(int);
extern void fn_828E9D90(int);

void fn_82328D90(int param_2, __vector4 v, float f, int a, int b, int obj, int c, int d)
{
  unsigned int mem;
  int raw;
  struct { int first; unsigned int second; } sp;

  mem = fn_8265C9E0(0x28);
  if (mem != 0) {
    raw = fn_822D7FE0(mem);
  } else {
    raw = 0;
  }
  sp.first = 0;
  sp.second = 0;
  fn_822D79D8(&sp.first, raw);
  (*(code *)(**(int **)(param_2 + 0x68) + 0x10))(*(int **)(param_2 + 0x68), sp.first, &v);
  (*(code *)(**(int **)(param_2 + 0x70) + 0x10))(*(int **)(param_2 + 0x70), sp.first, &f);
  (*(code *)(**(int **)(param_2 + 0x78) + 0x10))(*(int **)(param_2 + 0x78), sp.first, &a);
  (*(code *)(**(int **)(param_2 + 0x80) + 0x10))(*(int **)(param_2 + 0x80), sp.first, &b);
  (*(code *)(**(int **)(param_2 + 0x88) + 0x10))(*(int **)(param_2 + 0x88), sp.first, obj);
  (*(code *)(**(int **)(param_2 + 0x90) + 0x10))(*(int **)(param_2 + 0x90), sp.first, &c);
  (*(code *)(**(int **)(param_2 + 0x98) + 0x10))(*(int **)(param_2 + 0x98), sp.first, &d);
  if (*(unsigned int *)(param_2 + 0x48) != 0) {
    fn_828E9D90(sp.first);
    fn_828E9D40(sp.first);
    fn_82255EA8(param_2, sp.first, param_2 + 0x38);
  }
  fn_828E2B28(param_2, &sp.first);
  if (sp.second != 0) {
    fn_822315A0(sp.second);
  }
  fn_828B55B0(obj);
}
