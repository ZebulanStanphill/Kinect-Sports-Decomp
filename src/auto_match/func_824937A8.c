extern int fn_82414950();
extern int fn_8241F138();


void fn_824937A8(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x40);
  iVar2 = *(int *)(iVar1 + 0x194);
  *(unsigned int *)(iVar2 + 0x200) = 1;
  *(unsigned int *)(iVar2 + 0x2a4) = 1;
  fn_82414950(*(unsigned int *)(iVar1 + 0x2b50),0,0x1d);
  *(unsigned int *)(iVar1 + 0x2b40) = 0;
  fn_8241F138(*(unsigned int *)(iVar1 + 0x2b20));
  return;
}

