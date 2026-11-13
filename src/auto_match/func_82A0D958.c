extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;


void fn_82A0D958(__int64 param_1)

{
  unsigned int uVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  unsigned __int64 uVar7;
  float in_register_00010010;
  float in_register_00010014;
  
  uVar4 = (unsigned __int64)(unsigned int)(int)((in_register_00010010 + lbl_82002C5C) - lbl_82002AE0);
  uVar1 = (unsigned int)(in_register_00010010 + lbl_82002C5C + lbl_82002AE0);
  uVar4 = -(unsigned __int64)(uVar4 < 0xffffffff80000000) & uVar4;
  uVar3 = 0x13f;
  if ((int)uVar1 < 0x140) {
    uVar3 = (unsigned __int64)uVar1;
  }
  uVar1 = (unsigned int)(in_register_00010014 + lbl_82002C5C + lbl_82002AE0);
  uVar7 = (unsigned __int64)uVar1;
  uVar5 = (unsigned __int64)(unsigned int)(int)((in_register_00010014 + lbl_82002C5C) - lbl_82002AE0);
  uVar5 = -(unsigned __int64)(uVar5 < 0xffffffff80000000) & uVar5;
  if (0xef < (int)uVar1) {
    uVar7 = 0xef;
  }
  if ((int)uVar7 <= (int)uVar5) {
    return;
  }
  lVar6 = uVar7 - uVar5;
  param_1 = (uVar5 + (uVar5 & 0x3fffffff) * 4 & 0x3ffffff) * 0x40 + param_1;
  do {
    if ((int)uVar4 < (int)uVar3) {
      lVar2 = uVar3 - uVar4;
      uVar5 = uVar4;
      do {
        *(unsigned char *)((int)param_1 + (int)uVar5) = 4;
        uVar5 = uVar5 + 1;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
    lVar6 = lVar6 + -1;
    param_1 = param_1 + 0x140;
  } while (lVar6 != 0);
  return;
}

