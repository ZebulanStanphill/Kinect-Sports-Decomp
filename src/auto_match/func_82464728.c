extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


void fn_82464728(double param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  iVar3 = param_2[1];
  if (iVar3 != 8) {
    if (iVar3 == 9) {
                    /* WARNING: Could not recover jumptable at 0x82464784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(int (***)())(*param_2 + 4))(param_2,10);
      return;
    }
    if (iVar3 != 10) {
      if (iVar3 == 0xb) goto LAB_82464788;
      if (iVar3 != 0xc) {
        return;
      }
    }
    if (param_2[4] == 0) {
      return;
    }
    *(unsigned char *)(param_2[4] + 100) = 1;
    param_2[4] = 0;
    return;
  }
LAB_82464788:
  fVar1 = (float)param_2[5];
  iVar3 = param_2[4];
  fVar2 = (float)param_2[6];
  param_2[5] = (int)(float)((double)fVar1 - param_1);
  *(unsigned int *)(iVar3 + 0x5c) = ltcg_pool_0_0f;
  fVar1 = lbl_821CA460 - (float)((double)fVar1 - param_1) / fVar2;
  *(float *)(iVar3 + 0x60) = fVar1;
  *(float *)(iVar3 + 0x50) = fVar1;
  *(unsigned char *)(iVar3 + 0x66) = 1;
  return;
}

