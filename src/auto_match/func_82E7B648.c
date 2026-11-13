//BODY
typedef struct VO_82E7B648 { void (**vt)(struct VO_82E7B648 *); } VO_82E7B648;
typedef struct Obj_82E7B648 {
  void *vt;
  int f4;
  VO_82E7B648 *f8;
  VO_82E7B648 *fc;
  int f10[4];
  VO_82E7B648 *f20;
} Obj_82E7B648;

extern void fn_82E72FB8(void *);
extern char lbl_8215F058[];

void fn_82E7B648(Obj_82E7B648 *p)
{
  p->vt = lbl_8215F058;
  if (p->f20 != 0) {
    p->f20->vt[2](p->f20);
    p->f20 = 0;
  }
  if (p->fc != 0) {
    p->fc->vt[2](p->fc);
    p->fc = 0;
  }
  if (p->f8 != 0) {
    p->f8->vt[2](p->f8);
    p->f8 = 0;
  }
  fn_82E72FB8(p->f10);
}
