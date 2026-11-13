typedef unsigned char bool;
#define false 0
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CFC050();


void fn_82D07CB0(int param_1,short *param_2,unsigned __int64 param_3,int param_4,int *param_5)

{
  short sVar1;
  unsigned int uVar2;
  short sVar3;
  __int64 lVar4;
  int iVar5;
  bool bVar6;
  short *psVar7;
  __int64 lVar8;
  int iVar9;
  short *psVar10;
  __int64 lVar11;
  int iVar12;
  
  iVar12 = (int)param_3;
  sVar3 = (short)param_4;
  if (param_1 == 3) {
    iVar5 = fn_82CE5410();
    uVar2 = param_5[1];
    lVar8 = uVar2 + param_3;
    iVar9 = (int)lVar8;
    if ((int)(param_5[2] & 0x3fffffffU) < iVar9) {
      lVar11 = ((unsigned __int64)(unsigned int)param_5[2] & 0x3fffffff) << 1;
      if (iVar9 < (int)lVar11) {
        lVar8 = lVar11;
      }
      fn_82CE6310(*(unsigned int *)(iVar5 + 0x10),param_5,lVar8,2);
    }
    psVar10 = (short *)(uVar2 * 2 + *param_5);
    param_5[1] = param_5[1] + iVar12;
    if (param_4 == 0) {
      fn_82CFC050(psVar10,param_2,(param_3 & 0x7fffffff) << 1);
    }
    else if (0 < iVar12) {
      iVar12 = (int)param_2 - (int)psVar10;
      do {
        *psVar10 = *(short *)(iVar12 + (int)psVar10) + sVar3;
        psVar10 = psVar10 + 1;
        param_3 = param_3 - 1;
      } while (param_3 != 0);
    }
  }
  else if (param_1 == 4) {
    lVar11 = (param_3 - 2) + (param_3 - 2 & 0x7fffffff) * 2;
    iVar5 = fn_82CE5410();
    uVar2 = param_5[1];
    lVar8 = (unsigned __int64)uVar2 + lVar11;
    iVar9 = (int)lVar8;
    if ((int)(param_5[2] & 0x3fffffffU) < iVar9) {
      lVar4 = ((unsigned __int64)(unsigned int)param_5[2] & 0x3fffffff) << 1;
      if (iVar9 < (int)lVar4) {
        lVar8 = lVar4;
      }
      fn_82CE6310(*(unsigned int *)(iVar5 + 0x10),param_5,lVar8,2);
    }
    bVar6 = false;
    psVar10 = (short *)(uVar2 * 2 + *param_5);
    param_5[1] = param_5[1] + (int)lVar11;
    if (2 < iVar12) {
      lVar8 = param_3 - 2;
      do {
        psVar7 = param_2 + 1;
        *psVar10 = *param_2 + sVar3;
        if (bVar6) {
          psVar10[1] = param_2[2] + sVar3;
          sVar1 = *psVar7;
        }
        else {
          psVar10[1] = *psVar7 + sVar3;
          sVar1 = param_2[2];
        }
        bVar6 = (bool)(bVar6 ^ 1);
        psVar10[2] = sVar1 + sVar3;
        psVar10 = psVar10 + 3;
        lVar8 = lVar8 + -1;
        param_2 = psVar7;
      } while (lVar8 != 0);
    }
  }
  return;
}

