int fn_82D2C0B8(int param_1,int *param_2)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  unsigned int uVar5;
  int iVar6;
  unsigned __int64 uVar7;
  int *piVar8;
  int *piVar9;
  
  iVar1 = *param_2;
  if ((iVar1 != 0) && (piVar9 = *(int **)(param_1 + 0x24c), piVar9 != (int *)0x0)) {
    uVar7 = (unsigned __int64)(unsigned int)param_2[1];
    uVar2 = piVar9[1];
    iVar3 = *(int *)((int)((uVar7 + 2 & 0xffffffff) << 2) + iVar1);
    iVar4 = *(int *)((int)(((-(unsigned __int64)(uVar7 != 2) & uVar7 + 1) + 2 & 0xffffffff) << 2) + iVar1);
    iVar6 = 0;
    trapWord(6,(unsigned __int64)uVar2,0);
    uVar5 = *(int *)(iVar3 + 0xc) * 0x3442a5 + *(int *)(iVar3 + 8) * 0x21528000 ^
            *(int *)(iVar4 + 0xc) * 0x1958e9 + *(int *)(iVar4 + 8) * -0x538b8000;
    piVar9 = (int *)((uVar5 - (uVar5 / uVar2) * uVar2) * 0xc + *piVar9);
    iVar1 = piVar9[1];
    if (0 < iVar1) {
      piVar9 = (int *)*piVar9;
      piVar8 = piVar9;
      do {
        if ((*piVar8 == iVar3) && (piVar8[1] == iVar4)) {
          if (iVar6 == -1) {
            return 0;
          }
          piVar9 = piVar9 + iVar6 * 3;
          if (piVar9 == (int *)0x0) {
            return 0;
          }
          return piVar9[2];
        }
        iVar6 = iVar6 + 1;
        piVar8 = piVar8 + 3;
      } while (iVar6 < iVar1);
    }
  }
  return 0;
}

