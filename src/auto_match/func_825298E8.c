typedef struct Node_825298E8 {
  struct Node_825298E8 *left, *parent, *right;
  unsigned key;
  char pad[5];
  unsigned char isnil;
} Node_825298E8;
typedef struct { int pad; Node_825298E8 *head; } Set_825298E8;
typedef struct Vt_825298E8 { void (*dtor)(void *, int); char pad[0x58]; void (*f5c)(void *, int); } Vt_825298E8;
typedef struct Child_825298E8 { Vt_825298E8 *vt; char pad[0x7c]; int f80; } Child_825298E8;
typedef struct Obj_825298E8 {
  int f0; int f4; char pad[0x14]; int f1c; Child_825298E8 *f20;
} Obj_825298E8;
extern Set_825298E8 lbl_83297004;
extern int lbl_8326AF38;
extern unsigned char fn_8288B760(Child_825298E8 *);
extern void fn_82594B58(Obj_825298E8 *);
extern void fn_82529CC0(Obj_825298E8 *, int, int);
extern void fn_82522ED8(Obj_825298E8 *);

typedef struct { Node_825298E8 *p; } It_825298E8;
static It_825298E8 lbound(unsigned key)
{
  It_825298E8 r;
  Node_825298E8 *where = lbl_83297004.head;
  Node_825298E8 *n = where->parent;
  while (n->isnil == 0) {
    if (n->key < key) {
      n = n->right;
    } else {
      where = n;
      n = n->left;
    }
  }
  r.p = where;
  return r;
}

void fn_825298E8(Obj_825298E8 *o)
{
  if (o->f1c != 0) {
    Node_825298E8 *where, *endp;
    It_825298E8 it;
    Node_825298E8 **pp;
    Node_825298E8 *endv;
    if (o->f20 != 0) {
      if (fn_8288B760(o->f20)) {
        if (o->f20 != 0)
          o->f20->vt->dtor(o->f20, 1);
      }
      {
        Child_825298E8 *c = o->f20;
        if (c != 0) {
          c->vt->f5c(c, 1);
          c->f80 = 0;
          c->vt->f5c(c, 0);
          o->f20 = 0;
        }
      }
    }
    o->f20 = 0;
    it = lbound((unsigned)o);
    where = it.p;
    endp = lbl_83297004.head;
    if (where == endp || (unsigned)o < where->key) {
      endv = endp;
      pp = &endv;
    } else {
      pp = &where;
    }
    if (*pp != lbl_83297004.head)
      fn_82594B58(o);
  }
  fn_82529CC0(o, o->f4, 0);
  fn_82522ED8(o);
  lbl_8326AF38--;
}
