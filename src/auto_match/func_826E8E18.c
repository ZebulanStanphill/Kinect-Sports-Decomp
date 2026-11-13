extern int fn_826E8488();
extern int fn_826E8560();
extern int fn_826E8610();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8200D4C0;
extern unsigned int lbl_821AAD20;


void fn_826E8E18(int param_1,float *param_2)

{
  float fVar1;
  int iVar3;
  int iVar4;
  unsigned __int64 uVar2;
  float *pfVar5;
  __int64 lVar6;
  double dVar7;
  
  *(unsigned char *)(param_1 + 0x15) = 0;
  iVar3 = fn_826E8560();
  iVar4 = fn_826E8560(param_1);
  uVar2 = fn_826E8488(param_1,4);
  fVar1 = lbl_82002AE0;
  if (iVar4 == 0) {
    pfVar5 = param_2 + -2;
    lVar6 = 4;
    do {
      pfVar5 = pfVar5 + 2;
      *pfVar5 = fVar1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  else {
    iVar4 = fn_826E8610(param_1,uVar2);
    dVar7 = (double)lbl_8200D4C0;
    *param_2 = (float)((double)(__int64)iVar4 * dVar7);
    iVar4 = fn_826E8610(param_1,uVar2);
    param_2[2] = (float)((double)(__int64)iVar4 * dVar7);
    iVar4 = fn_826E8610(param_1,uVar2);
    param_2[4] = (float)((double)(__int64)iVar4 * dVar7);
    iVar4 = fn_826E8610(param_1,uVar2);
    param_2[6] = (float)((double)(__int64)iVar4 * dVar7);
  }
  fVar1 = lbl_821AAD20;
  if (iVar3 == 0) {
    param_2 = param_2 + -1;
    lVar6 = 4;
    do {
      param_2 = param_2 + 2;
      *param_2 = fVar1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  else {
    iVar3 = fn_826E8610(param_1,uVar2);
    param_2[1] = (float)(__int64)iVar3;
    iVar3 = fn_826E8610(param_1,uVar2);
    param_2[3] = (float)(__int64)iVar3;
    iVar3 = fn_826E8610(param_1,uVar2);
    param_2[5] = (float)(__int64)iVar3;
    iVar3 = fn_826E8610(param_1,uVar2);
    param_2[7] = (float)(__int64)iVar3;
  }
  return;
}

