short fn_8281AAC8(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  
  sVar1 = *(short *)(param_1 + 0x108);
  sVar3 = sVar1;
  if (sVar1 == -1) {
    sVar1 = *(short *)(param_1 + 0x84);
    sVar3 = sVar1;
  }
  while (sVar2 = sVar3, sVar2 != -1) {
    sVar1 = sVar2;
    sVar3 = *(short *)(sVar2 * 0x40 + param_2 + 0x2c);
  }
  return sVar1;
}

