extern int fn_8242E3E0();
extern int fn_8243B6E8();


unsigned __int64 fn_8243AEE8(int param_1)

{
  unsigned int iVar1;
  
  fn_8243B6E8();
  iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0x2ac);
  if (iVar1 != 0) {
    *(unsigned int *)(*(int *)(iVar1 + 8) + 400) = 0;
    *(unsigned int *)(*(int *)(iVar1 + 0xc) + 400) = 0;
    *(unsigned int *)(*(int *)(iVar1 + 0x10) + 400) = 0;
  }
  *(unsigned int *)(*(int *)(param_1 + 0x40) + 0x2b0) = 0;
  fn_8242E3E0(*(unsigned int *)(*(int *)(param_1 + 0x40) + 0x1d8));
  return 3;
}

