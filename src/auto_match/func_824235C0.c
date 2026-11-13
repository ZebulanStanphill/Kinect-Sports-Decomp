__int64 fn_824235C0(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar4;
  unsigned __int64 uVar3;
  
  if (*(int *)(param_1 + 0x1c) == *(int *)(param_1 + 0x20)) {
    uVar2 = *(unsigned int *)(param_1 + 0xc);
    uVar1 = (int)(*(int *)(param_1 + 0x10) - uVar2) / 0x1f0;
    uVar3 = (unsigned __int64)*(unsigned int *)(param_2 + 0x40) -
            (__int64)(int)(*(unsigned int *)(param_2 + 0x40) / uVar1) * (__int64)(int)uVar1;
  }
  else {
    iVar4 = *(int *)(*(int *)(param_2 + 0x44) * 0x10 + *(int *)(param_1 + 0x1c)) * 0x10 +
            *(int *)(param_1 + 0x2c);
    uVar3 = (unsigned __int64)*(unsigned int *)(iVar4 + 8);
    uVar2 = **(unsigned int **)(iVar4 + 4);
  }
  return uVar3 * 0x1f0 + (unsigned __int64)uVar2;
}

