extern int fn_8265C940();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;


void fn_82921D58(unsigned __int64 param_1,unsigned __int64 param_2,int param_3)

{
  float fVar1;
  unsigned __int64 uVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  unsigned int uVar6;
  __int64 lVar7;
  float *pfVar8;
  float fVar9;
  
  iVar5 = fn_8265C940((param_2 & 0xfffffff) << 4,0x24810000);
  fVar4 = lbl_82002C5C;
  fVar3 = lbl_82002AE0;
  if (iVar5 != 0) {
    uVar2 = param_2 & 0xffffffff;
    uVar6 = 0;
    if ((param_2 & 0xffffffff) != 0) {
      pfVar8 = (float *)(iVar5 + -4);
      do {
        fVar1 = ((float)uVar6 + fVar4) * ((float)(param_1 & 0xffffffff) / (float)uVar2) + fVar4;
        fVar9 = (float)(int)fVar1;
        lVar7 = (unsigned __int64)(unsigned int)fVar9 - 1;
        fVar1 = ((float)(__int64)(int)fVar9 + fVar3) - fVar1;
        if ((lVar7 < 0) && (lVar7 = param_1 - 1, param_3 == 0)) {
          lVar7 = 0;
        }
        if (((param_1 & 0xffffffff) <= (unsigned __int64)(unsigned int)fVar9) && (fVar9 = 0.0, param_3 == 0)) {
          fVar9 = (float)((int)param_1 - 1);
        }
        pfVar8[2] = fVar1;
        pfVar8[1] = (float)lVar7;
        pfVar8[3] = fVar9;
        pfVar8 = pfVar8 + 4;
        *pfVar8 = fVar3 - fVar1;
        uVar6 = uVar6 + 1;
        param_2 = param_2 - 1;
      } while (param_2 != 0);
    }
  }
  return;
}

