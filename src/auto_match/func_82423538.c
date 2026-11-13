extern int fn_82293BF0();
extern int fn_8229CE78();
extern int fn_8229F4F8();


void fn_82423538(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 0xd4);
  if (*(int *)(iVar1 + 0x183c) != 2) {
    *(unsigned int *)(iVar1 + 0x183c) = 2;
    fn_82293BF0(iVar1);
    fn_8229CE78(*(unsigned int *)(iVar1 + 0x1854),1);
    fn_8229F4F8(*(unsigned int *)(iVar1 + 0xc),4);
  }
  return;
}

