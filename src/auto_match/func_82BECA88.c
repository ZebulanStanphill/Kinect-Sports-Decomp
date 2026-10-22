extern int fn_82BF6BC0();

typedef struct Obj Obj;
typedef struct {
  void *f0;
  int (*f4)(Obj *);
} VT;
struct Obj { VT *vt; };

typedef struct {
  char pad[0x10];
  Obj *o;
} Item;

typedef struct {
  char pad0[0x2c];
  char list[8];
  Item *cur;
  char pad1[0x18];
  int state;
} S;

void fn_82BECA88(S *p)
{
  Obj *o;
  while (p->state != 2) {
    if (p->cur == 0) {
      return;
    }
    if (fn_82BF6BC0(p->list, p->cur) == 0) {
      p->state = 2;
      return;
    }
    if (p->cur == 0) {
      return;
    }
    o = p->cur->o;
    if (o != 0 && o->vt->f4(o) != 0) {
      return;
    }
  }
}
