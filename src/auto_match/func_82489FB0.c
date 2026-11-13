extern int fn_82489AA0();
extern int fn_82A1DAA8();


unsigned __int64 fn_82489FB0(int param_1,unsigned __int64 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  unsigned int uVar6;
  
  piVar1 = *(int **)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0xc);
  iVar5 = piVar1[5];
  if (iVar2 <= piVar1[5]) {
    iVar5 = iVar2;
  }
  piVar1[5] = iVar5;
  iVar5 = piVar1[6];
  if (piVar1[6] < iVar2) {
    iVar5 = iVar2;
  }
  iVar3 = *piVar1;
  piVar1[6] = iVar5;
  uVar6 = 0;
  if (piVar1[1] - iVar3 >> 2 != 0) {
    iVar5 = 0;
    do {
      iVar4 = *(int *)(*(int *)(iVar5 + iVar3) + 4);
      if ((iVar4 == 0) || (iVar4 == 3)) {
        iVar5 = *(int *)(uVar6 * 4 + iVar3);
        fn_82A1DAA8(*(unsigned int *)(iVar5 + 8),param_2,*(unsigned int *)(iVar5 + 0x10));
        *(int *)(iVar5 + 0x14) = iVar2;
        fn_82489AA0(iVar5,1);
        return 1;
      }
      uVar6 = uVar6 + 1;
      iVar5 = iVar5 + 4;
    } while (uVar6 < (unsigned int)(piVar1[1] - *piVar1 >> 2));
  }
  return 0;
}

