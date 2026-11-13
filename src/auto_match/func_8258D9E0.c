extern unsigned int *auStack_40;
extern unsigned int fStack_34;
extern unsigned int fStack_38;
extern int fn_82230300();
extern int *fn_8258E488();

typedef struct { float x; float y; } Vec2_8258D9E0;

void fn_8258D9E0(int param_3, int param_4, float param_1, float param_2)
{
  unsigned int *piVar1;
  unsigned int a;
  unsigned int o;
  struct { unsigned char buf[8]; Vec2_8258D9E0 v; } s;

  piVar1 = fn_8258E488(s.buf, param_3 + 0x1b0, param_4);
  a = *(unsigned int *)(param_3 + 0x1b4);
  o = *piVar1;
  if (o != a) {
    s.v.x = param_1;
    s.v.y = param_2;
    *(Vec2_8258D9E0 *)(o + 0x30) = s.v;
  }
  fn_82230300(param_4, 1, 0);
  return;
}
