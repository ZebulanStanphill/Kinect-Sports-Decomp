typedef struct Node_828C4410 Node_828C4410;
typedef struct { int pad[2]; unsigned char (*isnil)(Node_828C4410 *); } VT_828C4410;
struct Node_828C4410 { VT_828C4410 *vt; int pad[3]; Node_828C4410 *left; Node_828C4410 *right; };
typedef struct { int pad; Node_828C4410 *nil; } Tree_828C4410;

extern int fn_8223C610(void *, int, char *, int);

Node_828C4410 *fn_828C4410(Tree_828C4410 *param_1, Node_828C4410 *node, void *param_3)
{
  unsigned char nil;
  unsigned char dir;
  char bit;
  int n;

  nil = node->vt->isnil(node);
  while (nil == 0) {
    n = fn_8223C610(param_3, 1, &bit, 1);
    dir = (n == 0);
    if (bit == 0) {
      return param_1->nil;
    }
    if (dir != 0) {
      node = node->left;
    } else {
      node = node->right;
    }
    nil = node->vt->isnil(node);
  }
  return node;
}
