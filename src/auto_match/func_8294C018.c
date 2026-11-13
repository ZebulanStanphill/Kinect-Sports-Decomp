void fn_8294C018(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned __int64 uVar4;
  int iVar5;
  unsigned __int64 uVar6;
  __int64 lVar7;
  
  uVar1 = *param_1;
  uVar4 = (unsigned __int64)uVar1 & 0xfffff;
  uVar6 = param_1[1] / uVar4;
  trapWord(6,uVar4,0);
  if ((int)uVar6 != 0) {
    lVar7 = (param_2 & 0x3fffffff) << 2;
    do {
      iVar5 = (int)lVar7;
      puVar3 = (unsigned int *)(param_1[2] + iVar5);
      uVar2 = *puVar3;
      *puVar3 = puVar3[1];
      lVar7 = ((unsigned __int64)uVar1 & 0xfffff) * 4 + lVar7;
      *(unsigned int *)(param_1[2] + iVar5 + 4) = uVar2;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  iVar5 = (int)((param_2 & 0x3fffffff) << 2);
  puVar3 = (unsigned int *)(param_1[4] + iVar5);
  uVar2 = *puVar3;
  *puVar3 = puVar3[1];
  *(unsigned int *)(param_1[4] + iVar5 + 4) = uVar2;
  return;
}

