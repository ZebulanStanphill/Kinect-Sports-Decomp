unsigned int fn_82BF45D8(int param_1)

{
  unsigned short uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = *(unsigned short *)(param_1 + 0x22);
    if ((unsigned __int64)uVar1 != 0) {
      trapWord(6,(unsigned __int64)uVar1,0);
      uVar3 = *(int *)(param_1 + 0x24) + 1;
      uVar2 = *(unsigned int *)(*(int *)(param_1 + 0x24) * 4 + *(int *)(param_1 + 0x1c));
      *(unsigned int *)(param_1 + 0x24) = uVar3 - (uVar3 / uVar1) * (unsigned int)uVar1;
      return uVar2;
    }
  }
  return 0;
}

