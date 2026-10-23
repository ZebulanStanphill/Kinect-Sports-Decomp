typedef struct Node { struct Node *left; } Node;
typedef struct Tree { int a; Node *head; int size; } Tree;
typedef struct Obj { void *p0; int p1, p2; Tree tree; } Obj;
typedef struct It { Node *p; } It;
extern void fn_8265CA20(void *p);
extern void fn_828E3D60(Obj *p);
extern It *fn_828E4F28(It *ret, Tree *t, It first, It last);
static It begin(Tree *t) { It i; i.p = t->head->left; return i; }
static It end(Tree *t) { It i; i.p = t->head; return i; }

void fn_828E5080(Obj *param_1)
{
  It r;
  if (param_1 != 0) {
    fn_828E4F28(&r, &param_1->tree, begin(&param_1->tree), end(&param_1->tree));
    fn_8265CA20(param_1->tree.head);
    fn_828E3D60(param_1);
    fn_8265CA20(param_1->p0);
    fn_8265CA20(param_1);
  }
}
