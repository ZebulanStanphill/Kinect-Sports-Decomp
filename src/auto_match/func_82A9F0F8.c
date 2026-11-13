extern int fn_82936290();
extern int fn_82A9A970();
extern int fn_82A9EE50();


void fn_82A9F0F8(int param_1,unsigned int param_2)

{
  int iVar1;
  
  *(unsigned int *)(param_1 + 0x98) = param_2;
  if (*(short *)(param_1 + 0x9c) != 0) {
    iVar1 = fn_82A9EE50(param_1,0,0);
    fn_82936290(iVar1,0x100,iVar1 + -0x1dc);
    *(unsigned int *)(iVar1 + 0x100) = *(unsigned int *)(iVar1 + -0xdc);
    *(unsigned int *)(iVar1 + 0x1d4) = *(unsigned int *)(iVar1 + -8);
    *(unsigned int *)(iVar1 + 0x1cc) = *(unsigned int *)(iVar1 + -0x10);
    *(unsigned int *)(iVar1 + 0x1d0) = *(unsigned int *)(iVar1 + -0xc);
    *(unsigned int *)(iVar1 + 0x1c8) = *(unsigned int *)(iVar1 + -0x14);
    fn_82A9A970(param_1,*(unsigned int *)(iVar1 + -0x58),*(unsigned int *)(iVar1 + -0x54));
  }
  *(unsigned int *)(*(int *)(param_1 + 0x14) * 0x1dc + *(int *)(param_1 + 0x10) + -4) = param_2;
  *(short *)(param_1 + 0x9e) = *(short *)(param_1 + 0x9e) + 1;
  return;
}

