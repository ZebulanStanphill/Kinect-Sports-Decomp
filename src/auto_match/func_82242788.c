extern void fn_828974A8(void *p);
extern void fn_8289D4C0(void *p);
extern char lbl_82197494[];
extern char lbl_82197100[];
extern char lbl_82197548[];
extern char lbl_82197070[];
typedef struct { void *vt; } Sub;
typedef struct {
  void *vt;
  char p0[0x48 - 4];
  Sub s48;
  char p1[0x9c - 0x4c];
  Sub s9c;
  char p2[0xf0 - 0xa0];
  Sub sf0;
} Obj;
static void Sub_dtor(Sub *s, void *vt) { s->vt = vt; fn_8289D4C0(s); }
void fn_82242788(Obj *o)
{
  o->vt = lbl_82197494;
  Sub_dtor(&o->sf0, lbl_82197100);
  Sub_dtor(&o->s9c, lbl_82197100);
  Sub_dtor(&o->s48, lbl_82197548);
  o->vt = lbl_82197070;
  fn_828974A8(o);
}
