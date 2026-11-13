__int64 fn_8267A390(int param_1,__int64 param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  
  uVar1 = *(unsigned int *)(param_1 + 0xc);
  uVar2 = (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 8) + 8);
  if (uVar2 < ((unsigned __int64)uVar1 + param_2 & 0xffffffff)) {
    param_2 = uVar2 - uVar1;
  }
  *(unsigned int *)(param_1 + 0xc) = uVar1 + (int)param_2;
  return param_2;
}

