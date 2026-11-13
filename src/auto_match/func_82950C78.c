extern int fn_82F68CC0();


unsigned __int64 fn_82950C78(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  int iVar7;
  int iVar8;
  
  uVar6 = 0;
  uVar1 = **(unsigned int **)(param_1 + 0x104);
  uVar5 = uVar1 & 0xfffff;
  if ((uVar1 & 0xfffff) != 0) {
    iVar8 = 0;
    iVar7 = (uVar1 & 0xfffff) << 2;
    iVar2 = *(int *)(*(int *)(param_1 + 0x104) + 8);
    do {
      iVar3 = *(int *)(*(int *)(iVar8 + iVar2) * 4 + *(int *)(param_1 + 0x14));
      iVar4 = *(int *)(*(int *)(iVar7 + iVar2) * 4 + *(int *)(param_1 + 0x14));
      if ((((*(int *)(iVar3 + 4) != *(int *)(iVar4 + 4)) ||
           (*(int *)(iVar3 + 8) != *(int *)(iVar4 + 8))) ||
          (*(int *)(iVar3 + 0xc) != *(int *)(iVar4 + 0xc))) ||
         ((*(int *)(iVar3 + 0x10) != *(int *)(iVar4 + 0x10) ||
          ((*(unsigned int *)(iVar4 + 0x3c) ^ *(unsigned int *)(iVar3 + 0x3c)) != 0x80000)))) {
        return 1;
      }
      uVar6 = uVar6 + 1;
      iVar8 = iVar8 + 4;
      iVar7 = iVar7 + 4;
    } while (uVar6 < uVar5);
  }
  **(unsigned int **)(param_1 + 0x104) = uVar5 | 0x70000000;
  *(unsigned int *)(*(int *)(param_1 + 0x104) + 4) = uVar5;
  if (((uVar1 & 0xfffff) != 0) &&
     ((*(unsigned int *)(*(int *)(**(int **)(*(int *)(param_1 + 0x104) + 8) * 4 + *(int *)(param_1 + 0x14))
                + 0x3c) & 0x80000) != 0)) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x104) + 8);
    fn_82F68CC0(iVar2,iVar2 + (uVar1 & 0xfffff) * 4);
  }
  return 0;
}

