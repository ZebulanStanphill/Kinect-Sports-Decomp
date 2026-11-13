short fn_82818478(short *param_1)

{
  short sVar1;
  short sVar2;
  
  sVar2 = 0;
  sVar1 = *param_1;
  while (sVar1 != 0) {
    param_1 = param_1 + 1;
    sVar2 = sVar2 * 0x21 + sVar1;
    sVar1 = *param_1;
  }
  return sVar2;
}

