typedef struct Obj2 Obj2;
typedef struct Vt2 { void (*f0)(Obj2 *, int); } Vt2;
struct Obj2 { Vt2 *vt; };
typedef struct Item {
  void (*cb)(int, int);
  int p4, p8;
  int pc;
  Obj2 *o10;
  int p14;
} Item;
typedef struct Obj Obj;
typedef struct Vt { void *pad[6]; void (*f18)(Obj *); } Vt;
struct Obj {
  Vt *vt;
  char pad[8];
  Item **items;
  char pad2[0x1c];
  int cur;
};
typedef struct Cam { char pad[0xc]; float f; } Cam;
extern void fn_8227EB10(Obj *, int);
extern Cam *fn_82275128(void);
extern float lbl_821916FC;

void fn_8227EA48(Obj *o)
{
  Item *it;
  Cam *c;
  if (o->cur != -1) {
    it = o->items[o->cur];
    if (it->cb != 0)
      it->cb(it->p14, it->pc);
    if (it->o10 != 0)
      it->o10->vt->f0(it->o10, it->p14);
    fn_8227EB10(o, 0);
    o->vt->f18(o);
    c = fn_82275128();
    if (c->f < lbl_821916FC)
      c->f = lbl_821916FC;
  }
}
