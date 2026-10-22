typedef struct Node { struct Node *next; struct Node *prev; } Node;
typedef struct List { Node *head; unsigned int size; } List;
typedef struct Iter { Node *ptr; } Iter;
extern int fn_8288C2E0(List *, void *);
extern int fn_828B22F0(List *);
extern void fn_828BDB28(List *, Iter, List *, Iter, Iter, unsigned int);

static Iter begin(List *l) { Iter i; i.ptr = l->head->next; return i; }
static Iter end(List *l) { Iter i; i.ptr = l->head; return i; }

List *fn_828CD7B8(List *param_1, List *param_2)
{
  char auStack_20[8];

  fn_8288C2E0(param_1, auStack_20);
  if (param_1 != param_2) {
    fn_828B22F0(param_1);
    if (param_2->size != 0)
      fn_828BDB28(param_1, begin(param_1), param_2, begin(param_2), end(param_2), param_2->size);
  }
  return param_1;
}
