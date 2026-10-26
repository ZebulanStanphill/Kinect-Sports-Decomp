typedef struct Obj Obj;
typedef struct Vt { void *f[5]; void (*destroy)(Obj *, int); } Vt;
struct Obj { Vt *vt; unsigned int refs; };

unsigned int fn_828F9890(Obj *o)
{
  unsigned int r = o->refs;
  o->refs = r - 1;
  if (r == 1) {
    o->vt->destroy(o, 1);
  }
  return r - 1;
}
