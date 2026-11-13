extern unsigned int fStack_44;
extern unsigned int fStack_48;
extern unsigned int fStack_4c;
extern unsigned int fStack_50;
extern unsigned int fStack_54;
extern unsigned int fStack_58;
extern unsigned int fStack_5c;
extern unsigned int fStack_60;
extern int fn_82809558();
extern int fn_8280E180();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


void fn_82800FA8(unsigned __int64 param_1,float *param_2,float *param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned short *param_6)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  struct { float first; float second; } stack_pair_60;

  float fStack_58;
  float fStack_54;
  struct { float first; float second; } stack_pair_50;

  float fStack_48;
  float fStack_44;

  fVar1 = lbl_82002AE0;
  if ((param_5 & 0xe0) != 0) {
    stack_pair_50.second = param_2[1];
    if ((param_5 & 0x1c) != 0x1c) {
      stack_pair_50.first = *param_2;
      fStack_48 = param_2[2];
      dVar4 = (double)lbl_82002AE0;
      dVar2 = (double)lbl_821AAD20;
      if (dVar2 < (double)(float)(dVar4 - (double)(fStack_48 * fStack_48 +
                                                  stack_pair_50.first * stack_pair_50.first + stack_pair_50.second * stack_pair_50.second))) {
        dVar3 = (double)fn_82809558();
        fStack_44 = (float)dVar3;
      }
      else {
        fStack_44 = lbl_821AAD20;
      }
      stack_pair_60.second = param_3[1];
      fStack_58 = param_3[2];
      stack_pair_60.first = *param_3;
      if (dVar2 < (double)(float)(dVar4 - (double)(stack_pair_60.first * stack_pair_60.first +
                                                  fStack_58 * fStack_58 + stack_pair_60.second * stack_pair_60.second))) {
        dVar2 = (double)fn_82809558();
      }
      fStack_54 = (float)dVar2;
      fn_8280E180(param_1,&stack_pair_50.first,&stack_pair_60.first,param_2);
      goto LAB_828010d0;
    }
    fVar1 = lbl_821AAD20;
    if (lbl_821AAD20 <
        lbl_82002AE0 - (param_2[2] * param_2[2] + *param_2 * *param_2 + stack_pair_50.second * stack_pair_50.second)) {
      dVar2 = (double)fn_82809558();
      param_2[3] = (float)dVar2;
      goto LAB_828010d0;
    }
  }
  param_2[3] = fVar1;
LAB_828010d0:
  *param_6 = 4;
  return;
}
