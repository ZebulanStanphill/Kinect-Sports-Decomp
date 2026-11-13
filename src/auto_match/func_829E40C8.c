extern unsigned int *auStack_38;
extern int fn_829E3E10();
extern unsigned int lbl_82005CCC;
extern unsigned int lbl_82057B24;


unsigned __int64
fn_829E40C8(unsigned __int64 param_1,unsigned __int64 param_2,double param_3,double param_4,int *param_5,
             int param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  float fVar1;
  float fVar2;
  unsigned __int64 uVar3;
  int *in_stack_0000005c;
  unsigned int *in_stack_00000064;
  int aiStack_40 [2];
  unsigned int auStack_38 [8];
  
  uVar3 = fn_829E3E10(param_5,param_7,param_7,param_8,aiStack_40,auStack_38);
  if (-1 < (int)uVar3) {
    fVar1 = (float)param_5[0x20];
    if (((param_5[0x23] == 0) && (aiStack_40[0] == 0)) && (param_5[0x25] == 0)) {
      if (((param_6 != param_5[0x3f]) ||
          (fVar2 = (float)param_5[0x21], param_4 != (double)(float)param_5[0x28])) &&
         (((fVar1 = (fVar1 / ((float)param_5[0x40] * (float)param_5[0x28])) *
                    (float)(param_3 * param_4), lbl_82005CCC < fVar1 ||
           (fVar2 = lbl_82057B24, lbl_82057B24 <= fVar1)) &&
          (fVar2 = lbl_82005CCC, fVar1 <= lbl_82005CCC)))) {
        fVar2 = fVar1;
      }
    }
    else {
      fVar1 = (float)((double)(float)((double)*(unsigned char *)((int)(float)param_5[0x3a] + *param_5) *
                                     param_3) * param_4);
      if (((lbl_82005CCC < fVar1) || (fVar2 = lbl_82057B24, lbl_82057B24 <= fVar1)) &&
         (fVar2 = lbl_82005CCC, fVar1 <= lbl_82005CCC)) {
        fVar2 = fVar1;
      }
      param_5[0x25] = 1;
    }
    param_5[0x20] = (int)fVar1;
    param_5[0x21] = (int)fVar2;
    uVar3 = 0;
    *in_stack_0000005c = aiStack_40[0];
    *in_stack_00000064 = auStack_38[0];
  }
  return uVar3;
}

