extern void fn_828974A8(void *);
extern void fn_8289D4C0(void *);
extern char lbl_82197070[];
extern char lbl_821B3A60[];
extern char lbl_82197080[];

typedef struct { void *vt; char d[0x50]; } Sub;
typedef struct {
  void *vt;
  int pad[17];
  Sub a;
  Sub b;
} P;

static void Sub_dtor(Sub *s)
{
  s->vt = lbl_82197080;
  fn_8289D4C0(s);
}

static void Base_dtor(P *p)
{
  p->vt = lbl_82197070;
  fn_828974A8(p);
}

void fn_82381CA8(P *p)
{
  p->vt = lbl_821B3A60;
  Sub_dtor(&p->b);
  Sub_dtor(&p->a);
  Base_dtor(p);
}
