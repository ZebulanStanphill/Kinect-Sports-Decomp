extern void fn_8288B338(void *);
extern void fn_82897D88(void *);
extern char lbl_82196884[];
extern char lbl_82196BD8[];
extern char lbl_821970C0[];

typedef struct { void *vt; char d[0x54]; } Sub;
typedef struct {
  void *vt;
  int pad[12];
  Sub a;
  Sub b;
} P;

static void Sub_dtor(Sub *s)
{
  s->vt = lbl_821970C0;
  fn_82897D88(s);
}

static void Base_dtor(P *p)
{
  p->vt = lbl_82196884;
  fn_8288B338(p);
}

void fn_82232D38(P *p)
{
  p->vt = lbl_82196BD8;
  Sub_dtor(&p->b);
  Sub_dtor(&p->a);
  Base_dtor(p);
}
