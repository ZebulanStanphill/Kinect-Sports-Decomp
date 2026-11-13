extern unsigned int lbl_82057B9C;
extern unsigned int lbl_82057BC8;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_832187F4;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double fn_829E5AB0(int param_1,int param_2,int param_3)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  unsigned __int64 uVar7;
  int iVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  __int64 lVar11;
  
  fVar1 = lbl_82057BC8;
  if (param_3 == *(int *)(param_1 + 0x34) * *(int *)(param_1 + 0x30)) {
    lVar11 = 3;
    uVar9 = (((unsigned __int64)*(unsigned int *)(param_1 + 0x14) - (unsigned __int64)*(unsigned int *)(param_1 + 0xc)) + 1 &
            0xffffffff) / 3;
    uVar7 = (((unsigned __int64)*(unsigned int *)(param_1 + 0x18) - (unsigned __int64)*(unsigned int *)(param_1 + 0x10)) + 1 &
            0xffffffff) / 3;
    iVar8 = (int)uVar7;
    iVar4 = *(int *)(param_1 + 0x30) + 1;
    lVar6 = 0;
    pfVar3 = (float *)&lbl_82057B9C;
    fVar1 = lbl_821AAD20;
    do {
      iVar2 = (int)lVar6;
      pfVar3 = pfVar3 + 3;
      lVar6 = lVar6 + uVar7;
      uVar5 = (__int64)(int)(iVar2 + *(unsigned int *)(param_1 + 0x10)) * (__int64)iVar4 +
              (unsigned __int64)*(unsigned int *)(param_1 + 0xc) + uVar9;
      uVar10 = (__int64)iVar4 * (__int64)iVar8 + uVar5;
      fVar1 = (((*(float *)((int)((uVar10 + uVar9 & 0xffffffff) << 3) + param_2) -
                *(float *)((int)((uVar10 & 0xffffffff) << 3) + param_2)) -
               *(float *)((int)((uVar5 + uVar9 & 0xffffffff) << 3) + param_2)) +
              *(float *)((int)((uVar5 & 0xffffffff) << 3) + param_2)) * *pfVar3 *
              (lbl_82057B9C / (float)(unsigned int)(iVar8 * (int)uVar9)) + fVar1;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    fVar1 = fVar1 / lbl_832187F4;
  }
  return (double)fVar1;
}

