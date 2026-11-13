extern void fn_822315A0(void *);
extern void fn_8226D6A0(void *);
extern void fn_8227FFA8(void *);
extern void *fn_822820E0(void *, void *, void *);
extern void fn_82356F98(void *);
extern void fn_82359C18(void *);
extern void fn_823F2E20(void *, void *);
extern void fn_8265CA20(void *);
extern unsigned int lbl_821A8A08;

typedef struct Ref_82281430 { void *p; void *c; } Ref_82281430;
typedef struct Node_82281430 { struct Node_82281430 *next; int a; int b; } Node_82281430;
typedef struct Elem_82281430 { int a; int b; void *c; } Elem_82281430;
typedef struct Vec_82281430 { Elem_82281430 *first; Elem_82281430 *last; Elem_82281430 *end; } Vec_82281430;
typedef struct Obj_82281430 {
  void *vt; char pad[0xc]; void *f10; Vec_82281430 v; char pad2[0x40 - 0x20]; int f40; char pad3[4]; char sub[4];
} Obj_82281430;

void fn_82281430(Obj_82281430 *o)
{
  void *f = o->f10;
  Node_82281430 *n;
  Elem_82281430 *e;
  void **pc;
  Vec_82281430 *v;
  struct { void *it; int pad; Ref_82281430 tmp; } L;
  o->vt = &lbl_821A8A08;
  if (f != 0) {
    fn_8227FFA8(f);
    fn_8265CA20(f);
  }
  v = &o->v;
  for (n = (Node_82281430 *)o->v.first; (Elem_82281430 *)n < o->v.last; n = *(Node_82281430 **)fn_822820E0(&L.it, v, n)) {
    fn_8226D6A0((void *)n->next);
    fn_82356F98(&L.tmp);
    fn_823F2E20(&n->a, &L.tmp);
    if (L.tmp.c != 0) {
      fn_822315A0(L.tmp.c);
    }
  }
  o->f40 = 0;
  fn_82359C18(o->sub);
  if (v->first != 0) {
    Elem_82281430 *last = v->last;
    e = v->first;
    if (e != last) {
      pc = &e->c;
      do {
        if (*pc != 0) {
          fn_822315A0(*pc);
        }
        e++;
        pc = (void **)((char *)pc + 0xc);
      } while (e != last);
    }
    fn_8265CA20(v->first);
  }
  v->first = 0;
  v->last = 0;
  v->end = 0;
}
