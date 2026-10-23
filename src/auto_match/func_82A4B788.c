typedef struct Obj Obj;
typedef struct {
  void *(*dtor)(Obj *, int);
} ObjVtbl;
struct Obj {
  ObjVtbl *vt;
};

typedef struct {
  int key;
  Obj obj;
} Item;

extern Item *fn_82A40BA8(void *);
extern void fn_82A4F4E0(void *);

typedef struct {
  char pad0[0x154];
  char queue[0x20];
  unsigned int count;
} S;

void fn_82A4B788(S *s)
{
  Item *it;

  while (s->count != 0) {
    it = fn_82A40BA8(s->queue);
    fn_82A4F4E0(it->obj.vt->dtor(&it->obj, 0));
  }
}
