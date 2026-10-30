typedef struct Pair_83062A80 { int first; int second; } Pair_83062A80;
typedef struct Node_83062A80 { int f0; int f4; int f8; Pair_83062A80 val; } Node_83062A80;
extern Node_83062A80 *fn_83062700();
extern void fn_83062810();

void *fn_83062A80(void *ret, void *tree, Pair_83062A80 *v)
{
  Node_83062A80 *n = fn_83062700(tree);
  Pair_83062A80 *p = &n->val;
  if (p != 0) {
    *p = *v;
  }
  fn_83062810(ret, tree, n, 0);
  return ret;
}
