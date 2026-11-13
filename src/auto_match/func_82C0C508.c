typedef struct { int pad[0xb]; int *p; } Obj_82C0C508;
int fn_82C0C508(Obj_82C0C508 *param_1, int *param_2)
{
  if (param_2 != 0) {
    (*(int (**)())(*param_2 + 4))(param_2);
  }
  if (param_1->p != 0) {
    (*(int (**)())(*param_1->p + 8))(param_1->p);
    param_1->p = 0;
  }
  param_1->p = param_2;
  return 0;
}
