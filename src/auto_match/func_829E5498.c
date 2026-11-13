extern int fn_829E5430();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


unsigned __int64
fn_829E5498(double param_1,double param_2,int param_3,unsigned __int64 param_4,unsigned __int64 param_5,
             float *param_6)

{
  float fVar1;
  unsigned __int64 uVar2;
  double dVar3;
  float afStack_30;
  
  dVar3 = (double)lbl_821AAD20;
  if (dVar3 < param_2) {
    if (((double)*(float *)(param_3 + 8) <= dVar3) || ((double)*(float *)(param_3 + 0xc) <= dVar3))
    {
      uVar2 = 0xffffffff8000ffff;
    }
    else {
      uVar2 = fn_829E5430(param_2,param_3,param_4,param_5,&afStack_30);
      if (-1 < (int)uVar2) {
        uVar2 = 0;
        fVar1 = (float)((double)(lbl_82002AE0 - afStack_30) * param_1 +
                       (double)(*(float *)(param_3 + 4) * afStack_30));
        *param_6 = fVar1;
        *(float *)(param_3 + 0x10) = fVar1;
      }
    }
  }
  else {
    uVar2 = 0xffffffff80070057;
  }
  return uVar2;
}

