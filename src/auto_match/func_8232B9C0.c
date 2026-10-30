typedef struct Obj Obj;
typedef struct {
  void *f0, *f1, *f2;
  void (*f3)(Obj *, int, int, int, unsigned char);
  void (*f4)(Obj *, int, int, unsigned char);
} ObjVt;
struct Obj { ObjVt *vt; unsigned int id; };
typedef struct { unsigned int id; int a, b; int c; int type; int d; int e; } Msg;

void fn_8232B9C0(Obj *o, Msg *m)
{
  if (m->id == o->id) {
    o->vt->f3(o, m->c, m->e, m->d, m->type == 8);
  } else {
    o->vt->f4(o, m->c, m->e, m->type == 8);
  }
}
