extern int fn_8289B290();
extern int fn_8289F2E0();


void fn_8289B5C0(int param_1,int param_2)

{
  unsigned char uVar1;
  unsigned __int64 uVar2;
  
  uVar1 = *(unsigned char *)(param_2 + 0xac);
  uVar2 = fn_8289F2E0(*(unsigned int *)(param_1 + 0x28),*(unsigned int *)(param_2 + 0x18));
  fn_8289B290(param_1,uVar2,1,uVar1,param_2 + 0x88);
  return;
}

