extern int fn_82D2BEE8();


unsigned int * fn_82D2D830(unsigned int *param_1,int param_2)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  
  if (param_1[1] != 0) {
    iVar4 = *(int *)*param_1;
    if (*(int *)(iVar4 + 0x280) != 0) goto LAB_82d2d874;
  }
  iVar4 = fn_82D2BEE8(param_1);
LAB_82d2d874:
  puVar1 = *(unsigned int **)(iVar4 + 0x280);
  uVar2 = *puVar1;
  *(int *)(iVar4 + 0x284) = *(int *)(iVar4 + 0x284) + 1;
  *(unsigned int *)(iVar4 + 0x280) = uVar2;
  puVar1[2] = *(unsigned int *)(param_2 + 8);
  puVar1[3] = *(unsigned int *)(param_2 + 0xc);
  uVar3 = *(unsigned int *)(param_2 + 0x10) & 0x80000000;
  puVar1[4] = uVar3 | puVar1[4] & 0x7fffffff;
  puVar1[4] = *(unsigned int *)(param_2 + 0x10) & 0x7fffffff | uVar3;
  puVar1[1] = 0;
  *puVar1 = param_1[3];
  if (param_1[3] != 0) {
    *(unsigned int **)(param_1[3] + 4) = puVar1;
  }
  param_1[3] = puVar1;
  param_1[4] = param_1[4] + 1;
  return puVar1;
}

