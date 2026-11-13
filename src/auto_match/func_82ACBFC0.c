void fn_82ACBFC0(unsigned __int64 param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  
  uVar4 = 0;
  iVar3 = *(int *)(param_2 + 0x14) + *(int *)(param_2 + 0xc);
  for (uVar7 = *(unsigned int *)(*(int *)(param_2 + 4) + 4); ((uVar7 & 1) == 0 && (uVar7 != 0));
      uVar7 = *(unsigned int *)((uVar7 & 0xfffffffe) + 4)) {
    uVar4 = *(int *)(uVar7 + 8) + uVar4;
  }
  uVar7 = 0;
  if (uVar4 != 0) {
    uVar1 = *(unsigned int *)(*(int *)(param_2 + 4) + 4);
    do {
      uVar6 = -(unsigned int)((uVar1 & 1) == 0) & uVar1;
      uVar2 = *(unsigned int *)(uVar6 + 8);
      uVar5 = uVar7;
      if (uVar2 <= uVar7) {
        do {
          uVar5 = uVar5 - uVar2;
          uVar6 = *(unsigned int *)((uVar6 & 0xfffffffe) + 4);
          uVar6 = -(unsigned int)((uVar6 & 1) == 0) & uVar6;
          uVar2 = *(unsigned int *)(uVar6 + 8);
        } while (uVar2 <= uVar5);
      }
      uVar7 = uVar7 + 1;
      iVar3 = *(int *)((uVar5 + 4) * 4 + uVar6) + iVar3;
    } while (uVar7 < uVar4);
  }
  *(int *)(param_2 + 0x18) = iVar3;
  return;
}

