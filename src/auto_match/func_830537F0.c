extern unsigned int *auStack_10;
extern int fn_83053048();
extern int fn_830541F8();


unsigned __int64 fn_830537F0(int param_1)

{
  int iVar1;
  unsigned char auStack_10;
  
  if (*(int *)(param_1 + 0xb8) == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0xb0);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0xc) == 0) {
      *(unsigned int *)(param_1 + 0xb0) = 0;
      *(unsigned int *)(param_1 + 0xb4) = 0;
    }
    else {
      *(unsigned int *)(param_1 + 0xb0) = *(unsigned int *)(iVar1 + 0xc);
    }
    *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + -1;
  }
  if ((*(unsigned int *)(iVar1 + 0x30) & 0xe0000000) != 0x20000000) {
    *(unsigned int *)(iVar1 + 0x30) = *(unsigned int *)(iVar1 + 0x30) & 0x1fffffff | 0x40000000;
    if (*(int *)(param_1 + 0xbc) == 0) {
      *(int *)(param_1 + 0xbc) = iVar1;
      *(unsigned int *)(iVar1 + 0xc) = 0;
    }
    else {
      *(int *)(iVar1 + 0xc) = *(int *)(param_1 + 0xbc);
      *(int *)(param_1 + 0xbc) = iVar1;
    }
    auStack_10 = 0;
    fn_83053048(iVar1,param_1 + 0x18,*(unsigned int *)(*(int *)(param_1 + 0x60) + 0x80),1,
                      &auStack_10);
    return 1;
  }
  fn_830541F8(param_1,iVar1);
  return 1;
}

