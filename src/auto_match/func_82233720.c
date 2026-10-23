extern void fn_8288B338(void *p);
extern void fn_82897D88(void *p);
extern char lbl_82196884[];
extern char lbl_82196CB0[];
extern char lbl_82196D80[];
extern char lbl_82196D88[];
extern char lbl_82196D98[];
extern char lbl_82197534[];

typedef struct Sub { void *vt; } Sub;
typedef struct Obj {
  void *vt;
  char p0[0x34 - 4];
  Sub s34;
  char p1[0x9c - 0x38];
  Sub s9c;
  char p2[0x104 - 0xa0];
  Sub s104;
  char p3[0x15c - 0x108];
  Sub s15c;
  char p4[0x1b4 - 0x160];
  Sub s1b4;
} Obj;

static void Sub_dtor(Sub *s, void *vt) { s->vt = vt; fn_82897D88(s); }

void fn_82233720(Obj *o)
{
  o->vt = lbl_82196D80;
  Sub_dtor(&o->s1b4, lbl_82196D98);
  Sub_dtor(&o->s15c, lbl_82196D88);
  Sub_dtor(&o->s104, lbl_82196CB0);
  Sub_dtor(&o->s9c, lbl_82197534);
  Sub_dtor(&o->s34, lbl_82197534);
  o->vt = lbl_82196884;
  fn_8288B338(o);
}
