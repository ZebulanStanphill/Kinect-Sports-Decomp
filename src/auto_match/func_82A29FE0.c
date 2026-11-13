extern int fn_82A2B760();
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


unsigned __int64
fn_82A29FE0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int *param_4,
             unsigned int *param_5)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  struct { unsigned int first; unsigned int second; } stack_pair_28;

  
  if (param_4 != (unsigned int *)0x0) {
    *param_4 = 0;
  }
  if (param_5 == (unsigned int *)0x0) {
    uVar1 = NtWriteFile(param_1,0,0,0,&uStack_30,param_2,param_3,0);
    if (((uVar1 != 0x103) ||
        (uVar2 = NtWaitForSingleObjectEx(param_1,1,0,0), uVar1 = uStack_30, -1 < (int)uVar2)) &&
       (uVar2 = uVar1, -1 < (int)uVar1)) {
      *param_4 = uStack_2c;
      return 1;
    }
    if ((uVar2 & 0xc0000000) == 0x80000000) {
      *param_4 = uStack_2c;
    }
  }
  else {
    stack_pair_28.second = param_5[2];
    stack_pair_28.first = param_5[3];
    *param_5 = 0x103;
    uVar1 = NtWriteFile(param_1,param_5[4],0,-(unsigned int)((param_5[4] & 1) == 0) & (unsigned int)param_5,param_5,
                        param_2,param_3,&stack_pair_28.first);
    if (((uVar1 & 0xc0000000) != 0xc0000000) && (uVar1 != 0x103)) {
      if (param_4 != (unsigned int *)0x0) {
        *param_4 = param_5[1];
      }
      return 1;
    }
  }
  fn_82A2B760();
  return 0;
}

