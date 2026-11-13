extern int fn_82293BF0();
extern int fn_8229CE78();
extern int fn_8229F4F8();


void fn_824281A8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 0xd4);
  if (*(int *)(iVar1 + 0x183c) != 1) {
    *(unsigned int *)(iVar1 + 0x183c) = 1;
    fn_82293BF0(iVar1);
    fn_8229CE78(*(unsigned int *)(iVar1 + 0x1854),2);
    fn_8229F4F8(*(unsigned int *)(iVar1 + 0xc),3);
  }
  return;
}

