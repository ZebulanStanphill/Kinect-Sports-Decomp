extern unsigned int lbl_8326183C;


unsigned int fn_82F4D9D8(int param_1)

{
  unsigned int iVar1;
  
  iVar1 = *(int *)(param_1 * 0x14 + lbl_8326183C + 0x10);
  if (iVar1 != -1) {
    iVar1 = *(int *)((param_1 * 5 + iVar1 + 2) * 4 + lbl_8326183C);
    if (iVar1 != 0) {
      return *(unsigned int *)(iVar1 + 0x14);
    }
  }
  return 0;
}

