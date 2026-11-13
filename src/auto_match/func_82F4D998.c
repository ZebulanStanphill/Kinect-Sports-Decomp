extern unsigned int lbl_8326183C;


unsigned int fn_82F4D998(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 * 0x14 + lbl_8326183C + 0x10);
  if (iVar1 == -1) {
    return 0;
  }
  return *(unsigned int *)((param_1 * 5 + iVar1 + 2) * 4 + lbl_8326183C);
}

