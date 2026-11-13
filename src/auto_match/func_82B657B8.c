extern int fn_8265C9E0();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;


void fn_82B657B8(unsigned __int64 param_1,unsigned __int64 param_2,int param_3)

{
  float fVar1;
  unsigned __int64 uVar2;
  float fVar3;
  float fVar4;
  __int64 lVar5;
  int iVar6;
  unsigned int uVar7;
  float *pfVar8;
  float fVar9;
  
  lVar5 = (param_2 & 0xfffffff) << 4;
  if (0xfffffff < (unsigned int)param_2) {
    lVar5 = -1;
  }
  iVar6 = fn_8265C9E0(lVar5);
  fVar4 = lbl_82002C5C;
  fVar3 = lbl_82002AE0;
  if (iVar6 != 0) {
    uVar2 = param_2 & 0xffffffff;
    uVar7 = 0;
    if ((unsigned int)param_2 != 0) {
      pfVar8 = (float *)(iVar6 + -4);
      do {
        fVar1 = ((float)uVar7 + fVar4) * ((float)(param_1 & 0xffffffff) / (float)uVar2) + fVar4;
        fVar9 = (float)(int)fVar1;
        lVar5 = (unsigned __int64)(unsigned int)fVar9 - 1;
        fVar1 = ((float)(__int64)(int)fVar9 + fVar3) - fVar1;
        if ((lVar5 < 0) && (lVar5 = param_1 - 1, param_3 == 0)) {
          lVar5 = 0;
        }
        if (((param_1 & 0xffffffff) <= (unsigned __int64)(unsigned int)fVar9) && (fVar9 = 0.0, param_3 == 0)) {
          fVar9 = (float)((int)param_1 - 1);
        }
        pfVar8[2] = fVar1;
        pfVar8[1] = (float)lVar5;
        pfVar8[3] = fVar9;
        pfVar8 = pfVar8 + 4;
        *pfVar8 = fVar3 - fVar1;
        uVar7 = uVar7 + 1;
        param_2 = param_2 - 1;
      } while (param_2 != 0);
    }
  }
  return;
}

