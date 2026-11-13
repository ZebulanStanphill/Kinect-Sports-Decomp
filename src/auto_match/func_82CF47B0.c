extern int fn_82CE5410();
extern int fn_82CE6310();


void fn_82CF47B0(unsigned int *param_1,__int64 param_2,__int64 param_3)

{
  int *piVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  unsigned __int64 uVar6;
  __int64 lVar7;
  unsigned int *puVar8;
  unsigned __int64 uVar9;
  unsigned int uVar10;
  __int64 lVar11;
  
  uVar9 = param_2 + param_3;
  iVar4 = fn_82CE5410();
  uVar10 = (unsigned int)uVar9;
  if ((int)(param_1[2] & 0x3fffffff) < (int)uVar10) {
    uVar6 = ((unsigned __int64)param_1[2] & 0x3fffffff) << 1;
    if ((int)uVar6 <= (int)uVar10) {
      uVar6 = uVar9;
    }
    fn_82CE6310(*(unsigned int *)(iVar4 + 0x10),param_1,uVar6,0xc);
  }
  lVar7 = param_1[1] - uVar9;
  if (0 < lVar7) {
    lVar11 = (uVar9 + (uVar9 & 0x7fffffff) * 2 & 0x3fffffff) * 4 + (unsigned __int64)*param_1 + -4;
    do {
      iVar5 = fn_82CE5410();
      iVar4 = (int)lVar11;
      piVar1 = *(int **)(iVar5 + 0x10);
      *(unsigned int *)(iVar4 + 8) = 0;
      if ((*(unsigned int *)(iVar4 + 0xc) & 0x80000000) == 0) {
        (**(int (***)())(*piVar1 + 0x10))
                  (piVar1,*(unsigned int *)(iVar4 + 4),*(unsigned int *)(iVar4 + 0xc) & 0x3fffffff,0x24);
      }
      *(unsigned int *)(iVar4 + 4) = 0;
      lVar7 = lVar7 + -1;
      lVar11 = lVar11 + 0xc;
      *(unsigned int *)lVar11 = 0x80000000;
    } while (lVar7 != 0);
  }
  uVar2 = param_1[1];
  lVar7 = uVar9 - uVar2;
  uVar9 = ((unsigned __int64)uVar2 + ((unsigned __int64)uVar2 & 0x7fffffff) * 2 & 0x3fffffff) * 4 +
          (unsigned __int64)*param_1;
  if (0 < lVar7) {
    do {
      if ((uVar9 & 0xffffffff) != 0) {
        puVar8 = (unsigned int *)uVar9;
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8[2] = 0x80000000;
      }
      uVar9 = uVar9 + 0xc;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  param_1[1] = uVar10;
  iVar4 = 0;
  param_1[7] = (unsigned int)param_3;
  param_1[6] = (unsigned int)param_2;
  param_1[4] = 0;
  if (0 < (int)uVar10) {
    iVar5 = 0;
    do {
      iVar4 = iVar4 + 1;
      iVar3 = iVar5 + *param_1;
      iVar5 = iVar5 + 0xc;
      *(unsigned int *)(iVar3 + 4) = 0;
    } while (iVar4 < (int)param_1[1]);
  }
  return;
}

