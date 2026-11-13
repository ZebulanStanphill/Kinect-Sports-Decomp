void fn_823D9D60(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  __int64 lVar4;
  
  lVar4 = 7;
  iVar3 = 0;
  do {
    iVar1 = param_2 * 7 + iVar3;
    iVar2 = (param_2 * 7 + iVar3) * 0x30 + param_1;
    *(unsigned char *)(iVar2 + 0x10b4) = 0;
    *(unsigned char *)(iVar2 + 0x10b5) = 0;
    iVar3 = iVar3 + 1;
    *(unsigned int *)((iVar1 + 0x59) * 0x30 + param_1) = 0xffffffff;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  return;
}

