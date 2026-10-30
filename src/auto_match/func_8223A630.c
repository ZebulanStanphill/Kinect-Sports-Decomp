extern int fn_82237E90();
extern int fn_82237EF8();

typedef struct Node_8223A630 { struct Node_8223A630 *parent; struct Node_8223A630 *left; struct Node_8223A630 *right; int color; } Node_8223A630;

void fn_8223A630(Node_8223A630 **param_1, Node_8223A630 *param_2)
{
  Node_8223A630 *piVar1;
  Node_8223A630 *piVar2;
  Node_8223A630 *iVar3;

  param_2->color = 0;
  while (param_2 != *param_1) {
    piVar1 = param_2->parent;
    if (piVar1->color != 0) break;
    piVar2 = piVar1->parent;
    if (piVar2->left == piVar1) {
      iVar3 = piVar2->right;
      if ((iVar3 != 0) && (iVar3->color == 0)) {
        piVar1->color = 1;
        piVar2->color = 0;
        iVar3->color = 1;
        param_2 = piVar2;
      }
      else {
        if (piVar1->left != param_2) {
          param_2 = piVar1;
          fn_82237E90(piVar1, param_1);
        }
        iVar3 = param_2->parent->parent;
        param_2->parent->color = 1;
        iVar3->color = 0;
        fn_82237EF8(iVar3, param_1);
      }
    }
    else {
      iVar3 = piVar1->parent->left;
      if ((iVar3 != 0) && (iVar3->color == 0)) {
        piVar1->color = 1;
        piVar2->color = 0;
        iVar3->color = 1;
        param_2 = piVar2;
        continue;
      }
      if (piVar1->left == param_2) {
        param_2 = piVar1;
        fn_82237EF8(piVar1, param_1);
      }
      iVar3 = param_2->parent->parent;
      param_2->parent->color = 1;
      iVar3->color = 0;
      fn_82237E90(iVar3, param_1);
    }
  }
  (*param_1)->color = 1;
}
