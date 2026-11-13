extern int fn_8266CC70();


void fn_8266D300(unsigned __int64 param_1,int param_2,unsigned int param_3)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  
  iVar2 = (param_2 - (int)param_1) / 0xc;
  uVar6 = (unsigned __int64)iVar2;
  iVar1 = (int)(param_3 - (int)param_1) / 0xc;
  uVar4 = (unsigned __int64)iVar1;
  uVar5 = uVar6;
  uVar3 = uVar4;
  if (iVar2 != 0) {
    do {
      uVar4 = uVar5;
      uVar5 = uVar3 - (__int64)((int)uVar3 / (int)uVar4) * (__int64)(int)uVar4;
      trapWord(6,uVar4,0);
      trapWord(5,uVar4 & ~(((uVar3 & 0x7fffffff) << 1 | (uVar3 & 0xffffffff) >> 0x1f) - 1),0xffff);
      uVar3 = uVar4;
    } while (uVar5 != 0);
  }
  if (((int)uVar4 < iVar1) && (0 < (int)uVar4)) {
    uVar5 = uVar4 * 0xc + param_1;
    do {
      uVar7 = uVar5 + uVar6 * 0xc;
      uVar3 = uVar5;
      if ((uVar7 & 0xffffffff) == (unsigned __int64)param_3) {
        uVar7 = param_1;
      }
      do {
        fn_8266CC70(uVar3,uVar7);
        iVar1 = (int)(param_3 - (int)uVar7) / 0xc;
        if (iVar2 < iVar1) {
          uVar8 = uVar6 * 0xc + uVar7;
        }
        else {
          uVar8 = (uVar6 - (__int64)iVar1) * 0xc + param_1;
        }
        uVar3 = uVar7;
        uVar7 = uVar8;
      } while ((uVar8 & 0xffffffff) != (uVar5 & 0xffffffff));
      uVar4 = uVar4 - 1;
      uVar5 = uVar5 - 0xc;
    } while (0 < (__int64)uVar4);
  }
  return;
}

