typedef struct Obj_83051648 {
  void (**vt)(struct Obj_83051648 *, int);
  char pad[0x74]; int f78; void *f7c; char pad2[0xc]; int f8c;
} Obj_83051648;
extern int fn_82FA5190();
extern int fn_82FA57F0();
extern int fn_83055DD0();
extern void *lbl_831BC978;

void fn_83051648(Obj_83051648 *p)
{
  void *u;

  fn_83055DD0();
  if (p->f7c != 0) {
    p->f78 = 0;
    fn_82FA5190(lbl_831BC978, p->f7c);
  }
  p->f78 = 0;
  if (p->f8c != -1) {
    fn_82FA57F0(p->f8c);
  }
  p->f8c = -1;
  u = lbl_831BC978;
  (*p->vt[0])(p, 0);
  fn_82FA5190(u, p);
}
