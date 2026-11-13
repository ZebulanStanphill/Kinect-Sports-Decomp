extern int fn_82EF1AE0();


unsigned int fn_82EF1CC8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned int *param_7)

{
  unsigned int uVar1;
  
  if (param_7 != (unsigned int *)0x0) {
    *param_7 = *(unsigned int *)(param_1 + 0x368);
  }
  uVar1 = fn_82EF1AE0(param_1,*(unsigned int *)(param_1 + 0x368),param_2,param_3,param_4,param_5
                            ,param_6);
  if (-1 < (int)uVar1) {
    *(int *)(param_1 + 0x368) = *(int *)(param_1 + 0x368) + 1;
  }
  return uVar1 >> 0x1f ^ 1;
}

