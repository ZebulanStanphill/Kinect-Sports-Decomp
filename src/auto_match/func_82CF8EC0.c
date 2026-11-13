unsigned char fn_82CF8EC0(int param_1,__int64 param_2)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  
  uVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 0xec) - (unsigned __int64)*(unsigned int *)(param_1 + 0x20);
  uVar1 = (unsigned __int64)*(unsigned int *)(param_1 + 0x24);
  if ((unsigned __int64)*(unsigned int *)(param_1 + 0x24) < (uVar2 & 0xffffffff)) {
    uVar1 = uVar2;
  }
  *(int *)(param_1 + 0x24) = (int)uVar1;
  return -(uVar2 < (unsigned __int64)*(unsigned int *)(param_1 + 0x8fc) - param_2) & 1;
}

