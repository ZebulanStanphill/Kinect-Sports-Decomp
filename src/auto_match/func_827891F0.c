void fn_827891F0(unsigned int *param_1)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  int iVar6;
  unsigned int uVar7;
  unsigned __int64 uVar8;
  
  uVar7 = 0;
  uVar8 = (unsigned __int64)*param_1 - 1;
  if ((__int64)uVar8 < 1) {
    return;
  }
  do {
    uVar4 = uVar7 >> 4;
    uVar5 = (unsigned int)((uVar8 & 0xffffffff) << 2) & 0xfc;
    iVar6 = (uVar7 & 0x3f) * 4;
    uVar7 = uVar7 + 1;
    iVar1 = *(int *)(((unsigned int)uVar8 >> 4 & 0xffffffc) + param_1[3]);
    uVar8 = uVar8 - 1;
    iVar2 = *(int *)((uVar4 & 0xffffffc) + param_1[3]);
    uVar3 = *(unsigned int *)(iVar2 + iVar6);
    *(unsigned int *)(iVar2 + iVar6) = *(unsigned int *)(iVar1 + uVar5);
    *(unsigned int *)(iVar1 + uVar5) = uVar3;
  } while ((int)uVar7 < (int)uVar8);
  return;
}

