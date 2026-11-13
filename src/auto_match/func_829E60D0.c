extern unsigned int *auStack_58;
extern int fn_829E5D38();
extern int fn_829E5E50();
extern int fn_829E5FB8();
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


unsigned int fn_829E60D0(unsigned __int64 param_1,unsigned __int64 param_2,int param_3,int param_4,unsigned __int64 param_5,
                  unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8,unsigned __int64 param_9,
                  unsigned int *param_10)

{
  unsigned int uVar1;
  unsigned int *in_stack_00000054;
  unsigned int *in_stack_0000005c;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int auStack_58 [22];
  
  if ((((param_4 == 0) || ((param_5 & 0xffffffff) == 0)) || ((int)param_7 == 0)) ||
     (((param_10 == (unsigned int *)0x0 || (in_stack_00000054 == (unsigned int *)0x0)) ||
      (in_stack_0000005c == (unsigned int *)0x0)))) {
    uVar1 = 0x80070057;
  }
  else {
    *(unsigned int *)(param_3 + 0x40) = *(unsigned int *)(param_3 + 0x44);
    *(unsigned int *)(param_3 + 0x38) = *(unsigned int *)(param_3 + 0x3c);
    uVar1 = fn_829E5FB8(param_3,param_7);
    uVar1 = (int)uVar1 >> 0x1f & uVar1;
    if (-1 < (int)uVar1) {
      uStack_5c = lbl_821AAD20;
      if (*(int *)(param_3 + 8) == 1) {
        uVar1 = fn_829E5E50(param_1,param_2,param_3,param_5,param_6);
      }
      else {
        uVar1 = fn_829E5D38(param_3,&uStack_60,auStack_58);
      }
      if (-1 < (int)uVar1) {
        uVar1 = 0;
        *(unsigned int *)(param_3 + 0x3c) = uStack_60;
        *param_10 = uStack_60;
        *in_stack_00000054 = auStack_58[0];
        *in_stack_0000005c = uStack_5c;
      }
    }
  }
  return uVar1;
}

