unsigned int fn_82F645A8(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned char *pbVar2;
  unsigned char *pbVar3;
  
  pbVar2 = (unsigned char *)(param_1 + 9);
  pbVar3 = (unsigned char *)(param_2 + 9);
  do {
    uVar1 = (unsigned int)*pbVar3 - (unsigned int)*pbVar2;
    if (*pbVar3 == 0) break;
    pbVar3 = pbVar3 + 1;
    pbVar2 = pbVar2 + 1;
  } while (uVar1 == 0);
  return (-uVar1 & ~uVar1) >> 0x1f;
}

