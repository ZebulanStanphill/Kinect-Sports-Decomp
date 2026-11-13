void fn_82799C20(int param_1)

{
  unsigned int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == 0) {
    return;
  }
  *(unsigned char *)(iVar1 + 0x18) = 0;
  *(unsigned char *)(iVar1 + 0x19) = 0;
  return;
}

