typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltisw(int value);
extern void fn_82CC5DC8(int a, int b, int c, int d, int e, int f, __vector4 v);

void fn_82CC60B8(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7)
{
  fn_82CC5DC8(param_2, param_3, param_4, param_5, param_6, param_7, __vspltisw(0));
}
