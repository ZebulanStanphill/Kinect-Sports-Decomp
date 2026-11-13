extern int fn_8284B4A8();
extern unsigned int iStack00000014;


void fn_8284B810(int param_1)

{
  int iStack00000014;
  
  iStack00000014 = param_1;
  fn_8284B4A8(param_1,*(unsigned int *)(*(int *)(param_1 + 4) + 4));
  *(unsigned int *)(*(int *)(iStack00000014 + 4) + 4) = *(unsigned int *)(iStack00000014 + 4);
  **(unsigned int **)(iStack00000014 + 4) = *(unsigned int *)(iStack00000014 + 4);
  *(unsigned int *)(*(int *)(iStack00000014 + 4) + 8) = *(unsigned int *)(iStack00000014 + 4);
  *(unsigned int *)(iStack00000014 + 8) = 0;
  return;
}

