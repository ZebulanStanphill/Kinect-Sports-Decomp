extern int fn_82AA65B0();
extern int fn_82B36328();


void fn_82B365F0(unsigned __int64 param_1,int param_2)

{
  *(unsigned int *)(param_2 + 0x4c) = *(unsigned int *)(param_2 + 0x4c) & 0xfff7ffff;
  fn_82AA65B0(param_1,0xe15);
  fn_82B36328(param_1,param_2);
  return;
}

