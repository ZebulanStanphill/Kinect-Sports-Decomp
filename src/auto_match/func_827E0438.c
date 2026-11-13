void fn_827E0438(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(param_3 * 8 + *(int *)(param_1 + 0x44));
  if ((int *)piVar1[1] != param_2) {
    if ((int *)*piVar1 != param_2) {
      return;
    }
    *piVar1 = *param_2;
    return;
  }
  if ((int *)*piVar1 == param_2) {
    *piVar1 = *(int *)(param_1 + 4);
    *(unsigned int *)(param_3 * 8 + *(int *)(param_1 + 0x44) + 4) = *(unsigned int *)(param_1 + 4);
    return;
  }
  piVar1[1] = param_2[1];
  return;
}

