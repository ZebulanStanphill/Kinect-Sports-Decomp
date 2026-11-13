extern int fn_82C3CD98();
extern int fn_82C4B350();


void fn_82C3D138(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x20);
  fn_82C4B350(*(unsigned int *)(iVar1 + 0x44));
  iVar2 = fn_82C3CD98();
  if (iVar2 >= 0) {
    *(unsigned int *)(iVar1 + 8) = 0;
    *(unsigned int *)(iVar1 + 0xc) = 0;
    *(unsigned int *)(iVar1 + 0x10) = 0;
    *(unsigned int *)(iVar1 + 0x14) = 0;
    *(unsigned int *)(iVar1 + 0x50) = 0;
    *(unsigned __int64 *)(iVar1 + 0x48) = 0;
  }
  return;
}

