extern int fn_82D001D8();


unsigned int fn_82E094D8(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  
  iVar1 = fn_82D001D8();
  if (*(int *)(param_1 + 0x14) < iVar1) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(unsigned int *)
             (((*(int *)(param_1 + 0x14) + 1) * 2 + iVar1) * 4 + *(int *)(param_1 + 0xc));
  }
  return uVar2;
}

