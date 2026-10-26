typedef void (*code)(void *, void *, int);
extern void fn_82774258(void *);
extern void fn_82774C88(void *, int);
extern void fn_82776840(void *, int);

typedef struct { int **obj; int aux; } Ref;
typedef struct { int pad; char a[0xc]; char b[0xc]; Ref ref; unsigned char f24; unsigned char f25; } Obj;

void fn_82777070(Obj *o)
{
  Ref *r = &o->ref;

  if (r->obj != 0) {
    (*(code *)(*r->obj + 0x11))(r->obj, r, 3);
  }
  r->obj = 0;
  r->aux = 0;
  fn_82774258(o);
  fn_82776840(o->a, 0);
  fn_82774C88(o->b, 0);
  o->f24 = 0;
  o->f25 = 0;
}
