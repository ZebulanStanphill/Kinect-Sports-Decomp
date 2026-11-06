typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float vector4_f32[4]; } __vector4;
extern double sqrt(double);
extern int fn_825321B0();

typedef struct {
  char pad0[0x74];
  int f74;
  char pad78[0x2c];
  float fa4;
  float fa8;
} Obj_82331618;

int fn_82331618(Obj_82331618 *o, __vector4 v, float r)
{
  float p[2];
  float dx;
  float dy;

  fn_825321B0(&v, p, o->f74);
  dy = p[1] - o->fa8;
  dx = p[0] - o->fa4;
  return (float)sqrt(dx * dx + dy * dy) <= r;
}
