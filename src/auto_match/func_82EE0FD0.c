extern int fn_82EE0958();


unsigned int fn_82EE0FD0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned int *param_5)

{
  unsigned int uVar1;
  
  if (param_5 != (unsigned int *)0x0) {
    *param_5 = *(unsigned int *)(param_1 + 0x20c);
  }
  uVar1 = fn_82EE0958(param_1,*(unsigned int *)(param_1 + 0x20c),param_2,param_3,param_4);
  if (-1 < (int)uVar1) {
    *(int *)(param_1 + 0x20c) = *(int *)(param_1 + 0x20c) + 1;
  }
  return uVar1 >> 0x1f ^ 1;
}

