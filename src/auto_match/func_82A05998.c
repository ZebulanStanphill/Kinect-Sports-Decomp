extern unsigned int lbl_8207F494;
extern unsigned int lbl_8315CD38;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82A05998(double param_1,double param_2,int param_3,unsigned __int64 param_4,unsigned __int64 param_5,
                  unsigned int param_6)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  double dVar7;
  
  if (param_6 == 0) {
    return;
  }
  pfVar4 = (float *)&lbl_8315CD38;
  uVar5 = 0;
  do {
    uVar6 = uVar5;
    if (param_1 < (double)*pfVar4) break;
    uVar5 = uVar5 + 1;
    pfVar4 = pfVar4 + 1;
    uVar6 = 6;
  } while ((uVar5 & 0xffffffff) < 7);
  if (1 < param_6) {
    iVar3 = (int)((uVar6 + 0xc + (uVar6 + 0xc & 0x7fffffff) * 2 & 0xffffffff) << 2);
    if ((double)*(float *)(iVar3 + param_3) < param_2) {
      *(float *)(iVar3 + param_3) = (float)param_2;
      return;
    }
    return;
  }
  iVar3 = (int)((uVar6 + 0xc + (uVar6 + 0xc & 0x7fffffff) * 2 & 0xffffffff) << 2);
  dVar7 = (double)*(float *)(iVar3 + param_3);
  if ((double)(float)(dVar7 * (double)lbl_8207F494) < param_2) {
    iVar2 = (int)uVar6 * 0xc + param_3;
    uVar1 = *(unsigned int *)(iVar2 + 0x94);
    *(unsigned int *)(iVar2 + 0x94) = uVar1 + 1;
    *(float *)(iVar2 + 0x98) =
         (float)((double)((float)uVar1 * *(float *)(iVar2 + 0x98)) + param_2) / (float)(uVar1 + 1);
    if (dVar7 < param_2) {
      *(float *)(iVar3 + param_3) = (float)param_2;
      return;
    }
    return;
  }
  return;
}

