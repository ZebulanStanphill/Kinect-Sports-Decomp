void fn_82D3DA00(int param_1,unsigned int param_2)

{
  int uVar1;
  int iVar2;
  int uVar3;
  
  iVar2 = ((param_2 >> 5) + 0x14) * 4;
  uVar1 = *(int *)(iVar2 + param_1);
  uVar3 = 1 << (param_2 & 0x1f) | uVar1;
  if (uVar1 == uVar3) {
    return;
  }
  *(int *)(iVar2 + param_1) = uVar3;
  *(unsigned short *)(param_1 + 0x26) = *(short *)(param_1 + 0x26) + -1;
  return;
}

