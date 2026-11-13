typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float f[4]; } __vector4;
typedef struct Pair { unsigned int a, b; } Pair;
/* the vector argument stays in v1; the 4-byte value is passed left-justified in r6 */
extern void fn_82441D38(int p1, int p2, __vector4 v, int p3, unsigned __int64 x);

void fn_824420F8(int param_1, int param_2, __vector4 v, int param_3, Pair param_4)
{
  fn_82441D38(param_1, param_2, v, param_3, (unsigned __int64)param_4.a << 32);
  *(int *)(**(int **)(param_1 + 4) + 0xb50) = 1;
}
