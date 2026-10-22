extern int fn_8267EFD0(int a);

typedef struct Obj Obj;
typedef struct ObjVt {
  void *f0;
  unsigned char (*test)(Obj *);
  Obj *(*get)(Obj *);
} ObjVt;
struct Obj { ObjVt *vt; };

typedef struct List { Obj **items; unsigned int count; int x; } List;

void fn_8267F9D0(List *l)
{
  unsigned int i;
  Obj *o;

  for (i = 0; i < l->count; i++) {
    o = l->items[i]->vt->get(l->items[i]);
    if (o->vt->test(o)) {
      fn_8267EFD0(l->x);
      return;
    }
  }
}
