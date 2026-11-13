typedef unsigned char bool;
#define false 0
extern int fn_82CE5410();
extern int fn_82CE6310();


void fn_82D07B30(int param_1,__int64 param_2,short param_3,int *param_4)

{
  unsigned int uVar1;
  __int64 lVar2;
  int iVar3;
  bool bVar4;
  short sVar5;
  __int64 lVar6;
  int iVar7;
  short *psVar8;
  short sVar9;
  __int64 lVar10;
  int iVar11;
  
  iVar11 = (int)param_2;
  if (param_1 == 3) {
    iVar3 = fn_82CE5410();
    uVar1 = param_4[1];
    lVar6 = (unsigned __int64)uVar1 + param_2;
    iVar7 = (int)lVar6;
    if ((int)(param_4[2] & 0x3fffffffU) < iVar7) {
      lVar10 = ((unsigned __int64)(unsigned int)param_4[2] & 0x3fffffff) << 1;
      if (iVar7 < (int)lVar10) {
        lVar6 = lVar10;
      }
      fn_82CE6310(*(unsigned int *)(iVar3 + 0x10),param_4,lVar6,2);
    }
    sVar9 = 0;
    param_4[1] = param_4[1] + iVar11;
    if (0 < iVar11) {
      psVar8 = (short *)(uVar1 * 2 + *param_4 + -2);
      do {
        sVar5 = sVar9 + param_3;
        sVar9 = sVar9 + 1;
        psVar8 = psVar8 + 1;
        *psVar8 = sVar5;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
  }
  else if (param_1 == 4) {
    lVar10 = (param_2 - 2U) + (param_2 - 2U & 0x7fffffff) * 2;
    iVar3 = fn_82CE5410();
    uVar1 = param_4[1];
    lVar6 = (unsigned __int64)uVar1 + lVar10;
    iVar7 = (int)lVar6;
    if ((int)(param_4[2] & 0x3fffffffU) < iVar7) {
      lVar2 = ((unsigned __int64)(unsigned int)param_4[2] & 0x3fffffff) << 1;
      if (iVar7 < (int)lVar2) {
        lVar6 = lVar2;
      }
      fn_82CE6310(*(unsigned int *)(iVar3 + 0x10),param_4,lVar6,2);
    }
    bVar4 = false;
    psVar8 = (short *)(uVar1 * 2 + *param_4);
    param_4[1] = param_4[1] + (int)lVar10;
    if (2 < iVar11) {
      param_2 = param_2 + -2;
      param_3 = param_3 + 2;
      do {
        *psVar8 = param_3 + -2;
        if (bVar4) {
          psVar8[1] = param_3;
          psVar8[2] = param_3 + -1;
        }
        else {
          psVar8[1] = param_3 + -1;
          psVar8[2] = param_3;
        }
        psVar8 = psVar8 + 3;
        bVar4 = (bool)(bVar4 ^ 1);
        param_3 = param_3 + 1;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
  }
  return;
}

