extern int fn_82F6A548();
extern int fn_82F6A594();
extern float lbl_82147F70;
extern unsigned int lbl_821AAD20;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82DFBCD0(unsigned __int64 param_1,int param_2)

{
  char cVar1;
  float *pfVar2;
  float *pfVar3;
  int *piVar4;
  float *pfVar5;
  float *pfVar6;
  unsigned __int64 uVar7;
  __int64 lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  piVar4 = (int *)fn_82F6A548();
  uVar7 = 0;
  cVar1 = *(char *)(*(int *)(param_2 + 0x1c) + 0x20);
  dVar11 = (double)lbl_821AAD20;
  dVar12 = dVar11;
  dVar13 = dVar11;
  if (1 < cVar1) {
    pfVar5 = (float *)(piVar4[10] + -4);
    lVar8 = (((__int64)cVar1 - 2U & 0xffffffff) >> 1) + 1;
    pfVar6 = (float *)(*(int *)(param_2 + 0x48) + -0x20);
    uVar7 = lVar8 * 2 & 0xfffffffe;
    do {
      pfVar2 = pfVar6 + 0x38;
      pfVar6 = pfVar6 + 0x70;
      pfVar3 = pfVar5 + 1;
      pfVar5 = pfVar5 + 2;
      dVar13 = (double)(float)((double)(*pfVar2 * lbl_82147F70) * (double)*pfVar3 + dVar13);
      dVar12 = (double)(float)((double)(*pfVar6 * lbl_82147F70) * (double)*pfVar5 + dVar12);
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  dVar10 = dVar11;
  if ((int)uVar7 < (int)cVar1) {
    dVar10 = (double)(*(float *)((int)uVar7 * 0xe0 + *(int *)(param_2 + 0x48) + 0xc0) *
                      lbl_82147F70 * *(float *)((int)(uVar7 << 2) + piVar4[10]));
  }
  dVar9 = (double)(**(int (***)())(*piVar4 + 0x20))();
  dVar12 = (double)(float)(dVar9 * (double)(float)((double)(float)(dVar12 + dVar13) + dVar10));
  if (-dVar12 < 0.0) {
    dVar11 = dVar12;
  }
  fn_82F6A594(dVar11);
  return;
}

