void fn_82825230(unsigned int param_1,int param_2)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  __int64 lVar4;
  
  uVar2 = -param_1;
  if (-1 < (int)param_1) {
    uVar2 = param_1;
  }
  iVar1 = 0;
  lVar4 = 4;
  do {
    uVar3 = uVar2 - (uVar2 & 0xff);
    *(char *)(iVar1 + param_2) = (char)uVar2;
    iVar1 = iVar1 + 1;
    uVar2 = ((int)uVar3 >> 8) + (unsigned int)((int)uVar3 < 0 && (uVar3 & 0xff) != 0);
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  if (-1 < (int)param_1) {
    return;
  }
  *(unsigned char *)(param_2 + 3) = *(unsigned char *)(param_2 + 3) | 0x80;
  return;
}

