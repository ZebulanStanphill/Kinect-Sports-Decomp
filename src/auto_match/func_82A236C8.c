__int64 fn_82A236C8(__int64 param_1,int *param_2)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  
  uVar3 = 0;
  lVar4 = (param_1 + -4) - (unsigned __int64)*(unsigned short *)((int)param_1 + -4);
  iVar1 = (int)lVar4;
  trapWord(6,(unsigned __int64)*(unsigned short *)(iVar1 + 6),0);
  if ((unsigned __int64)*(unsigned short *)(iVar1 + 8) != 0) {
    do {
      if ((unsigned __int64)
          *(unsigned char *)((int)((uVar3 - *(unsigned short *)(iVar1 + 0xc) & 0xffffffff) << 2) +
                    (unsigned int)*(unsigned short *)(iVar1 + 4) + iVar1) ==
          ((param_1 - lVar4) - 0x14U & 0xffffffff) / (unsigned __int64)*(unsigned short *)(iVar1 + 6)) break;
      uVar3 = uVar3 + 1;
    } while ((uVar3 & 0xffffffff) < (unsigned __int64)*(unsigned short *)(iVar1 + 8));
  }
  puVar2 = (unsigned int *)((int)((uVar3 - *(unsigned short *)(iVar1 + 0xc) & 0xffffffff) << 2) +
                    (unsigned int)*(unsigned short *)(iVar1 + 4) + iVar1);
  *param_2 = *(unsigned char *)((int)puVar2 + 1) - 1;
  return ((unsigned __int64)*puVar2 & 0xffff) + lVar4 + 1;
}

