extern int fn_8294B508();
extern int fn_82996970();
extern int fn_8299A220();


__int64 fn_8299BBC8(int param_1)

{
  unsigned int *puVar1;
  int *piVar2;
  __int64 lVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned int uVar7;
  unsigned __int64 uVar6;
  int iVar8;
  
  lVar3 = fn_8299A220(param_1,*(unsigned int *)(param_1 + 0x18),*(unsigned int *)(param_1 + 0xc));
  if (-1 < lVar3) {
    uVar5 = 0;
    uVar7 = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      iVar8 = 0;
      do {
        uVar5 = uVar5 + 1;
        *(unsigned int *)(*(int *)(*(int *)(param_1 + 0x18) + iVar8) + 0x28) = 0;
        piVar2 = (int *)(*(int *)(param_1 + 0x18) + iVar8);
        iVar8 = iVar8 + 4;
        *(unsigned int *)(*piVar2 + 0x24) = 0;
        uVar7 = *(unsigned int *)(param_1 + 0xc);
      } while (uVar5 < uVar7);
    }
    uVar5 = 0;
    if (uVar7 != 0) {
      iVar8 = 0;
      do {
        puVar1 = *(unsigned int **)(iVar8 + *(int *)(param_1 + 0x18));
        uVar6 = (unsigned __int64)*puVar1 & 0xfff00000;
        iVar4 = fn_82996970(uVar6);
        if ((iVar4 != 0) || ((uVar6 & 0xffffffff) == 0x11000000)) {
          uVar7 = puVar1[9];
          fn_8294B508(param_1);
          puVar1[9] = uVar7;
        }
        uVar5 = uVar5 + 1;
        iVar8 = iVar8 + 4;
      } while (uVar5 < *(unsigned int *)(param_1 + 0xc));
    }
  }
  return lVar3;
}

