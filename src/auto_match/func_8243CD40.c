typedef struct Node_8243CD40 Node_8243CD40;
struct Node_8243CD40 { Node_8243CD40 *left; Node_8243CD40 *parent; Node_8243CD40 *right; unsigned int key; unsigned int val; char color; char isnil; };
typedef struct { int pad; Node_8243CD40 *head; } Tree_8243CD40;
typedef struct { unsigned int key; unsigned int val; } Pair_8243CD40;
extern Node_8243CD40 *fn_83062700(Tree_8243CD40 *);
extern void fn_82831208(Node_8243CD40 **, Tree_8243CD40 *, Node_8243CD40 *, Node_8243CD40 *);
unsigned int *fn_8243CD40(Tree_8243CD40 *t, unsigned int *k)
{
  Node_8243CD40 *where;
  Node_8243CD40 *node;
  Node_8243CD40 *out;
  Node_8243CD40 *pn;
  Node_8243CD40 *ret;
  Pair_8243CD40 *p;
  unsigned int key;

  where = t->head;
  pn = t->head->parent;
  if (!pn->isnil) {
    do {
      if (pn->key < *k) {
        pn = pn->right;
      } else {
        where = pn;
        pn = pn->left;
      }
    } while (!pn->isnil);
  }
  ret = where;
  if (where != t->head) {
    if (*k >= where->key) goto done;
  }
  key = *k;
  node = fn_83062700(t);
  p = (Pair_8243CD40 *)&node->key;
  if (p != 0) {
    p->key = key;
    p->val = 0;
  }
  fn_82831208(&out, t, where, node);
  ret = out;
done:
  return &ret->val;
}

