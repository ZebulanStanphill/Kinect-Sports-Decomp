#define true 1


unsigned __int64 fn_82F6DEF0(unsigned char *param_1,unsigned char *param_2)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  
  bVar1 = *param_1;
  bVar2 = *param_2;
  while( true ) {
    uVar4 = (unsigned __int64)bVar2;
    uVar3 = (unsigned __int64)bVar1;
    if ((bVar2 == 0) || (uVar3 != uVar4)) break;
    param_1 = param_1 + 1;
    bVar1 = *param_1;
    param_2 = param_2 + 1;
    bVar2 = *param_2;
  }
  if (uVar3 == uVar4) {
    return 0;
  }
  if ((__int64)(uVar3 - uVar4) < 0) {
    return 0xffffffffffffffff;
  }
  return 1;
}

