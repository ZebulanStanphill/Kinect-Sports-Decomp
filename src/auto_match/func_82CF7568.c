void fn_82CF7568(int param_1,int *param_2)

{
  *param_2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
  param_2[3] = *(int *)(param_1 + 8) - *(int *)(param_1 + 0xc);
  param_2[1] = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4);
  param_2[2] = *(int *)(param_1 + 0x14);
  return;
}

