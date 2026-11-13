unsigned char fn_82C16A38(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (*(int *)(iVar1 + 0x3c) <= 2) {
    if (*(int *)(iVar1 + 0xd4) != 0) {
      return (unsigned char)(*(int *)(iVar1 + 8) + 0xb);
    }
    return 0;
  }
  if (*(int *)(iVar1 + 0x25c) != 0) {
    return (unsigned char)(*(int *)(iVar1 + 8) + 0x11);
  }
  return (unsigned char)(*(int *)(iVar1 + 8) + 6);
}
