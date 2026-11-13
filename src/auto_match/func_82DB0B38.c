void fn_82DB0B38(int param_1)

{
  __int64 lVar1;
  int iVar2;
  
  *(unsigned char *)(param_1 + 0x69) = 0;
  lVar1 = (unsigned __int64)*(unsigned int *)(param_1 + 0x58) + 1;
  if (lVar1 != 0) {
    iVar2 = 0;
    do {
      *(unsigned int *)(iVar2 + *(int *)(param_1 + 0x50)) = 0xffffffff;
      iVar2 = iVar2 + 8;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  *(unsigned int *)(param_1 + 0x54) = *(unsigned int *)(param_1 + 0x54) & 0x80000000;
  return;
}

