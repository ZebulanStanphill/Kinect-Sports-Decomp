extern int fn_82EF2CB8();


unsigned __int64
fn_82EF3718(int param_1,unsigned int param_2,unsigned short *param_3,unsigned int *param_4,
             unsigned int *param_5,unsigned int *param_6,unsigned short *param_7)

{
  unsigned __int64 uVar1;
  unsigned short *puStack_50;
  int aiStack_4c;
  
  uVar1 = 0;
  if ((((param_3 == (unsigned short *)0x0) || (param_4 == (unsigned int *)0x0)) ||
      (param_5 == (unsigned int *)0x0)) ||
     (((param_6 == (unsigned int *)0x0 || (param_7 == (unsigned short *)0x0)) ||
      ((unsigned __int64)*(unsigned int *)(param_1 + 0x264) <= (param_2 & 0xffffffff))))) {
    uVar1 = 0xffffffff80070057;
  }
  else {
    param_1 = param_1 + 0x58;
    fn_82EF2CB8(param_1,param_2,&puStack_50);
    *param_3 = *puStack_50;
    fn_82EF2CB8(param_1,param_2,&aiStack_4c);
    *param_4 = *(unsigned int *)(aiStack_4c + 4);
    fn_82EF2CB8(param_1,param_2,&puStack_50);
    *param_5 = *(unsigned int *)(puStack_50 + 4);
    fn_82EF2CB8(param_1,param_2,&aiStack_4c);
    *param_6 = *(unsigned int *)(aiStack_4c + 0x10);
    fn_82EF2CB8(param_1,param_2,&puStack_50);
    *param_7 = puStack_50[10];
  }
  return uVar1;
}

