extern unsigned int *auStack_30;
extern int fn_82936290();
extern int fn_829362F0();


unsigned __int64 fn_829379A8(__int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  unsigned int auStack_30;
  
  if ((param_2 & 0xffffffff) < 0x80000000) {
    uVar1 = fn_829362F0(param_1,param_2,&auStack_30);
    if (-1 < (int)uVar1) {
      uVar1 = fn_82936290((unsigned __int64)auStack_30 + param_1,param_2 - auStack_30,param_3);
    }
  }
  else {
    uVar1 = 0xffffffff80070057;
  }
  return uVar1;
}

