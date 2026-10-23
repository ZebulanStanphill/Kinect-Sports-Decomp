typedef struct Node { struct Node *left; } Node;
typedef struct Tree { int a; Node *head; int size; } Tree;
typedef struct Obj { void *p0; int p1, p2; Tree tree; } Obj;
typedef struct Owner { int pad[3]; Obj *obj; } Owner;
typedef struct It { Node *p; } It;
extern void fn_8265CA20(void *p);
extern void fn_828E3D60(Obj *p);
extern It *fn_828E4F28(It *ret, Tree *t, It first, It last);
static It begin(Tree *t) { It i; i.p = t->head->left; return i; }
static It end(Tree *t) { It i; i.p = t->head; return i; }

void fn_828E50E8(Owner *param_1)
{
  It r;
  Obj *o = param_1->obj;
  if (o != 0) {
    fn_828E4F28(&r, &o->tree, begin(&o->tree), end(&o->tree));
    fn_8265CA20(o->tree.head);
    fn_828E3D60(o);
    fn_8265CA20(o->p0);
    fn_8265CA20(o);
  }
}
