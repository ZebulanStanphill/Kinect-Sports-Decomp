typedef struct { int a, b, c; void *v; } E;
typedef struct { int a; int sub; } P;
extern void fn_8267BE38(void *);
extern void fn_827A5378(int *);
extern void fn_827A7148(void *);
extern void fn_827A7218(P *, int *);
extern E *fn_827A7548(P *, int *);

void fn_827A7FD0(P *p)
{
  int *s = &p->sub;
  E *e;
  void **v;
  fn_827A5378(s);
  e = fn_827A7548(p, s);
  v = (void **)((e != 0 ? -1 : 0) & (unsigned int)&e->v);
  if (v != 0) {
    void *o = *v;
    if (o != 0) {
      fn_827A7148(o);
      fn_8267BE38(o);
    }
    fn_827A7218(p, s);
  }
}
