extern int fn_8289B290();
extern int fn_8289F2E0();


void fn_8289B608(int param_1,int param_2)

{
  unsigned __int64 uVar1;
  
  uVar1 = fn_8289F2E0(*(unsigned int *)(param_1 + 0x28),*(unsigned int *)(param_2 + 0x20));
  fn_8289B290(param_1,uVar1,1,1,param_2 + 0xc);
  return;
}

