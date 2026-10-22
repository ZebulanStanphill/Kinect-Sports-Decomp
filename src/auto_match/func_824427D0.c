extern void fn_823B78E0(void *owner, void *sub);
extern void fn_82441CB0(void *p);
extern void fn_8265CA20(void *p);
extern char lbl_821B5BEC[];
extern char lbl_821B9B00[];
extern char lbl_821B9B14[];

typedef struct Sub {
  void *vtbl;
  void *owner;
} Sub;

typedef struct Obj {
  void *vtbl;
  int f4;
  Sub sub;
  int f10;
  char *child;
} Obj;

static void Sub_dtor(Sub *s)
{
  s->vtbl = lbl_821B5BEC;
  if (s->owner != 0) {
    fn_823B78E0(s->owner, s);
  }
}

void fn_824427D0(Obj *p)
{
  char *c = p->child;
  p->vtbl = lbl_821B9B00;
  p->sub.vtbl = lbl_821B9B14;
  if (c != 0) {
    fn_82441CB0(c + 0xdc);
    fn_8265CA20(c);
  }
  Sub_dtor(&p->sub);
  fn_82441CB0(p);
}
