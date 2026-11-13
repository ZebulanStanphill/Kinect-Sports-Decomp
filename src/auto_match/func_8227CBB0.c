extern unsigned int *auStack_130;
extern int fn_8227CD60();
extern int fn_8227D108();
extern int fn_8227D380();
extern int fn_82F68CC0();
extern unsigned int uStack_13c;
extern unsigned int uStack_140;


void fn_8227CBB0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  __int64 lVar2;
  __int64 lVar3;
  int iVar5;
  __int64 lVar4;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned int uStack_140;
  unsigned int uStack_13c;
  unsigned char auStack_130 [304];
  
  lVar2 = param_2 - param_1;
  uVar1 = (int)lVar2 / 0xdc;
  uVar6 = param_2;
  if (0x20 < (int)uVar1) {
    do {
      iVar5 = (int)param_3;
      param_2 = uVar6;
      if (iVar5 < 1) break;
      fn_8227CD60(&uStack_140,param_1,uVar6,param_4);
      param_3 = (__int64)(iVar5 >> 1) + (unsigned __int64)(iVar5 < 0 && (param_3 & 1) != 0);
      param_3 = (__int64)((int)param_3 >> 1) + (unsigned __int64)((int)param_3 < 0 && (param_3 & 1) != 0)
                + param_3;
      uVar7 = (unsigned __int64)uStack_13c;
      param_2 = (unsigned __int64)uStack_140;
      if ((int)(uStack_140 - (int)param_1) / 0xdc < (int)((int)uVar6 - uStack_13c) / 0xdc) {
        fn_8227CBB0(param_1,param_2,param_3,param_4);
        param_2 = uVar6;
        param_1 = uVar7;
      }
      else {
        fn_8227CBB0(uVar7,uVar6,param_3,param_4);
      }
      lVar2 = param_2 - param_1;
      uVar1 = (int)lVar2 / 0xdc;
      uVar6 = param_2;
    } while (0x20 < (int)uVar1);
    if (0x20 < (int)uVar1) {
      if ((int)uVar1 < 2) {
        return;
      }
      lVar4 = (__int64)((int)uVar1 >> 1) + (unsigned __int64)((int)uVar1 < 0 && (uVar1 & 1) != 0);
      if (0 < lVar4) {
        lVar3 = lVar4 * 0xdc + param_1;
        do {
          lVar3 = lVar3 + -0xdc;
          lVar4 = lVar4 + -1;
          fn_82F68CC0(auStack_130,lVar3,0xdc);
          fn_8227D380(param_1,lVar4,uVar1,auStack_130,param_4);
        } while (0 < (int)lVar4);
      }
      if ((int)uVar1 < 2) {
        return;
      }
      lVar4 = param_2 - 0xdc;
      do {
        fn_82F68CC0(auStack_130,lVar4,0xdc);
        fn_82F68CC0(lVar4,param_1,0xdc);
        fn_8227D380(param_1,0,((int)lVar2 + -0xdc) / 0xdc,auStack_130,param_4);
        lVar4 = lVar4 + -0xdc;
        lVar2 = (lVar4 - param_1) + 0xdc;
      } while (1 < (int)lVar2 / 0xdc);
      return;
    }
  }
  if (1 < (int)uVar1) {
    fn_8227D108(param_1,param_2,param_4);
  }
  return;
}

