int  fn_82E22E88(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14) * 0x7d;
  if (*(unsigned int *)(param_1 + 0x18) != 0xfe) {
    iVar1 = iVar1 + 0x20c;
  }
  return (__int64)(param_2 + 1) * (__int64)iVar1;
}

