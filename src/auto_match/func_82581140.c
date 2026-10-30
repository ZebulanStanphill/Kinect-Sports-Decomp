extern void fn_8251FA58(void *);
extern void fn_82522ED8(void *);
extern void fn_82545950(void *);
extern void fn_82545A90(void *);
extern void fn_825D6AD8(void *);
extern unsigned int lbl_821C1424;
extern unsigned int lbl_821C5F0C;

typedef struct { void **vt; } VObj_82581140;
typedef struct { int rc_pad; int rc; } Rc_82581140;
typedef struct NodeA_82581140 {
  VObj_82581140 *obj;
  Rc_82581140 *rc;
  int pad[3];
  struct NodeA_82581140 *next;
} NodeA_82581140;
typedef struct NodeB_82581140 {
  void *obj;
  int pad[3];
  struct NodeB_82581140 *next;
} NodeB_82581140;
typedef struct {
  unsigned vt;
  int pad4;
  void *a[0x1f];
  void *b[0x16];
  NodeA_82581140 *la;
  NodeB_82581140 *lb;
  void *f0e4;
  int f0e8;
} Obj_82581140;

void fn_82581140(Obj_82581140 *o)
{
  NodeA_82581140 *na;
  NodeB_82581140 *nb;
  void **p;
  int n;
  o->vt = (unsigned)&lbl_821C5F0C;
  na = o->la;
  while (na != 0) {
    if (na->obj != 0) {
      ((void (*)(void *, int))na->obj->vt[0xc / 4])(na->obj, 1);
      na->obj = 0;
    }
    if (na->rc != 0) {
      na->rc->rc = na->rc->rc - 1;
    }
    {
      NodeA_82581140 *nx = na->next;
      fn_82522ED8(na);
      na = nx;
    }
  }
  o->la = 0;
  nb = o->lb;
  while (nb != 0) {
    if (nb->obj != 0) {
      fn_825D6AD8(nb->obj);
      nb->obj = 0;
    }
    {
      NodeB_82581140 *nx = nb->next;
      fn_82522ED8(nb);
      nb = nx;
    }
  }
  o->lb = 0;
  if (o->f0e4 != 0) {
    fn_8251FA58(o->f0e4);
    o->f0e4 = 0;
    o->f0e8 = 0;
  }
  p = o->a;
  n = 0x1f;
  do {
    if (*p != 0) {
      fn_82545950(p);
    }
    n--;
    p++;
  } while (n != 0);
  p = o->b;
  n = 0x16;
  do {
    if (*p != 0) {
      fn_82545A90(p);
    }
    n--;
    p++;
  } while (n != 0);
  o->vt = (unsigned)&lbl_821C1424;
}
