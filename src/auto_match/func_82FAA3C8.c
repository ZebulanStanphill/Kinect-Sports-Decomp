typedef struct Obj_82FAA3C8 {
  void *vt;
  int pad04[4];
  void *f14;
  void *f18;
  void *f1c;
  int pad20[8];
  void *f40;
} Obj_82FAA3C8;
extern void fn_82FA5190(void *a, void *b);
extern void fn_82FA9208(void *p);
extern void fn_82FAC5F0(void *p);
extern char lbl_8216CC50[];
extern char lbl_8217D040[];
extern void *lbl_831BC768;

void fn_82FAA3C8(Obj_82FAA3C8 *o)
{
  void *p;
  o->vt = lbl_8216CC50;
  if ((int)o->f40 != 0) {
    fn_82FAC5F0(o->f40);
  }
  p = o->f40;
  o->f40 = 0;
  if (p != 0) {
    fn_82FA9208(p);
  }
  if (o->f14 != 0) {
    o->f18 = o->f14;
    fn_82FA5190(lbl_831BC768, o->f14);
    o->f14 = 0;
    o->f18 = 0;
    o->f1c = 0;
  }
  if (o->f40 != 0) {
    fn_82FA9208(o->f40);
    o->f40 = 0;
  }
  o->vt = lbl_8217D040;
}
