extern void fn_82522ED8(void *);
extern void fn_82622BD8(void *);
extern void fn_8265CA20(void *);
extern unsigned int lbl_82197010;
extern unsigned int lbl_821CAD7C;

typedef struct Obj_82622B68 { void *vt; int pad4[5]; void *f18; void *f1c; int pad20; void *items[3]; } Obj_82622B68;

void fn_82622B68(Obj_82622B68 *o)
{
  void **p;
  void *x;
  int n;

  o->vt = &lbl_821CAD7C;
  fn_82522ED8(o->f18);
  fn_8265CA20(o->f1c);
  p = o->items;
  n = 3;
  do {
    x = *p;
    if (x != 0) {
      fn_82622BD8(x);
      *p = 0;
    }
    n--;
    p++;
  } while (n != 0);
  o->vt = &lbl_82197010;
}
