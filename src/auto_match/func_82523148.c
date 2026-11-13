extern int fn_8251E400();
extern int fn_82522ED8();


void fn_82523148(unsigned int *param_1)

{
  if (*param_1 != 0) {
    *(int *)(*param_1 + 4) = param_1[1];
  }
  if ((int *)param_1[1] != (int *)0x0) {
    *(int *)param_1[1] = *param_1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  fn_8251E400(param_1 + 3);
  fn_82522ED8(param_1);
  return;
}

