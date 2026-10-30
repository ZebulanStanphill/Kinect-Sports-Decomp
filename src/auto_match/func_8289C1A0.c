struct Obj_8289C1A0;
typedef struct VT_8289C1A0 {
  void (*dtor)(struct Obj_8289C1A0 *, int);
  unsigned int (*m4)(struct Obj_8289C1A0 *);
  void *s8;
  unsigned int (*mc)(struct Obj_8289C1A0 *);
  void *s10;
  unsigned int (*m14)(struct Obj_8289C1A0 *);
} VT_8289C1A0;
typedef struct Obj_8289C1A0 { VT_8289C1A0 *vt; } Obj_8289C1A0;
typedef struct Node_8289C1A0 { struct Node_8289C1A0 *next; void *prev; void *pad; void *pad2; void *val; } Node_8289C1A0;
typedef struct { char pad[0x220]; Node_8289C1A0 *head; } Mgr_8289C1A0;
typedef struct { char pad[0x20]; Obj_8289C1A0 *obj; char f24; char pad2[3]; Mgr_8289C1A0 *mgr; } Self_8289C1A0;
extern void fn_8289C078(Self_8289C1A0 *, void *);
extern void fn_8289C128(Self_8289C1A0 *);
extern void fn_82381BC0(Node_8289C1A0 **);
extern void fn_828A13B8(Mgr_8289C1A0 *, Self_8289C1A0 *);

void fn_8289C1A0(Self_8289C1A0 *s)
{
  Node_8289C1A0 *it;
  Node_8289C1A0 *h;
  Obj_8289C1A0 *o;
  if (s->obj == 0 || s->obj->vt->m4(s->obj) == 0) {
    if (s->obj == 0 || s->obj->vt->mc(s->obj) == 0) {
      if (s->obj != 0 && s->obj->vt->m14(s->obj) != 0) {
        h = s->mgr->head;
        it = h->next;
        if (it != h) {
          do {
            fn_8289C078(s, it->val);
            fn_82381BC0(&it);
          } while (it != s->mgr->head);
        }
      }
    } else {
      fn_8289C128(s);
    }
  } else {
    h = s->mgr->head;
    it = h->next;
    if (it != h) {
      do {
        fn_8289C078(s, it->val);
        fn_82381BC0(&it);
      } while (it != s->mgr->head);
    }
  }
  fn_828A13B8(s->mgr, s);
  o = s->obj;
  s->f24 = 0;
  if (o != 0)
    o->vt->dtor(o, 1);
  s->obj = 0;
}
