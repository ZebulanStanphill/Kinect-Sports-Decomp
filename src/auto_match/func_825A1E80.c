extern void fn_822315A0(int);
extern void fn_8265CA20(void *);

typedef struct Vec_825A1E80 { unsigned *begin; unsigned *end; unsigned *cap; } Vec_825A1E80;
typedef struct Node_825A1E80 { struct Node_825A1E80 *next; struct Node_825A1E80 *prev; int pad[2]; unsigned obj; } Node_825A1E80;
typedef struct Obj_825A1E80 { int pad0; Node_825A1E80 *head; int size; int pad1; Vec_825A1E80 vec; } Obj_825A1E80;

void fn_825A1E80(Obj_825A1E80 *param_1)
{
  Vec_825A1E80 *v = &param_1->vec;
  unsigned *p;
  Node_825A1E80 *n, *nx;

  if (v->begin != 0) {
    for (p = v->begin; p != v->end; p++) {
    }
    fn_8265CA20(v->begin);
  }
  v->begin = 0;
  v->end = 0;
  v->cap = 0;
  n = param_1->head->next;
  param_1->head->next = param_1->head;
  param_1->head->prev = param_1->head;
  param_1->size = 0;
  while (n != param_1->head) {
    nx = n->next;
    if (n->obj != 0) {
      fn_822315A0(n->obj);
    }
    fn_8265CA20(n);
    n = nx;
  }
  fn_8265CA20(param_1->head);
}
