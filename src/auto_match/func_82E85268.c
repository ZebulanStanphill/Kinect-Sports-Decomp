typedef unsigned char bool;


void fn_82E85268(unsigned __int64 param_1,unsigned int *param_2,unsigned int *param_3,__int64 param_4,
                  __int64 param_5)

{
  bool bVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  
  uVar2 = (unsigned int)param_4;
  if (6 < (param_5 - 1U & 0xffffffff)) {
    return;
  }
  bVar1 = (int)(param_5 - 1U) != 0;
  if (param_5 == 2 && bVar1) {
    *param_3 = 3;
    *param_2 = uVar2;
    return;
  }
  if (param_5 == 3 && bVar1) {
    *param_3 = 3;
    if (uVar2 == 2) {
      *param_2 = 0;
      return;
    }
    *param_2 = ((unsigned int)LZCOUNT(uVar2 - 1) >> 5 ^ 1) + 3;
    return;
  }
  if (param_5 != 4 || !bVar1) {
    if (param_5 == 5 && bVar1) {
      if ((1 < (int)uVar2) && ((int)uVar2 < 5)) {
        *param_3 = 3;
        if (uVar2 == 2) {
          *param_2 = 1;
          return;
        }
        *param_2 = -(unsigned int)(param_4 != 3) & 2;
        return;
      }
      *param_3 = 7;
      *param_2 = ((unsigned int)LZCOUNT(uVar2 - 1) >> 5 ^ 1) + 0x72;
      return;
    }
    if (param_5 == 6 && bVar1) {
      *param_3 = 7;
      *param_2 = uVar2 + 0x73;
      return;
    }
    if (!bVar1) {
      *param_2 = 0;
      *param_3 = 3;
      return;
    }
    if (((uVar2 == 2) || (uVar2 == 4)) || (uVar2 == 6)) {
      uVar3 = 3;
      *param_3 = 3;
      if (uVar2 != 2) {
        uVar3 = -(unsigned int)(param_4 != 4) & 4;
      }
      *param_2 = uVar3;
    }
    else {
      *param_3 = 7;
      if (6 < (param_4 - 1U & 0xffffffff)) {
        return;
      }
      bVar1 = (int)(param_4 - 1U) != 0;
      if (param_4 != 2 || !bVar1) {
        if (param_4 == 3 && bVar1) {
          *param_2 = 0x7b;
          return;
        }
        if (param_4 != 4 || !bVar1) {
          if (param_4 == 5 && bVar1) {
            *param_2 = 0x7c;
            return;
          }
          if (param_4 != 6 || !bVar1) {
            if (!bVar1) {
              *param_2 = 0x7a;
              return;
            }
            *param_2 = 0x7d;
            return;
          }
        }
      }
    }
    return;
  }
  if ((int)uVar2 < 3) {
    *param_3 = 3;
    *param_2 = uVar2 + 4;
    return;
  }
  *param_3 = 7;
  *param_2 = uVar2 + 0x6d;
  return;
}

