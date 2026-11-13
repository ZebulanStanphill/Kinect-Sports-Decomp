extern int fn_827D50B8();
extern int fn_827D50C0();
extern int fn_827D9DD8();


unsigned __int64 fn_827E6E58(int param_1,int param_2)

{
  int iVar2;
  unsigned __int64 uVar1;
  
  if (*(int *)(param_2 + 0x20) == 0) {
    if (*(int *)(param_1 + 0x34) <= *(int *)(param_1 + 0x3c)) {
      fn_827D9DD8(*(unsigned int *)(param_1 + 8));
      iVar2 = fn_827D50B8(*(unsigned int *)(param_1 + 0x14));
      if ((iVar2 != 0x3e5) &&
         (iVar2 = fn_827D50B8(*(unsigned int *)(param_1 + 0x14)), iVar2 != 0x3e4)) {
        uVar1 = fn_827D50B8(*(unsigned int *)(param_1 + 0x14));
        return uVar1;
      }
      return 0;
    }
  }
  else {
    fn_827D50C0(*(unsigned int *)(param_1 + 0x14));
    iVar2 = (*(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x38)) + *(int *)(param_1 + 0x3c);
    *(int *)(param_1 + 0x3c) = iVar2;
    if (*(int *)(param_1 + 0x34) <= iVar2) {
      fn_827D9DD8(*(unsigned int *)(param_1 + 8));
      return (unsigned __int64)*(unsigned int *)(param_2 + 0x20);
    }
  }
  return 0x3e5;
}

