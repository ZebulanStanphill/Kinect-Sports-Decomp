extern void fn_8288B338(void *p);
extern void fn_82897D88(void *p);
typedef struct { void *vt; } Sub;
extern char lbl_821974A4[];
extern char lbl_82197534[];
extern char lbl_82197590[];
extern char lbl_82196884[];
typedef struct {
  void *vt;
  char p0[0x34 - 4];
  Sub s34;
  char p1[0x8c - 0x38];
  Sub s8c;
  char p2[0xf4 - 0x90];
  Sub sf4;
} Obj;
static void Sub_dtor(Sub *s, void *vt) { s->vt = vt; fn_82897D88(s); }
void fn_82242700(Obj *o)
{
  o->vt = lbl_821974A4;
  Sub_dtor(&o->sf4, lbl_82197534);
  Sub_dtor(&o->s8c, lbl_82197534);
  Sub_dtor(&o->s34, lbl_82197590);
  o->vt = lbl_82196884;
  fn_8288B338(o);
}
