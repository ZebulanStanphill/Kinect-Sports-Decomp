typedef unsigned char bool;
#define true 1
#define false 0


bool fn_82AE5600(__int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  
  uVar1 = ((param_3 & 0xffffffff) >> 3 & 0x1ffffff8) + param_1;
  uVar4 = ((param_2 & 0xffffffff) >> 3 & 0x1ffffff8) + param_1;
  uVar3 = -1L << (param_2 & 0x3f);
  uVar2 = (2L << (param_3 & 0x3f)) - 1;
  if ((param_2 & 0xffffffff) >> 6 == (param_3 & 0xffffffff) >> 6) {
    return (*(unsigned __int64 *)uVar4 & uVar2 & uVar3) != 0;
  }
  uVar3 = *(unsigned __int64 *)uVar4 & uVar3;
  while( true ) {
    if (uVar3 != 0) {
      return true;
    }
    uVar4 = uVar4 + 8;
    if ((uVar1 & 0xffffffff) <= (uVar4 & 0xffffffff)) break;
    uVar3 = *(unsigned __int64 *)uVar4;
  }
  if ((*(unsigned __int64 *)uVar1 & uVar2) != 0) {
    return true;
  }
  return false;
}

