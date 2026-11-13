typedef struct Val { int first; __int64 second; } Val;
typedef struct Node {
  struct Node *left;
  struct Node *parent;
  struct Node *right;
  int pad;
  Val val;
  char color;
  char isnil;
} Node;
typedef struct Tree { int alloc; Node *head; int size; } Tree;

extern Node *fn_828807A0(Tree *t);

Node *fn_828C9A30(Tree *t, Node *root, Node *where)
{
  Node *newroot;
  Node *p;
  Val *v;

  newroot = t->head;
  if (!root->isnil) {
    p = fn_828807A0(t);
    v = &p->val;
    if (v != 0) {
      v->first = root->val.first;
      v->second = root->val.second;
    }
    p->parent = where;
    p->color = root->color;
    if (newroot->isnil) {
      newroot = p;
    }
    p->left = fn_828C9A30(t, root->left, p);
    p->right = fn_828C9A30(t, root->right, p);
  }
  return newroot;
}
