void fn_82D95968(unsigned char *param_1,int param_2)

{
  int iVar1;
  
  if ((*(unsigned int *)(param_2 + 0x18) != 0) &&
     ((iVar1 = *(unsigned int *)(*(unsigned int *)(param_2 + 0x14) + 8), iVar1 == 0 ||
      (*(unsigned int *)(param_2 + 0x18) != *(unsigned int *)(iVar1 + 0x24))))) {
    *param_1 = 0;
    return;
  }
  *param_1 = 1;
  return;
}

