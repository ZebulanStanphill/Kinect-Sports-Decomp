typedef struct O_82BF83A8 { void *vt; char pad[0x28]; void *f2c; void *f30; } O_82BF83A8;
extern char lbl_820EBDA8[];
extern void (*lbl_831751CC)(void *);
extern void fn_82BE8CF8(void *);
void fn_82BF83A8(O_82BF83A8 *o)
{
  o->vt = lbl_820EBDA8;
  if (o->f2c != 0) {
    lbl_831751CC(o->f2c);
    o->f2c = 0;
  }
  if (o->f30 != 0) {
    lbl_831751CC(o->f30);
    o->f30 = 0;
  }
  fn_82BE8CF8(o);
}
