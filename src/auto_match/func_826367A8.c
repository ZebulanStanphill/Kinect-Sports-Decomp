unsigned __int64
fn_826367A8(unsigned int *param_1, unsigned int *param_2, __int64 param_3, unsigned __int64 param_4, __int64 param_5, unsigned __int64 param_6, unsigned __int64 param_7, int (**param_8)(), unsigned int in_stack_00000054)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned int uVar8;

  
  uVar4 = 0;
  if (((unsigned __int64)*param_2 == (param_4 & 0xffffffff)) && ((param_1[1] & 0x800) == 0)) {
    *param_2 = (*param_1 & 0xfff) * 0xc;
  }
  if ((param_7 & 6) != 0) {
    uVar1 = param_1[1];
    if ((uVar1 & 0x800) == 0) {
      uVar5 = *param_2;
    }
    else {
      uVar5 = 0;
      param_4 = param_6;
      param_3 = param_5;
    }
    uVar2 = *param_1;
    uVar3 = uVar2 >> 0xc;
    if ((uVar3 & 7) != 0) {
      uVar6 = ((unsigned __int64)uVar2 & 0xfff) * 0xc;
      if ((uVar6 < uVar5) || ((param_4 & 0xffffffff) < ((unsigned __int64)uVar3 & 7) * 0xc + uVar6)) {
        uVar4 = 0xffffffff80004005;
      }
      else {
        param_3 = uVar6 + param_3;
        uVar5 = uVar2 >> 0x10 & 0xfff;
        uVar6 = 0;
        if ((uVar3 & 7) != 0) {
          uVar8 = 0;
          do {
            uVar7 = (-(unsigned __int64)((1 << (uVar8 & 0x3f) & uVar5) != 0) & 0xfffffffe) + 4;
            if ((2 << (uVar8 & 0x3f) & uVar5) != 0) {
              uVar7 = uVar7 | 0x20;
            }
            if ((1 << ((unsigned int)uVar6 & 0x3f) & ((uVar1 & 3) << 4 | uVar2 >> 0x1c)) != 0) {
              uVar7 = uVar7 | 0x10;
            }
            if ((param_1[1] & 0x800) != 0) {
              uVar7 = uVar7 | 0x40;
            }
            if ((param_1[1] & 0xf000) == 0x5000) {
              uVar7 = uVar7 | 0x80;
            }
            if (((uVar7 & param_7 & 6) != 0) &&
               (uVar4 = (*param_8)(uVar7,((unsigned __int64)*param_1 & 0xfff) + uVar6,param_3,
                                   in_stack_00000054), (int)uVar4 < 0)) {
              return uVar4;
            }
            uVar6 = uVar6 + 1;
            uVar8 = uVar8 + 2;
            param_3 = param_3 + 0xc;
          } while ((uVar6 & 0xffffffff) < ((unsigned __int64)uVar3 & 7));
        }
      }
    }
  }
  return uVar4;
}

