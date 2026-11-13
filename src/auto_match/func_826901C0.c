extern int fn_8268FBD0();
extern int fn_8268FF28();


unsigned __int64 fn_826901C0(int param_1,unsigned __int64 param_2,unsigned int param_3,unsigned int param_4)

{
  unsigned int uVar1;
  
  if (param_4 < *(unsigned int *)(param_1 + 8)) {
    param_4 = *(unsigned int *)(param_1 + 8);
  }
  uVar1 = fn_8268FF28(param_1,param_2,(param_3 + param_4) - 1 & ~(param_4 - 1));
  if (*(unsigned int *)(((int)uVar1 + 3) * 0xc + param_1) == 0) {
    fn_8268FBD0(param_1,uVar1);
  }
  return 1;
}

