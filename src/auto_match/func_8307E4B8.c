unsigned int fn_8307E4B8(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 * 0x60 + *(int *)(param_1 + 8);
  if ((*(unsigned int *)(param_1 + 4) & 0x20000) != 0) {
    return *(unsigned int *)(iVar1 + 0xc) >> 0x1a & 0x1f;
  }
  return *(unsigned int *)(*(int *)(iVar1 + 0x40) + 0xc) >> 0x1a & 0x1f;
}

