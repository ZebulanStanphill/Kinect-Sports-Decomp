extern void *fn_82FA5060(unsigned int, int);
extern char lbl_8217D040[];
extern unsigned int lbl_831BC768;

typedef struct {
  int a;
  int b;
  int c;
  int d;
} Sub;

typedef struct {
  void *vt;
  Sub s;
} Obj;

static void Sub_init(Sub *s)
{
  s->a = 0;
  s->b = 0;
  s->c = 0;
  s->d = 1;
}

Obj *fn_83032B40(void)
{
  Obj *o;

  o = (Obj *)fn_82FA5060(lbl_831BC768, 0x14);
  if (o != 0) {
    o->vt = lbl_8217D040;
    Sub_init(&o->s);
    return o;
  }
  return 0;
}
