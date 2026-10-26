extern void fn_82E4FE40(void *);
extern void fn_82E569B0(void *, int);
extern char lbl_82154D80[];

typedef struct { void *vt; void *x; } Sub;
typedef struct { int a; Sub s; } P;

static void Sub_dtor(Sub *s)
{
  s->vt = lbl_82154D80;
  if (s->x == 0) {
    fn_82E569B0(s, 0);
  }
}

P *fn_82E64520(P *p, unsigned int flags)
{
  Sub_dtor(&p->s);
  if ((flags & 1) != 0 && p != 0) {
    fn_82E4FE40(p);
  }
  return p;
}
