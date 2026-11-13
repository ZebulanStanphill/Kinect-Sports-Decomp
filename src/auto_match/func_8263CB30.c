extern int fn_8262FBD8();


void fn_8263CB30(int param_1)

{
  int iVar1;

  iVar1 = *(int *)(param_1 + 0x18);
  fn_8262FBD8(iVar1,*(unsigned int *)(iVar1 + 0x20) & 0xfffff000,*(unsigned int *)(iVar1 + 0x30) & 0xfffff000);
  return;
}
