unsigned __int64 fn_825AF790(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  
  uVar5 = param_2 >> 3;
  uVar6 = 3;
  uVar4 = 0;
  param_2 = param_2 & 7;
  do {
    iVar1 = (int)uVar5;
    if (param_2 == 0) {
      if (uVar6 < 8) {
        uVar2 = uVar6 & 0x7f;
        uVar3 = 8 - uVar6;
        uVar4 = uVar4 << (uVar6 & 0x7f);
        uVar6 = 0;
        uVar2 = ((unsigned __int64)*(unsigned char *)(iVar1 + param_1) & (1L << uVar2) + -1 << (uVar3 & 0x7f)) >>
                (uVar3 & 0x7f);
      }
      else {
        uVar4 = uVar4 << 8;
        uVar6 = uVar6 - 8;
        uVar5 = uVar5 + 1;
        uVar2 = (unsigned __int64)*(unsigned char *)(iVar1 + param_1);
      }
      uVar4 = uVar2 | uVar4;
    }
    else {
      uVar4 = 8 - param_2;
      if (uVar6 < 8 - param_2) {
        uVar4 = uVar6;
      }
      param_2 = (8 - uVar4) - param_2;
      uVar6 = uVar6 - uVar4;
      uVar5 = uVar5 + 1;
      uVar4 = ((unsigned __int64)*(unsigned char *)(iVar1 + param_1) &
              (1L << (uVar4 & 0x7f)) + -1 << (param_2 & 0x7f)) >> (param_2 & 0x7f);
      param_2 = 0;
    }
  } while (uVar6 != 0);
  return uVar4;
}

