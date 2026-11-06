typedef struct { void *vt; int p4; int p8; void *p; } O;
extern char lbl_820EBEAC[];
extern char lbl_820EBEA4[];
extern void (*lbl_831751CC)(void *);
extern void fn_82BE8CF8(O *);
void fn_82BFB150(O *o)
{
  o->vt = lbl_820EBEAC;
  if (o->p != 0) {
    lbl_831751CC(o->p);
    o->p = 0;
  }
  o->vt = lbl_820EBEA4;
  fn_82BE8CF8(o);
}
