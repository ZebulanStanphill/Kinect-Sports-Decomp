#define true 1


unsigned short  fn_82818440(char *param_1)

{
  char cVar1;
  unsigned short sVar2;
  int sVar3;
  
  cVar1 = *param_1;
  sVar3 = 0;
  while( true ) {
    sVar2 = (short)cVar1;
    if (sVar2 == 0) break;
    param_1 = param_1 + 1;
    cVar1 = *param_1;
    sVar3 = sVar3 * 0x21 + sVar2;
  }
  return sVar3;
}

