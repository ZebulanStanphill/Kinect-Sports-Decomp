extern int fn_82A29A38();


unsigned __int64 fn_82AACDF0(unsigned __int64 param_1,unsigned int *param_2,unsigned int *param_3)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  
  uVar2 = ((param_1 & 0xffffffff) >> 0x14 & 0x700 | param_1 & 0x1800) >> 8;
  param_1 = param_1 & 0x7ff;
  if (uVar2 == 0xb) {
    param_1 = param_1 + 0x800;
  }
  else if (uVar2 == 0xc) {
    param_1 = param_1 + 0x1000;
  }
  else if (uVar2 == 0xd) {
    param_1 = param_1 + 0x1800;
  }
  if ((10 < uVar2) && (uVar2 < 0xe)) {
    uVar2 = 2;
  }
  if (uVar2 == 0) {
    uVar3 = 4;
  }
  else {
    if (uVar2 == 1) {
      *param_3 = param_2[((int)param_1 + 4) * 2];
      param_1 = (unsigned __int64)*(unsigned int *)((int)param_2 + (int)(param_1 << 3) + 0x1c);
      if (0xf < param_1) {
        fn_82A29A38();
      }
      uVar3 = *param_3;
      if (uVar3 == 0x12) {
        return param_1;
      }
      if (uVar3 == 0x13) {
        return param_1;
      }
      if (uVar3 == 0x11) {
        return param_1;
      }
      if (uVar3 == 0xc) {
        return param_1;
      }
LAB_82aacf50:
      fn_82A29A38();
      return param_1;
    }
    if (uVar2 < 3) {
      uVar3 = 1;
    }
    else if (uVar2 == 3) {
      iVar1 = (int)param_1 + 0x29;
      if (param_2[iVar1] != 0) {
        if (0xffff0103 < *param_2) {
          fn_82A29A38();
        }
        *param_3 = 4;
        return (unsigned __int64)param_2[iVar1];
      }
      uVar3 = 0x11;
    }
    else if (uVar2 == 7) {
      uVar3 = 2;
    }
    else {
      if (uVar2 != 0xe) {
        if (uVar2 == 0x11) {
          if (param_1 == 0) {
            uVar3 = 0x16;
          }
          else {
            if (param_1 != 1) {
              return 0;
            }
            uVar3 = 0x15;
          }
          *param_3 = uVar3;
          return 0;
        }
        goto LAB_82aacf50;
      }
      uVar3 = 0;
    }
  }
  *param_3 = uVar3;
  return param_1;
}

