typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
  float vector4_f32[4];
} __vector4;

typedef struct {
  float x, y, z;
} V3;

extern void fn_82441D38(void *p, int b, __vector4 v, V3 s);
extern void fn_82446088(void *p);

void fn_82445F60(void *p, int b, __vector4 v, V3 s)
{
  fn_82441D38(p, b, v, s);
  fn_82446088(p);
}
