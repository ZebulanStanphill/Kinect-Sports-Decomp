extern int fn_82526BD8(void *, int, void *);
extern char lbl_82165C3C[];
typedef struct { char pad[0x44]; int mode; } In_82F53A20;
typedef struct {
  void *vt; int a4, a8, ac;
  char b10[0x20];
  float f30; int a34; unsigned char flag;
} Obj_82F53A20;

Obj_82F53A20 *fn_82F53A20(Obj_82F53A20 *o, In_82F53A20 *in)
{
  o->a4 = 0;
  o->f30 = 0.0f;
  o->a8 = 0;
  o->ac = 0;
  o->a34 = 0;
  o->vt = lbl_82165C3C;
  o->flag = in->mode != 0;
  fn_82526BD8(o->b10, 0x20, in);
  o->flag = in->mode == 1;
  return o;
}
