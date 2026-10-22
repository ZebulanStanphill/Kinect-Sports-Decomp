typedef struct Obj Obj;
typedef struct ObjVt {
  void *f0;
  void *f4;
  void *f8;
  void (*fc)(Obj *self, int a);
} ObjVt;
struct Obj {
  ObjVt *vt;
};

typedef struct Node {
  Obj *obj;
  struct Node *next;
} Node;

typedef struct Self {
  void *vt;
  int f4;
  Node *list;
  void *fc;
  void *f10;
  void *f14;
  void *f18;
  void *f1c;
  void *f20;
  int f24;
  void *f28;
} Self;

extern void fn_8251FA58(void *a);
extern void fn_82522ED8(void *a);
extern void fn_82545950(void *a);
extern void fn_82545A90(void *a);
extern void fn_8262FEC8(void *a);
extern char lbl_821C1424[];
extern char lbl_821C9048[];

void fn_825C56B8(Self *self)
{
  Node *n;
  Node *next;

  self->vt = lbl_821C9048;
  n = self->list;
  while (n != 0) {
    if (n->obj != 0) {
      n->obj->vt->fc(n->obj, 1);
      n->obj = 0;
    }
    next = n->next;
    fn_82522ED8(n);
    n = next;
  }
  self->list = 0;
  if (self->f20 != 0) {
    fn_8251FA58(self->f20);
    self->f20 = 0;
    self->f24 = 0;
  }
  if (self->f28 != 0) {
    fn_8262FEC8(self->f28);
    self->f28 = 0;
  }
  if (self->fc != 0) {
    fn_82545950(&self->fc);
  }
  if (self->f10 != 0) {
    fn_82545950(&self->f10);
  }
  if (self->f14 != 0) {
    fn_82545A90(&self->f14);
  }
  if (self->f18 != 0) {
    fn_82545950(&self->f18);
  }
  if (self->f1c != 0) {
    fn_82545A90(&self->f1c);
  }
  self->vt = lbl_821C1424;
}
