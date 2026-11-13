extern int fn_829E5AB0();
extern int fn_829E5DD0();
extern unsigned int lbl_82002C2C;
extern unsigned int lbl_82005344;
extern unsigned int lbl_82057B94;
extern unsigned int lbl_821AAD20;


unsigned __int64
fn_829E5E50(double param_1,double param_2,int *param_3,unsigned __int64 param_4,int param_5,
             unsigned __int64 param_6,unsigned __int64 param_7,float *param_8,int *param_9,int *param_10)

{
  float fVar1;
  unsigned __int64 uVar2;
  char cVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  __int64 lVar7;
  double dVar8;
  double dVar9;
  double extraout_f1;
  double dVar10;
  
  iVar6 = *param_3;
  if ((iVar6 == 0) || (param_5 != param_3[0xd] * param_3[0xc])) {
    uVar2 = 0xffffffff8000ffff;
  }
  else {
    dVar8 = (double)fn_829E5AB0(param_3);
    if (ABS((float)(dVar8 - param_1)) <= (float)(param_1 * param_2)) {
      iVar4 = 0;
    }
    else {
      iVar4 = (-(unsigned int)(dVar8 < param_1) & 2) + 1;
    }
    pfVar5 = (float *)(*(int *)(iVar6 + 4) + -4);
    lVar7 = 5;
    fVar1 = lbl_821AAD20;
    do {
      pfVar5 = pfVar5 + 1;
      fVar1 = *pfVar5 + fVar1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    dVar10 = (double)(fVar1 * lbl_82002C2C);
    if (iVar4 == 2) {
      iVar6 = 3;
    }
    else {
      dVar9 = (double)lbl_82057B94;
      if ((double)lbl_82057B94 <= dVar10) {
        dVar9 = dVar10;
      }
      cVar3 = fn_829E5DD0(dVar9,param_3);
      if (cVar3 == '\0') {
        iVar6 = ((unsigned int)LZCOUNT((unsigned int)(lbl_82005344 < (float)(dVar8 / extraout_f1))) >> 5 ^ 1) + 1;
      }
      else {
        iVar6 = 0;
      }
    }
    param_3[0x11] = (int)(float)dVar10;
    uVar2 = 0;
    *param_8 = (float)dVar8;
    *param_9 = iVar4;
    *param_10 = iVar6;
  }
  return uVar2;
}

