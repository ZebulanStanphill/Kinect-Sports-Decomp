extern int fn_8224F2B8();
extern int fn_824CD890();


void fn_824D4CC8(int param_1)

{
  unsigned int uVar1;
  
  fn_824CD890();
  uVar1 = *(unsigned int *)(param_1 + 0x10);
  fn_8224F2B8(param_1 + 0x924,param_1,(unsigned __int64)uVar1 + 0x99c);
  fn_8224F2B8(param_1 + 0x978,param_1,(unsigned __int64)uVar1 + 0xa04);
  return;
}

