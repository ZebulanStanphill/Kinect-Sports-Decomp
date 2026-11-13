typedef unsigned char bool;
#define false 0
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CFC050();


void fn_82D07980(int param_1,int *param_2,unsigned __int64 param_3,int param_4,int *param_5)

{
  unsigned int uVar1;
  __int64 lVar2;
  int iVar3;
  bool bVar4;
  int *piVar5;
  __int64 lVar6;
  int iVar7;
  int *piVar8;
  __int64 lVar9;
  int iVar10;
  
  iVar10 = (int)param_3;
  if (param_1 == 3) {
    iVar3 = fn_82CE5410();
    uVar1 = param_5[1];
    lVar6 = uVar1 + param_3;
    iVar7 = (int)lVar6;
    if ((int)(param_5[2] & 0x3fffffffU) < iVar7) {
      lVar9 = ((unsigned __int64)(unsigned int)param_5[2] & 0x3fffffff) << 1;
      if (iVar7 < (int)lVar9) {
        lVar6 = lVar9;
      }
      fn_82CE6310(*(unsigned int *)(iVar3 + 0x10),param_5,lVar6,4);
    }
    piVar8 = (int *)(uVar1 * 4 + *param_5);
    param_5[1] = param_5[1] + iVar10;
    if (param_4 == 0) {
      fn_82CFC050(piVar8,param_2,(param_3 & 0x3fffffff) << 2);
    }
    else if (0 < iVar10) {
      iVar10 = (int)param_2 - (int)piVar8;
      do {
        *piVar8 = *(int *)(iVar10 + (int)piVar8) + param_4;
        piVar8 = piVar8 + 1;
        param_3 = param_3 - 1;
      } while (param_3 != 0);
    }
  }
  else if (param_1 == 4) {
    lVar9 = (param_3 - 2) + (param_3 - 2 & 0x7fffffff) * 2;
    iVar3 = fn_82CE5410();
    uVar1 = param_5[1];
    lVar6 = (unsigned __int64)uVar1 + lVar9;
    iVar7 = (int)lVar6;
    if ((int)(param_5[2] & 0x3fffffffU) < iVar7) {
      lVar2 = ((unsigned __int64)(unsigned int)param_5[2] & 0x3fffffff) << 1;
      if (iVar7 < (int)lVar2) {
        lVar6 = lVar2;
      }
      fn_82CE6310(*(unsigned int *)(iVar3 + 0x10),param_5,lVar6,4);
    }
    bVar4 = false;
    piVar8 = (int *)(uVar1 * 4 + *param_5);
    param_5[1] = param_5[1] + (int)lVar9;
    if (2 < iVar10) {
      lVar6 = param_3 - 2;
      do {
        piVar5 = param_2 + 1;
        *piVar8 = *param_2 + param_4;
        if (bVar4) {
          piVar8[1] = param_2[2] + param_4;
          iVar10 = *piVar5;
        }
        else {
          piVar8[1] = *piVar5 + param_4;
          iVar10 = param_2[2];
        }
        bVar4 = (bool)(bVar4 ^ 1);
        piVar8[2] = iVar10 + param_4;
        piVar8 = piVar8 + 3;
        lVar6 = lVar6 + -1;
        param_2 = piVar5;
      } while (lVar6 != 0);
    }
  }
  return;
}

