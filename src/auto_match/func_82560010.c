__int64 fn_82560010(unsigned int *param_1,unsigned char *param_2)

{
  __int64 lVar1;
  __int64 lVar2;
  __int64 lVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  unsigned __int64 uVar7;
  
  lVar2 = 0;
  lVar3 = (unsigned __int64)*param_1 - 1;
  if (-1 < lVar3) {
    do {
      lVar4 = (__int64)((int)lVar2 + (int)lVar3 >> 1);
      uVar5 = (unsigned __int64)*(unsigned char *)((int)(lVar4 * 0x5c) + param_1[1]);
      lVar1 = lVar4 * 0x5c + (unsigned __int64)param_1[1];
      uVar7 = (unsigned __int64)*param_2;
      if (uVar5 == *param_2) {
        lVar6 = lVar1;
        do {
          lVar6 = lVar6 + 1;
          if (uVar5 == 0) {
            return lVar1;
          }
          uVar5 = (unsigned __int64)*(unsigned char *)lVar6;
          uVar7 = (unsigned __int64)((unsigned char *)lVar6)[(int)param_2 - (int)lVar1];
        } while (uVar5 == uVar7);
      }
      if ((__int64)(uVar5 - uVar7) < 0) {
        lVar2 = lVar4 + 1;
      }
      else {
        if ((int)(uVar5 - uVar7) < 1) {
          return lVar1;
        }
        lVar3 = lVar4 + -1;
      }
    } while ((int)lVar2 <= (int)lVar3);
  }
  return 0;
}

