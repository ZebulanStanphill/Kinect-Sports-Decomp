typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float vector4_f32[4]; } __vector4;
__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4 a, int n);
typedef struct S24_83015A90 { int v[6]; } S24_83015A90;
typedef struct Slot_83015A90 { int f0; int f4; S24_83015A90 val; } Slot_83015A90;
extern Slot_83015A90 *fn_82FFE0F0(void *p);
static __forceinline __vector4 Replicate(float f) { __vector4 v = __lvlx(&f, 0); return __vspltw(v, 0); }

typedef struct Value_83015A90 { __vector4 a; __vector4 b; } Value_83015A90;
int fn_83015A90(char *self, int unused, float f)
{
  Value_83015A90 val;
  Slot_83015A90 *s;
  val.a = val.b = Replicate(f);
  s = fn_82FFE0F0(self + 4);
  if (s != 0) { s->val = *(S24_83015A90 *)&val; return 1; }
  return 2;
}
