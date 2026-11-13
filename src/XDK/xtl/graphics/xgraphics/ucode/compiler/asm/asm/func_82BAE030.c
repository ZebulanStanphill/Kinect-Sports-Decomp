extern int fn_82BABEF0();
extern int fn_82BAC750();
extern int fn_82BD09F0();


void fn_82BAE030(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  
  uVar1 = fn_82BD09F0(*(unsigned int *)(*(int *)(param_1 + 0xc) + 0xab0),
                       *(unsigned int *)(*(int *)(param_1 + 0x88) + 0xec));
  fn_82BABEF0(param_2,param_1 + 0x14,*(unsigned char *)(param_1 + 0x7c));
  fn_82BAC750(param_2,0,uVar1,0);
  return;
}

