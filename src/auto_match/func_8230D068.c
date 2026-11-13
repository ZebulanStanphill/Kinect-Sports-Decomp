typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);

extern void fn_82230110(void *s, const char *c);
extern void fn_82230300(void *s, int a, int b);
extern unsigned char fn_822BD338(int a, const char *s);
extern void fn_822FB198(int a, void *s);
extern int fn_82369160(int a, int b);
extern float lbl_821CA45C[];

#define W(p, o) (*(int *)((p) + (o)))
#define V(p, o) (*(__vector4 *)((p) + (o)))

typedef struct Str_8230D068 { int a[7]; } Str_8230D068;

static __forceinline __vector4 Replicate(const float *p)
{
    return __vspltw(__lvlx(p, 0), 0);
}

void fn_8230D068(int param_1)
{
  int obj;
  int other;
  Str_8230D068 s1, s2, s3, s4;

  (*(void (**)(int))(W(param_1, 0) + 0x1c))(param_1);
  W(W(param_1, 0xc), 0x200) = 0;
  if (fn_822BD338(W(W(W(param_1, 0xc), 0x114), 0x20) + 4, "run") != 0) {
    obj = W(param_1, 0xc);
    V(param_1, 0x20) = __vmaddfp(V(obj, 0xe0), Replicate(&lbl_821CA45C[1]), V(obj, 0x80));
  } else {
    V(param_1, 0x20) = V(W(param_1, 0xc), 0x80);
  }
  obj = W(param_1, 0xc);
  V(param_1, 0x30) = V(obj, 0x90);
  other = W(param_1, 0x10);
  if (*(unsigned int *)(other + 0x58) == 0x11) {
    if (fn_82369160(other, W(obj, 0x2c)) != 0) {
      fn_82230110(&s1, "idleset_celebrate");
      fn_822FB198(W(W(W(param_1, 0xc), 0x114), 0xc0), &s1);
      fn_82230300(&s1, 1, 0);
    } else {
      fn_82230110(&s2, "idleset_disappointed");
      fn_822FB198(W(W(W(param_1, 0xc), 0x114), 0xc0), &s2);
      fn_82230300(&s2, 1, 0);
    }
  } else if (W(other, 0xe2c) == W(obj, 0x2c)) {
    fn_82230110(&s3, "idleset_celebrate");
    fn_822FB198(W(W(W(param_1, 0xc), 0x114), 0xc0), &s3);
    fn_82230300(&s3, 1, 0);
  } else {
    fn_82230110(&s4, "idleset_disappointed");
    fn_822FB198(W(W(W(param_1, 0xc), 0x114), 0xc0), &s4);
    fn_82230300(&s4, 1, 0);
  }
}
