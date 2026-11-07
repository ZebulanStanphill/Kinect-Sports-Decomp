extern void fn_8248F8E8(void *);
extern unsigned int lbl_821BEBB0;

typedef struct Val_82498078 { void *vt; } Val_82498078;
typedef struct Node_82498078 {
  struct Node_82498078 *next;
  struct Node_82498078 *prev;
  int pad8;
  Val_82498078 val;
} Node_82498078;

typedef struct {
  int *first;
  int *last;
  int *end;
} Vec_82498078;

typedef struct {
  int pad0;
  Node_82498078 *head;
  int size;
  int padC;
  Vec_82498078 vec;
} Obj_82498078;

void fn_82498078(Obj_82498078 *o)
{
  Vec_82498078 *v = &o->vec;
  Node_82498078 *n;
  Node_82498078 *next;

  if (v->first != 0) {
    int *p;
    for (p = v->first; p != v->last; p++) {
    }
    fn_8248F8E8(v->first);
  }
  v->first = 0;
  v->last = 0;
  v->end = 0;

  n = o->head->next;
  o->head->next = o->head;
  o->head->prev = o->head;
  o->size = 0;
  while (n != o->head) {
    next = n->next;
    { Val_82498078 *e = &n->val; e->vt = &lbl_821BEBB0; }
    fn_8248F8E8(n);
    n = next;
  }
  fn_8248F8E8(o->head);
}
