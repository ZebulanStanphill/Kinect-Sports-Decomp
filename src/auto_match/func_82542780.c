extern unsigned int lbl_8218C97C;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82542780(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *(unsigned int *)(iVar1 + 0x2904) = lbl_8218C97C;
  *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x8000000;
  iVar1 = *param_1;
  *(unsigned int *)(iVar1 + 0x2934) = *(unsigned int *)(iVar1 + 0x2934) | 4;
  *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x800;
  return;
}

