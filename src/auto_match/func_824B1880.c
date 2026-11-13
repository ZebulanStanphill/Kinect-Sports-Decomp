void fn_824B1880(int *param_1,unsigned __int64 *param_2)

{
  unsigned __int64 *puVar1;
  int iVar2;
  
  if (param_1[1] - *param_1 >> 5 != param_1[4]) {
    puVar1 = (unsigned __int64 *)param_1[3];
    if (puVar1 != (unsigned __int64 *)0x0) {
      *puVar1 = *param_2;
      puVar1[1] = param_2[1];
      puVar1[2] = param_2[2];
      puVar1[3] = param_2[3];
    }
    iVar2 = param_1[3];
    param_1[3] = iVar2 + 0x20;
    if (iVar2 + 0x20 == param_1[1]) {
      param_1[3] = *param_1;
    }
    param_1[4] = param_1[4] + 1;
    return;
  }
  if (param_1[4] == 0) {
    return;
  }
  puVar1 = (unsigned __int64 *)param_1[3];
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  puVar1[2] = param_2[2];
  puVar1[3] = param_2[3];
  iVar2 = param_1[3];
  param_1[3] = iVar2 + 0x20;
  if (iVar2 + 0x20 == param_1[1]) {
    param_1[3] = *param_1;
  }
  param_1[2] = param_1[3];
  return;
}

