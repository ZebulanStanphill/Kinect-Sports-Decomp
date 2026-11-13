typedef struct { unsigned __int64 q[8]; } S64B_82593438;
typedef struct { int a, b, c; } R12_82593438;
extern void fn_82574438(void *, unsigned int, int, S64B_82593438 *);
extern R12_82593438 fn_8255AA78(S64B_82593438);

static __forceinline int Get_82593438(unsigned int p)
{
  unsigned int a = *(unsigned int *)(p + 0x4c);
  unsigned int b;
  if (a == 0) return 0;
  b = *(unsigned int *)(p + 0x8c0);
  if (b == 0) return 0;
  return *(int *)((*(int *)(a + 0x44) + 0x20) * 4 + b);
}

void fn_82593438(unsigned int param_1, void *param_2, R12_82593438 *param_3)
{
  S64B_82593438 s;

  fn_82574438(param_2, param_1 + 0xf0, Get_82593438(param_1), &s);
  { R12_82593438 t = fn_8255AA78(s); *param_3 = t; }
}
