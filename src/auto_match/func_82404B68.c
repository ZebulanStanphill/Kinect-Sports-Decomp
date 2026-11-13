void fn_82404B68(int *param_1,int param_2)

{
  if (param_1[0x19] != 1) {
    return;
  }
  if (*(int *)(param_2 + 0x24) == 0) {
    return;
  }
  *param_1 = *param_1 | 0x100;
  return;
}

