extern int fn_8268B0C0();
extern __int64 fn_826BD598();
extern int fn_826BD620();


void fn_8268B190(unsigned int *param_1,unsigned int param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  __int64 lVar2;
  
  if ((param_2 & 0xffffffff) != 0) {
    lVar2 = fn_826BD598(param_2,param_3);
    uVar1 = param_1[1];
    fn_8268B0C0(param_1,(unsigned __int64)uVar1 + lVar2);
    fn_826BD620((unsigned __int64)*param_1 + (unsigned __int64)uVar1,param_2,param_3);
  }
  return;
}

