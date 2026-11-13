extern unsigned int *auStack_40;
extern int fn_82F63BA0();
extern int fn_82F68240();
extern int fn_82F7F510();
extern int fn_82F86648();
extern int fn_82F86888();


unsigned __int64
fn_82F7F760(unsigned __int64 *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5)

{
  unsigned int *puVar2;
  unsigned __int64 uVar1;
  __int64 lVar3;
  int aiStack_50 [4];
  unsigned char auStack_40 [16];
  
  fn_82F86888(*param_1,aiStack_50,auStack_40,0x16);
  if (((param_2 & 0xffffffff) == 0) || ((param_3 & 0xffffffff) == 0)) {
    puVar2 = (unsigned int *)fn_82F68240();
    *puVar2 = 0x16;
    fn_82F63BA0();
    uVar1 = 0x16;
  }
  else {
    if ((int)param_3 == -1) {
      lVar3 = -1;
    }
    else {
      lVar3 = (param_3 - (aiStack_50[0] == 0x2d)) - ((-param_4 & ~param_4 & 0xffffffff) >> 0x1f);
    }
    uVar1 = fn_82F86648((unsigned __int64)(aiStack_50[0] == 0x2d) +
                              ((-param_4 & ~param_4 & 0xffffffff) >> 0x1f) + param_2,lVar3,
                              param_4 + 1,aiStack_50);
    if ((int)uVar1 == 0) {
      uVar1 = fn_82F7F510(param_2,param_3,param_4,param_5,aiStack_50,0);
    }
    else {
      *(unsigned char *)param_2 = 0;
    }
  }
  return uVar1;
}

