void fn_8275E498(int *param_1,unsigned int *param_2)

{
  int iVar1;
  int iVar2;
  unsigned int *puVar3;
  
  iVar2 = *param_1;
  if (*(char *)(iVar2 + 0x20) == -0x7c) {
    puVar3 = param_2 + 2;
    *param_2 = *(unsigned int *)(iVar2 + 100);
    param_2[1] = *(unsigned int *)(*param_1 + 0x68);
    iVar2 = *param_1;
    *(int *)(iVar2 + 0x2c) = *(int *)(iVar2 + 100) + *(int *)(iVar2 + 0x2c);
    iVar1 = *param_1;
    iVar2 = *(int *)(iVar1 + 0x68);
  }
  else {
    puVar3 = param_2;
    if (*(char *)(iVar2 + 0x20) != -0x7b) goto LAB_8275e560;
    *param_2 = *(unsigned int *)(iVar2 + 0x5c);
    param_2[1] = *(unsigned int *)(*param_1 + 0x60);
    param_2[2] = *(unsigned int *)(*param_1 + 0x54);
    param_2[3] = *(unsigned int *)(*param_1 + 0x58);
    puVar3 = param_2 + 4;
    iVar2 = *param_1;
    *(int *)(iVar2 + 0x2c) =
         *(int *)(iVar2 + 0x5c) + *(int *)(iVar2 + 0x54) + *(int *)(iVar2 + 0x2c);
    iVar1 = *param_1;
    iVar2 = *(int *)(iVar1 + 0x60) + *(int *)(iVar1 + 0x58);
  }
  *(int *)(iVar1 + 0x30) = iVar2 + *(int *)(iVar1 + 0x30);
LAB_8275e560:
  param_2[4] = (int)puVar3 - (int)param_2 >> 2;
  param_1[1] = param_1[1] + 1;
  fn_8275D3A8(*param_1);
  return;
}
