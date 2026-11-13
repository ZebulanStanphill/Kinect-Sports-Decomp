extern int fn_82966400();


unsigned __int64 fn_8296BCB0(int param_1,unsigned int *param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  int iVar6;
  __int64 lVar7;
  __int64 lVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  
  uVar10 = 0;
  uVar4 = (unsigned __int64)*param_2 & 0xfffff;
  uVar9 = param_2[1] / uVar4;
  trapWord(6,uVar4,0);
  if ((int)uVar9 != 0) {
    uVar1 = param_2[2];
    lVar5 = ((unsigned __int64)*param_2 & 0xfffff) * 4;
    iVar2 = *(int *)(param_1 + 0x14);
    lVar7 = (param_4 & 0x3fffffff) << 2;
    iVar3 = *(int *)(param_1 + 0x10);
    lVar8 = (param_3 & 0x3fffffff) << 2;
    do {
      if ((((*(unsigned int *)(*(int *)(*(int *)(*(int *)(*(int *)((int)lVar8 + uVar1) * 4 + iVar2) + 4) * 4
                               + iVar3) + 4) & 0x40) != 0) &&
          ((*(unsigned int *)(*(int *)(*(int *)(*(int *)(*(int *)((int)lVar7 + uVar1) * 4 + iVar2) + 4) * 4
                              + iVar3) + 4) & 0x40) != 0)) &&
         (iVar6 = fn_82966400(param_1), iVar6 == 0)) {
        return 1;
      }
      uVar10 = uVar10 + 1;
      lVar8 = lVar5 + lVar8;
      lVar7 = lVar5 + lVar7;
    } while ((uVar10 & 0xffffffff) < uVar9);
  }
  return 0;
}

