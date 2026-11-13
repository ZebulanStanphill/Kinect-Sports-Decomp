__int64 fn_82E9A930(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  
  iVar4 = param_1;
  iVar2 = param_2;
  if ((param_2 <= param_1) && (iVar2 = param_1, param_2 < param_1)) {
    iVar4 = param_2;
  }
  iVar1 = param_3;
  if ((param_3 <= iVar2) && (iVar1 = iVar2, param_3 < iVar4)) {
    iVar4 = param_3;
  }
  iVar2 = param_4;
  if ((param_4 <= iVar1) && (iVar2 = iVar1, param_4 < iVar4)) {
    iVar4 = param_4;
  }
  uVar3 = ((param_1 - iVar4) - iVar2) + param_2 + param_3 + param_4;
  return (__int64)((int)uVar3 >> 1) + (unsigned __int64)((int)uVar3 < 0 && (uVar3 & 1) != 0);
}

