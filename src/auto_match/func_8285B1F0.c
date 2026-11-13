extern int fn_82811940();


void fn_8285B1F0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x40) + param_2;
  *(unsigned char *)(*(int *)(param_1 + 0x40) + param_2) = 1;
  fn_82811940(iVar1 + 4);
  fn_82811940(iVar1 + 0xc);
  *(unsigned int *)(iVar1 + 0x14) = 0;
  return;
}

