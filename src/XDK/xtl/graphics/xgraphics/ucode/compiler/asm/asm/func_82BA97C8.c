extern unsigned int *auStack_30;
extern int fn_82BA05E8();
extern int fn_82BC24F0();


int fn_82BA97C8(int param_1,unsigned int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned char bVar1;
  int iVar2;
  __int64 lVar3;
  unsigned char *pbVar4;
  __int64 lVar5;
  unsigned int auStack_30 [4];
  
  auStack_30[0] = *(unsigned int *)(param_1 + 0x80);
  iVar2 = 0;
  lVar5 = 4;
  do {
    pbVar4 = (unsigned char *)((int)auStack_30 + iVar2);
    iVar2 = iVar2 + 1;
    bVar1 = *pbVar4;
    lVar3 = (unsigned __int64)bVar1 - 1;
    *pbVar4 = (char)lVar3 - ((bVar1 - 2) + (lVar3 == 0));
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  iVar2 = fn_82BC24F0(0x31,param_4);
  *(unsigned int *)(iVar2 + 0x38) = param_2;
  *(unsigned int *)(iVar2 + 0x50) = 0;
  *(unsigned int *)(iVar2 + 0x80) = auStack_30[0];
  fn_82BA05E8(iVar2,1,param_3);
  return iVar2;
}

