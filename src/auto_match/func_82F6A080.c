#define true 1


__int64 memcmp(unsigned __int64 *param_1,unsigned __int64 *param_2,unsigned __int64 param_3)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  
  if (7 < (param_3 & 0xffffffff)) {
    uVar5 = (param_3 & 0xffffffff) >> 3;
    param_3 = param_3 & 7;
    uVar4 = *param_2;
    uVar3 = *param_1;
    while( true ) {
      uVar5 = uVar5 - 1;
      if (uVar5 == 0 || uVar3 != uVar4) break;
      param_2 = param_2 + 1;
      uVar4 = *param_2;
      param_1 = param_1 + 1;
      uVar3 = *param_1;
    }
    if (uVar3 != uVar4) {
      if (uVar3 < uVar4) {
        return -1;
      }
      return 1;
    }
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  if ((int)param_3 != 0) {
    bVar1 = *(unsigned char *)param_2;
    bVar2 = *(unsigned char *)param_1;
    while( true ) {
      param_3 = param_3 - 1;
      if (param_3 == 0 || bVar2 != bVar1) break;
      param_2 = (unsigned __int64 *)((int)param_2 + 1);
      bVar1 = *(unsigned char *)param_2;
      param_1 = (unsigned __int64 *)((int)param_1 + 1);
      bVar2 = *(unsigned char *)param_1;
    }
    return (unsigned __int64)bVar2 - (unsigned __int64)bVar1;
  }
  return 0;
}

