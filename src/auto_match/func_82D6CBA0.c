typedef struct Obj Obj;
typedef struct {
  void *f[7];
  void (*fn1c)(Obj *, int);
} ObjVtbl;
struct Obj { ObjVtbl *vt; };
typedef struct { int key; Obj *obj; } Entry;
typedef struct Self Self;
typedef struct { void (*del)(Self *, int); } SelfVtbl;
struct Self {
  SelfVtbl *vt;
  int pad[2];
  Entry *entries;
  int count;
};

void fn_82D6CBA0(Self *self, int arg)
{
  int i;
  for (i = 0; i < self->count; i++) {
    Obj *o = self->entries[i].obj;
    o->vt->fn1c(o, arg);
  }
  self->vt->del(self, 1);
}
