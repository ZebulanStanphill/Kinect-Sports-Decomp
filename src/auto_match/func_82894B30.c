extern int fn_82893530();


void fn_82894B30(int param_1)

{
  fn_82893530(param_1,*(unsigned int *)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(unsigned int *)*(unsigned int *)(param_1 + 4) = *(unsigned int *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(unsigned int *)(param_1 + 8) = 0;
  return;
}

