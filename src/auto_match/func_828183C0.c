#define true 1


unsigned __int64 fn_828183C0(char *param_1)

{
  char cVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  
  uVar3 = 0;
  while( true ) {
    cVar1 = *param_1;
    if ((__int64)cVar1 == 0) break;
    param_1 = param_1 + 1;
    uVar3 = (uVar3 & 0xfffffff) * 0x10 + (__int64)cVar1;
    uVar2 = uVar3 & 0xf0000000;
    if (uVar2 != 0) {
      uVar3 = (uVar2 >> 0x18 | uVar2) ^ uVar3;
    }
  }
  return uVar3;
}

