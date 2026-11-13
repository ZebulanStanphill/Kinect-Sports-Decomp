extern int fn_82B47660();


__int64 fn_82B4B560(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  
  uVar1 = *(unsigned int *)(param_1 + 4);
  uVar2 = *(unsigned int *)(param_1 + 8);
  fn_82B47660();
  uVar3 = *(unsigned int *)(param_1 + 8);
  uVar4 = *(unsigned int *)(param_1 + 4);
  *(unsigned int *)(param_1 + 4) = uVar1;
  *(unsigned int *)(param_1 + 8) = uVar2;
  return ((unsigned __int64)uVar3 + 2 & 0x1fffffff) * 8 + (unsigned __int64)uVar4;
}

