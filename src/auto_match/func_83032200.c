extern void fn_830016B0(void *p);
extern unsigned int lbl_8217C940;
extern unsigned int lbl_8217CD88;
typedef struct { int a, b, c; } Sub;
typedef struct { void *vt; int pad[6]; void *vt2; int pad2[0x17]; Sub s; } Obj;

static void Sub_init(Sub *s) { s->a = 0; s->b = 0; s->c = 0; }

Obj *fn_83032200(Obj *p)
{
  fn_830016B0(p);
  Sub_init(&p->s);
  p->vt = &lbl_8217CD88;
  p->vt2 = &lbl_8217C940;
  return p;
}
