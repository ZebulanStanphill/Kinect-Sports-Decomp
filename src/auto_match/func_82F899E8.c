__int64 fn_82F899E8(int param_1,int param_2)

{
  unsigned char bVar1;
  unsigned char *pbVar2;
  unsigned char *pbVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  
  pbVar2 = (unsigned char *)(param_1 + -1);
  pbVar3 = (unsigned char *)(param_2 + -1);
  do {
    pbVar2 = pbVar2 + 1;
    bVar1 = *pbVar2;
    uVar4 = (unsigned __int64)bVar1;
    if ((0x40 < bVar1) && (bVar1 < 0x5b)) {
      uVar4 = uVar4 + 0x20;
    }
    pbVar3 = pbVar3 + 1;
    bVar1 = *pbVar3;
    uVar5 = (unsigned __int64)bVar1;
    if ((0x40 < bVar1) && (bVar1 < 0x5b)) {
      uVar5 = uVar5 + 0x20;
    }
  } while (((int)uVar4 != 0) && ((int)uVar4 == (int)uVar5));
  return uVar4 - uVar5;
}

