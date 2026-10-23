typedef struct Obj Obj;
typedef struct {
  void *pad[12];
  void (*release)(Obj *, void *);
} ObjVtbl;
struct Obj {
  ObjVtbl *vt;
};

extern void fn_82670230(Obj *);

typedef struct {
  Obj *obj;
  int data[3];
  int x;
} Entry;

typedef struct {
  int pad0[2];
  unsigned int count;
  int pad1[11];
  Entry entries[1];
} S;

void fn_827B7098(S *s)
{
  unsigned int i;

  for (i = 0; i < s->count; i++) {
    Entry *e = &s->entries[i];
    if (e->obj != 0) {
      e->obj->vt->release(e->obj, e->data);
      fn_82670230(e->obj);
      e->obj = 0;
    }
    e->x = 0;
  }
}
