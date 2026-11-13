#define true 1


__int64 fn_82953BF0(int param_1)

{
  int iVar3;
  __int64 lVar1;
  __int64 lVar2;
  
  while( true ) {
    while( true ) {
      if (param_1 == 0) {
        return 0;
      }
      iVar3 = *(int *)(param_1 + 4);
      if (iVar3 == 1) {
        lVar1 = fn_82953BF0(*(unsigned int *)(param_1 + 0xc));
        lVar2 = fn_82953BF0(*(unsigned int *)(param_1 + 8));
        return lVar1 + lVar2;
      }
      if (iVar3 != 6) break;
      param_1 = *(int *)(param_1 + 0x18);
    }
    if (iVar3 == 8) {
      iVar3 = fn_82953BF0(*(unsigned int *)(param_1 + 0x10));
      return (__int64)iVar3 * (__int64)*(int *)(param_1 + 0x14);
    }
    if (iVar3 == 9) break;
    if (iVar3 != 0xb) {
      return 0;
    }
    param_1 = *(int *)(param_1 + 0x30);
  }
  return (__int64)*(int *)(param_1 + 0x20) * (__int64)*(int *)(param_1 + 0x1c);
}

