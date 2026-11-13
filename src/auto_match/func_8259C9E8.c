typedef struct Obj_8259C9E8 {
  void *vt;
  int pad04[6];
  void *f1c;
  void *f20;
} Obj_8259C9E8;
extern void fn_8263CBB0(void *a, unsigned int b, void *c, unsigned __int64 mask);
extern void fn_8251FA58(void *p);
extern void *lbl_8320A898;
extern char lbl_821C7E98[];
extern char lbl_821C7E88[];

void fn_8259C9E8(Obj_8259C9E8 *o)
{
  o->vt = lbl_821C7E98;
  fn_8263CBB0(lbl_8320A898, 6, 0, 0x2000000);
  fn_8263CBB0(lbl_8320A898, 7, 0, 0x1000000);
  if (o->f1c) {
    fn_8251FA58(o->f1c);
    o->f1c = 0;
  }
  if (o->f20) {
    fn_8251FA58(o->f20);
    o->f20 = 0;
  }
  o->vt = lbl_821C7E88;
}
