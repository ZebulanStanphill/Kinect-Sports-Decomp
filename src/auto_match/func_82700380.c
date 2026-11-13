typedef struct Rc_82700380 { int count; } Rc_82700380;
typedef struct Rc2_82700380 { int a; int b; int count; } Rc2_82700380;
typedef struct Obj_82700380 {
  void *p0;
  void *p1;
  unsigned char flags;
  char pad[3];
  void *pc;
  Rc_82700380 *r10;
  Rc2_82700380 *r14;
  void *o18;
  int a1c;
  char pad2[0x34 - 0x20];
  Rc_82700380 *r34;
} Obj_82700380;
extern void fn_8267BE38(void *);
extern void fn_826824B0(void *);
extern void fn_826944C8(Rc2_82700380 *);
extern void fn_8269A608(void *);
extern void fn_8269A990(void *, int);

void fn_82700380(Obj_82700380 *o)
{
  Rc_82700380 *a = o->r34;
  Rc_82700380 *b;
  Rc2_82700380 *c;
  int n;
  if (a != 0) {
    n = a->count - 1;
    a->count = n;
    if (n <= 0) {
      fn_8269A608(a);
      fn_8267BE38(a);
    }
  }
  fn_8269A990(o->o18, o->a1c);
  fn_8267BE38(o->o18);
  c = o->r14;
  n = c->count - 1;
  c->count = n;
  if (n == 0) {
    fn_826944C8(c);
  }
  b = o->r10;
  if (b != 0) {
    n = b->count - 1;
    b->count = n;
    if (n == 0) {
      fn_8267BE38(b);
    }
  }
  if (o->pc != 0) {
    fn_826824B0(o->pc);
  }
  if ((o->flags & 2) == 0 && o->p0 != 0) {
    fn_826824B0(o->p0);
  }
  o->p0 = 0;
  if ((o->flags & 1) == 0 && o->p1 != 0) {
    fn_826824B0(o->p1);
  }
  o->p1 = 0;
}
