extern int fn_82C75A60();


unsigned __int64 fn_82C75B70(int param_1,int param_2,unsigned int param_3,unsigned __int64 param_4,int param_5)

{
  unsigned __int64 uVar1;
  
  uVar1 = (unsigned __int64)
          ((param_3 & 2) * 0x8000 + (param_3 & 1) + *(int *)(param_5 + 0x10) <<
          (5U - (param_2 >> 2) & 0x3f));
  if ((((unsigned __int64)*(unsigned int *)((param_2 + 0x23) * 8 + param_1) + (param_4 & 0x8000) * -2 + uVar1 +
        param_4 | (*(unsigned int *)(param_2 * 8 + param_1 + 0x11c) - uVar1) - param_4) & 0x80008000) != 0)
  {
    param_4 = fn_82C75A60();
  }
  return param_4;
}

