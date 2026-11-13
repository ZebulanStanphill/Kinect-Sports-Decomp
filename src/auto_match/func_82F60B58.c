unsigned __int64 fn_82F60B58(int param_1,unsigned int param_2,int *param_3)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned int uVar4;
  
  if (((param_3 == (int *)0x0) || (param_2 < *(unsigned int *)(param_1 + 0x58))) ||
     (*(unsigned int *)(param_1 + 0x5c) < param_2)) {
    return 0xffffffff82240403;
  }
  iVar3 = *(unsigned int *)(param_1 + 0x5c) - param_2;
  uVar2 = 0;
  if (param_3 == (int *)0x0) {
    return 0xffffffff82240403;
  }
  *param_3 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    if (iVar3 < 0) {
      return uVar2;
    }
    if (*(int *)(param_1 + 0x20) <= iVar3) {
      return uVar2;
    }
    uVar1 = *(unsigned int *)(param_1 + 0x28);
    uVar4 = *(int *)(param_1 + 0x1c) - iVar3;
    trapWord(6,(unsigned __int64)uVar1,0);
    *param_3 = (uVar4 - (uVar4 / uVar1) * uVar1) * *(int *)(param_1 + 0x2c) +
               *(int *)(param_1 + 0x54);
    return uVar2;
  }
  return 0xffffffff82240406;
}

