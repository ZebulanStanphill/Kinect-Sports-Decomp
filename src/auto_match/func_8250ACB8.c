extern unsigned int *auStack_60;
extern int fn_8250B1A8();
extern int fn_8250B670();
extern int fn_8250BE90();
extern unsigned int uStack_64;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


void fn_8250ACB8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  __int64 lVar1;
  unsigned int *puVar2;
  __int64 lVar3;
  unsigned int uVar4;
  __int64 lVar5;
  unsigned __int64 uVar6;
  int iVar8;
  __int64 lVar7;
  unsigned __int64 uVar9;
  __int64 lVar10;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  unsigned int uStack_64;
  unsigned char auStack_60 [96];
  
  lVar5 = param_2 - param_1;
  uVar4 = (int)lVar5 / 0x14;
  uVar6 = param_2;
  if (0x20 < (int)uVar4) {
    do {
      iVar8 = (int)param_3;
      param_2 = uVar6;
      if (iVar8 < 1) break;
      fn_8250B1A8(&uStack_70,param_1,uVar6,param_4);
      param_3 = (__int64)(iVar8 >> 1) + (unsigned __int64)(iVar8 < 0 && (param_3 & 1) != 0);
      param_3 = (__int64)((int)param_3 >> 1) + (unsigned __int64)((int)param_3 < 0 && (param_3 & 1) != 0)
                + param_3;
      uVar9 = (unsigned __int64)uStack_6c;
      param_2 = (unsigned __int64)uStack_70;
      if ((int)(uStack_70 - (int)param_1) / 0x14 < (int)((int)uVar6 - uStack_6c) / 0x14) {
        fn_8250ACB8(param_1,param_2,param_3,param_4);
        param_2 = uVar6;
        param_1 = uVar9;
      }
      else {
        fn_8250ACB8(uVar9,uVar6,param_3,param_4);
      }
      lVar5 = param_2 - param_1;
      uVar4 = (int)lVar5 / 0x14;
      uVar6 = param_2;
    } while (0x20 < (int)uVar4);
    if (0x20 < (int)uVar4) {
      if ((int)uVar4 < 2) {
        return;
      }
      lVar7 = (__int64)((int)uVar4 >> 1) + (unsigned __int64)((int)uVar4 < 0 && (uVar4 & 1) != 0);
      if (0 < lVar7) {
        lVar1 = lVar7 * 0x14 + param_1;
        do {
          puVar2 = &uStack_64;
          lVar7 = lVar7 + -1;
          lVar3 = lVar1 + -0x18;
          lVar10 = 5;
          do {
            lVar3 = lVar3 + 4;
            puVar2 = puVar2 + 1;
            *puVar2 = *(unsigned int *)lVar3;
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
          fn_8250BE90(param_1,lVar7,uVar4,auStack_60,param_4);
          lVar1 = lVar1 + -0x14;
        } while (0 < (int)lVar7);
      }
      if ((int)uVar4 < 2) {
        return;
      }
      lVar7 = param_2 - 0x14;
      do {
        puVar2 = &uStack_64;
        lVar1 = lVar7 + -4;
        lVar3 = 5;
        do {
          lVar1 = lVar1 + 4;
          puVar2 = puVar2 + 1;
          *puVar2 = *(unsigned int *)lVar1;
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
        lVar1 = param_1 - 4;
        lVar3 = lVar7 + -4;
        lVar10 = 5;
        do {
          lVar1 = lVar1 + 4;
          lVar3 = lVar3 + 4;
          *(unsigned int *)lVar3 = *(unsigned int *)lVar1;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
        fn_8250BE90(param_1,0,((int)lVar5 + -0x14) / 0x14,auStack_60,param_4);
        lVar7 = lVar7 + -0x14;
        lVar5 = (lVar7 - param_1) + 0x14;
      } while (1 < (int)lVar5 / 0x14);
      return;
    }
  }
  if (1 < (int)uVar4) {
    fn_8250B670(param_1,param_2,param_4);
  }
  return;
}

