extern unsigned int *auStack_1020;
extern int fn_826E6CF8();
extern int fn_826E6F60();


unsigned __int64 fn_826E7110(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  int iVar2;
  __int64 lVar3;
  unsigned char auStack_1020 [4088];
  
  iVar1 = *(int *)(param_1 + 0x40);
  iVar2 = (int)param_2;
  if (iVar2 < iVar1) {
    if (iVar1 - *(int *)(param_1 + 0x54) <= iVar2) {
      *(int *)(param_1 + 0x4c) = iVar2;
      return param_2;
    }
    fn_826E6CF8(param_1);
  }
  else if (iVar1 < iVar2) {
    *(int *)(param_1 + 0x4c) = iVar1;
  }
  do {
    if (iVar2 <= *(int *)(param_1 + 0x4c)) break;
    lVar3 = param_2 - *(unsigned int *)(param_1 + 0x4c);
    if (0xfff < (int)lVar3) {
      lVar3 = 0x1000;
    }
    iVar1 = fn_826E6F60(param_1,auStack_1020,lVar3);
  } while (iVar1 != 0);
  return (unsigned __int64)*(unsigned int *)(param_1 + 0x4c);
}

