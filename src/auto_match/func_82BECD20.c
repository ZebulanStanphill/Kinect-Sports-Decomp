typedef struct Obj_82BECD20 { void *vt; int pad[2]; void *a; int pad2[3]; void *b; } Obj_82BECD20;
extern void fn_82BE8CF8(Obj_82BECD20 *);
extern void fn_82BE8D50(void *);
extern char lbl_820EB0DC[];
extern void (*lbl_831751CC)(void *);

void fn_82BECD20(Obj_82BECD20 *p)
{
  p->vt = lbl_820EB0DC;
  if (p->a != 0) {
    fn_82BE8D50(p->a);
    p->a = 0;
  }
  if (p->b != 0) {
    lbl_831751CC(p->b);
    p->b = 0;
  }
  fn_82BE8CF8(p);
}
