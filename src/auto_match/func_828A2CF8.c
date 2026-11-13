extern int fn_828A2160();


void fn_828A2CF8(int param_1)

{
  fn_828A2160(param_1,*(unsigned int *)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(unsigned int *)*(unsigned int *)(param_1 + 4) = *(unsigned int *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(unsigned int *)(param_1 + 8) = 0;
  return;
}

