typedef struct Obj_82BF7940 { int *vt; int a; int b; int c; } Obj_82BF7940;
typedef struct Obj_82BF7B48 {
  Obj_82BF7940 base;
  int f10;
  int f14;
  int f18;
} Obj_82BF7B48;
extern Obj_82BF7940 *fn_82BF7940(Obj_82BF7940 *self, int a, char *s1, char *s2);
extern unsigned int lbl_820EBC64;

Obj_82BF7B48 *fn_82BF7B48(Obj_82BF7B48 *self, int a, char *s1, char *s2, int p5, int p6)
{
  fn_82BF7940(&self->base, a, s1, s2);
  self->f14 = p5;
  self->f18 = p6;
  self->f10 = 0;
  self->base.vt = (int *)&lbl_820EBC64;
  return self;
}
