extern int fn_8226D6A0();
extern int fn_82279CA0();


void fn_82286020(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (*(unsigned int *)(iVar1 + 0x144) != 0) {
    fn_8226D6A0(*(unsigned int *)(iVar1 + 0x144));
    *(unsigned int *)(iVar1 + 0x144) = 0;
  }
  fn_82279CA0(iVar1,0);
  return;
}

