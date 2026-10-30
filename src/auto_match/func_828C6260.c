typedef struct Node Node;
struct Node { int pad[1]; Node *parent; int p8[2]; Node *f10; };
extern void fn_8223C478(void *, int, void *);
extern void fn_828E9DB8(void *, int, int);
void fn_828C6260(void *param_1, Node *param_2, void *param_3, void *param_4)
{
  if (param_2->parent != 0) {
    fn_828C6260(param_1, param_2->parent, param_3, param_4);
    if (param_2 == param_2->parent->f10) {
      fn_8223C478(param_3, 1, param_4);
      fn_828E9DB8(param_3, 0, 1);
    } else {
      fn_8223C478(param_3, 1, param_4);
      fn_828E9DB8(param_3, 1, 1);
    }
  }
}
