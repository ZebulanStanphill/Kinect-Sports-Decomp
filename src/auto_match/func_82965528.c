unsigned int fn_82965528(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  
  if (param_5 == 0) {
    uVar3 = *(unsigned int *)((*(int *)(param_2 + 0xc) * param_3 + param_4) * 4 + *(int *)(param_2 + 8));
  }
  else {
    uVar3 = *(unsigned int *)(param_4 * 4 + *(int *)(param_2 + 8));
    uVar1 = *(unsigned int *)((*(int *)(param_2 + 0xc) + param_4) * 4 + *(int *)(param_2 + 8));
    if (param_3 == 0) {
      if (uVar3 <= uVar1) goto code_r0x82965584;
    }
    else if (uVar1 < uVar3) goto code_r0x82965584;
    uVar3 = uVar1;
  }
code_r0x82965584:
  iVar2 = *(int *)(uVar3 * 4 + *(int *)(param_1 + 0x14));
  while (uVar1 = *(unsigned int *)(iVar2 + 0x30), uVar3 != uVar1) {
    uVar3 = uVar1;
    iVar2 = *(int *)(uVar1 * 4 + *(int *)(param_1 + 0x14));
  }
  return uVar3;
}

