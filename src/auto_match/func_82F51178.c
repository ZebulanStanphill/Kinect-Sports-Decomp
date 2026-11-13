void fn_82F51178(int param_1,unsigned int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 8);
  if (*(int *)(iVar1 + 0x28) == param_2) {
    return;
  }
  if (iVar1 == param_2) {
    return;
  }
  *(int *)(iVar1 + 0x28) = param_2;
  *(unsigned char *)(iVar1 + 0x34) = 1;
  return;
}

