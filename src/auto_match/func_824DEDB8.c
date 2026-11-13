extern int fn_8224F2B8();
extern int fn_824D4CC8();


void fn_824DEDB8(int param_1)

{
  unsigned int uVar1;
  
  fn_824D4CC8();
  uVar1 = *(unsigned int *)(param_1 + 0x10);
  fn_8224F2B8(param_1 + 0x9cc,param_1,(unsigned __int64)uVar1 + 0xa6c);
  fn_8224F2B8(param_1 + 0xa20,param_1,(unsigned __int64)uVar1 + 0xac4);
  return;
}

