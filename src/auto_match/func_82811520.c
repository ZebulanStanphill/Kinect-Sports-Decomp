void fn_82811520(int param_1,unsigned char *param_2,unsigned int param_3,int param_4,unsigned int param_5)

{
  unsigned char bVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned char *pbVar4;
  unsigned __int64 uVar5;
  
  if (param_4 != 0) {
    return;
  }
  uVar2 = param_3 & 7;
  uVar3 = 8 - uVar2;
  pbVar4 = (unsigned char *)((param_3 >> 3) + param_1);
  for (uVar5 = (unsigned __int64)(param_5 >> 3); uVar5 != 0; uVar5 = uVar5 - 1) {
    *pbVar4 = *param_2 >> uVar2 | *pbVar4;
    pbVar4 = pbVar4 + 1;
    bVar1 = *param_2;
    param_2 = param_2 + 1;
    *pbVar4 = bVar1 << (uVar3 & 0x3f) | *pbVar4;
  }
  *pbVar4 = *param_2 >> uVar2 | *pbVar4;
  if ((param_5 & 7) < uVar3) {
    return;
  }
  pbVar4[1] = *param_2 << (uVar3 & 0x3f) | pbVar4[1];
  return;
}

