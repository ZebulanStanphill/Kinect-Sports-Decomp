#define NAN(x) ((x) != (x))
extern int fn_82539560();
extern unsigned int lbl_8218EC10;
extern unsigned int lbl_82192734;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821955C8;
extern unsigned int lbl_82195674;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831D1538;
extern unsigned int lbl_831D1540;
extern unsigned int lbl_831D1544;
extern unsigned int lbl_831D1548;


double fn_822E6610(double param_1,unsigned __int64 param_2,int param_3)

{
  float fVar1;
  double dVar2;
  unsigned __int64 in_f6;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar6 = (double)lbl_831D1538;
  dVar4 = ABS(param_1);
  if (dVar4 < dVar6) {
    if ((double)*(float *)(param_3 + 0x260) != (double)ltcg_pool_0_0f) {
                    /* WARNING: Subroutine does not return */
      fn_82539560(dVar4,(double)ltcg_pool_0_0f,dVar6,-(double)lbl_831D1540);
    }
  }
  else {
    dVar2 = (double)ltcg_pool_0_0f;
    if (dVar2 < param_1 != dVar2 < (double)*(float *)(param_3 + 0x260)) {
      *(float *)(param_3 + 0x260) = ltcg_pool_0_0f;
      dVar6 = (double)lbl_831D1538;
    }
    dVar5 = (double)*(float *)(param_3 + 0x260);
    if ((dVar5 < (double)lbl_821955C8) || ((double)lbl_8218EC10 < dVar5)) {
      dVar3 = (double)lbl_821CA460;
      if (*(float *)(&lbl_821954D8 +
                    ((unsigned int)(unsigned char)((param_1 < dVar2) << 2) | (unsigned int)(NAN(param_1) || NAN(dVar2)) << 2)
                    ) < 0.0) {
        dVar3 = (double)lbl_82192734;
      }
                    /* WARNING: Subroutine does not return */
      fn_82539560(param_2,(double)lbl_831D1544,(double)lbl_821CA460,dVar2,(double)lbl_831D1548,
                   in_f6,dVar3,dVar4,dVar5,dVar6);
    }
    fVar1 = lbl_821CA460;
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((param_1 < dVar2) << 2) | (unsigned int)(NAN(param_1) || NAN(dVar2)) << 2))
        < 0.0) {
      fVar1 = lbl_82192734;
    }
    *(float *)(param_3 + 0x260) = fVar1 * lbl_82195674;
  }
  return (double)*(float *)(param_3 + 0x260);
}

