extern void fn_8265CA20(void *);
extern void fn_8287D8B8(void *);

typedef struct Vec_8287F5A0 {
  void *first;
  void *last;
  void *end;
} Vec_8287F5A0;

typedef struct Val_8287F5A0 {
  char pad0[0x10];
  Vec_8287F5A0 v1;
  char pad1c[0xc];
  char sub[0xa4];
  Vec_8287F5A0 v2;
} Val_8287F5A0;

typedef struct Node_8287F5A0 {
  struct Node_8287F5A0 *left;
  struct Node_8287F5A0 *parent;
  struct Node_8287F5A0 *right;
  char pad0c[0xc];
  Val_8287F5A0 value;
  char pad[0x101 - 0x18 - sizeof(Val_8287F5A0)];
  char isnil;
} Node_8287F5A0;

void fn_8287F5A0(void *param_1, Node_8287F5A0 *root)
{
  Node_8287F5A0 *cur;
  Val_8287F5A0 *v;

  for (cur = root; !cur->isnil; root = cur) {
    fn_8287F5A0(param_1, cur->right);
    cur = cur->left;
    v = &root->value;
    if (v->v2.first != 0) fn_8265CA20(v->v2.first);
    v->v2.first = 0;
    v->v2.last = 0;
    v->v2.end = 0;
    fn_8287D8B8(v->sub);
    if (v->v1.first != 0) fn_8265CA20(v->v1.first);
    v->v1.first = 0;
    v->v1.last = 0;
    v->v1.end = 0;
    fn_8265CA20(root);
  }
}
