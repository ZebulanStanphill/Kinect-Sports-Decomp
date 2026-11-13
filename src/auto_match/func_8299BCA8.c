extern int fn_82996970();


unsigned __int64 fn_8299BCA8(__int64 param_1)

{
  int iVar1;
  int iVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar6;
  __int64 lVar7;
  unsigned __int64 uVar8;
  unsigned int uVar5;
  
  iVar1 = (int)param_1;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  if (*(int *)(iVar1 + 0xc) != 0) {
    lVar7 = 0;
    lVar3 = param_1 + 0x450;
    do {
      uVar8 = (unsigned __int64)**(unsigned int **)(*(int *)((int)param_1 + 0x18) + (int)lVar7) & 0xfff00000;
      iVar2 = fn_82996970(uVar8);
      iVar1 = (int)param_1;
      if (((iVar2 != 0) || ((uVar8 & 0xffffffff) == 0x72100000)) ||
         ((uVar8 & 0xffffffff) == 0x11000000)) {
        if (0xb < (uVar4 & 0xffffffff)) {
          return 0xffffffffffffffff;
        }
        lVar3 = lVar3 + 4;
        *(unsigned int *)lVar3 = (int)uVar6;
        uVar4 = uVar4 + 1;
      }
      uVar5 = (unsigned int)uVar4;
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 4;
    } while ((uVar6 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(iVar1 + 0xc));
  }
  *(unsigned int *)(iVar1 + 0x484) = uVar5;
  return (unsigned __int64)(unsigned int)(1 << (uVar5 & 0x3f));
}

