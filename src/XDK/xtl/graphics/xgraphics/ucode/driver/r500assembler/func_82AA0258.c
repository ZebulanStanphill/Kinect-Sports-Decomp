unsigned __int64 fn_82AA0258(unsigned __int64 *param_1,char param_2,unsigned __int64 param_3,char param_4,unsigned int *param_5
                       )

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  
  if ((param_3 & 0xff) != 0) {
    *param_1 = 0;
  }
  uVar3 = 0;
  if (param_2 == '\0') {
    uVar4 = 0xffffffffffffffff;
  }
  else {
    uVar1 = *param_5;
    uVar4 = 0;
    if ((uVar1 & 0x1f) < 0x14) {
      uVar4 = (unsigned __int64)(unsigned int)(1 << (uVar1 >> 0xc & 0x3f));
    }
    uVar2 = 0;
    if ((param_4 == '\0') || ((param_5[1] & 0x40000000) == 0)) {
      uVar2 = (unsigned __int64)(unsigned int)(1 << (uVar1 >> 5 & 0x3f));
    }
    uVar3 = 0xffffffffffffffff;
    if ((uVar1 & 0x40000) == 0) {
      uVar3 = uVar4;
    }
    uVar4 = uVar3;
    if ((uVar1 & 0x800) == 0) goto code_r0x82aa02ec;
  }
  uVar2 = 0xffffffffffffffff;
code_r0x82aa02ec:
  if (((uVar4 | uVar2) & *param_1) != 0) {
    param_3 = 1;
  }
  if ((param_3 & 0xff) != 0) {
    *param_1 = 0;
  }
  *param_1 = *param_1 | uVar3;
  return param_3;
}

