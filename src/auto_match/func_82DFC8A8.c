typedef struct Obj Obj;
typedef struct { void *slot[9]; void (*f)(Obj *o); } VT;
struct Obj { VT *vt; };
typedef struct { int a, b, c; } T;
typedef struct { char pad[0x18]; T *t; char pad2[0x20]; Obj *obj; } S;
typedef struct { int v[4]; } Buf;

extern void fn_82D81240(Buf *out, int b, T *t);

void fn_82DFC8A8(S *p)
{
  Buf buf;
  p->obj->vt->f(p->obj);
  fn_82D81240(&buf, p->t->c, p->t);
}
