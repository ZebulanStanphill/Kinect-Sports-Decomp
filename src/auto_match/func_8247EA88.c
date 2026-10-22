typedef struct VObj { void (**vt)(struct VObj *, int); } VObj;

typedef struct {
  int pad0;
  void *p4;
} Sub;

typedef struct {
  char pad0[0x14];
  VObj *x14;
  char pad18[0x78 - 0x18];
  void *x78;
  int pad7c;
  void *x80;
  int pad84;
  char x88[0xa4 - 0x88];
  void *xa4;
  char pada8[0xb4 - 0xa8];
  void *xb4;
  void *xb8;
  void *xbc;
  int padc0;
  void *xc4;
  Sub *xc8;
  char padcc[0xec - 0xcc];
  void *xec;
} Obj;

extern void fn_822315A0(void *p);
extern void fn_822746B8(void *p, int a);
extern void fn_822848B8(void *p);
extern void fn_8229E090(void *p, int a, int b);
extern void fn_82359C18(void *p);
extern void fn_8247DD58(void *p);
extern void fn_824801F8(Obj *p);
extern void fn_8265CA20(void *p);
typedef struct { char pad[0xf0]; int xf0; int xf4; } Glob;
extern Glob *lbl_8327F844;

static void Glob_clear(Glob *g)
{
  g->xf0 = 0;
  g->xf4 = 0;
}

void fn_8247EA88(Obj *o)
{
  Sub *s;
  VObj *v;
  void *a;

  if (o->x78 != 0) {
    fn_822848B8(o->x78);
    o->x78 = 0;
  }
  s = o->xc8;
  if (s != 0) {
    if (s->p4 != 0) {
      fn_822315A0(s->p4);
    }
    fn_8265CA20(s);
    o->xc8 = 0;
  }
  fn_824801F8(o);
  if (o->xb4 != 0) {
    fn_8229E090(o->xb4, 0, 0);
  }
  if (o->xb8 != 0) {
    fn_8229E090(o->xb8, 0, 0);
  }
  if (o->xbc != 0) {
    fn_8229E090(o->xbc, 0, 0);
  }
  v = o->x14;
  if (v != 0) {
    (*v->vt[0])(v, 1);
  }
  if (o->xec != 0) {
    fn_822746B8(o->xec, 0);
    o->xec = 0;
  }
  if (lbl_8327F844 != 0) {
    Glob_clear(lbl_8327F844);
  }
  if (o->xc4 != 0) {
    fn_822315A0(o->xc4);
  }
  a = o->xa4;
  if (a != 0) {
    fn_8247DD58(a);
    fn_8265CA20(a);
  }
  fn_82359C18(o->x88);
  if (o->x80 != 0) {
    fn_822315A0(o->x80);
  }
}
