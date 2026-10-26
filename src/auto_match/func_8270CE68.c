typedef struct { void *vtbl; int f4; int f8; void *fc; } Obj;
extern void fn_8267BE38(void *p);
extern void fn_8267C488(Obj *p);
extern void fn_8267C4F0(void *p);
extern void fn_8270C708(Obj *p);
extern char lbl_8200E7B0[];

void fn_8270CE68(Obj *p)
{
  p->vtbl = lbl_8200E7B0;
  if (p->f8 != 0) {
    fn_8270C708(p);
  }
  if (p->fc != 0) {
    fn_8267BE38(p->fc);
  }
  if ((void *)p->f8 != 0) {
    fn_8267C4F0((void *)p->f8);
  }
  fn_8267C488(p);
}
