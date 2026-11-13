extern unsigned int lbl_83155A28;


unsigned int fn_826A74A0(unsigned int *param_1)

{
  unsigned __int64 uVar1;
  
  uVar1 = (unsigned __int64)*param_1;
  if (uVar1 < 0x40001) {
    if (uVar1 < 0x8000) {
      if (uVar1 < 0x80) {
        if (uVar1 < 8) {
          if (uVar1 < 2) {
            uVar1 = -((unsigned __int64)(uVar1 == 0) - 1);
          }
          else {
            uVar1 = 3 - (unsigned __int64)(uVar1 < 4);
          }
        }
        else if (uVar1 < 0x20) {
          uVar1 = 5 - (unsigned __int64)(uVar1 < 0x10);
        }
        else {
          uVar1 = 7 - (unsigned __int64)(uVar1 < 0x40);
        }
      }
      else if (uVar1 < 0x800) {
        if (uVar1 < 0x200) {
          uVar1 = 9 - (unsigned __int64)(uVar1 < 0x100);
        }
        else {
          uVar1 = 0xb - (unsigned __int64)(uVar1 < 0x400);
        }
      }
      else if (uVar1 < 0x2000) {
        uVar1 = 0xd - (unsigned __int64)(uVar1 < 0x1000);
      }
      else {
        uVar1 = 0xf - (unsigned __int64)(uVar1 < 0x4000);
      }
    }
    else if (uVar1 < 0x800000) {
      if (uVar1 < 0x80000) {
        if (uVar1 < 0x20000) {
          uVar1 = 0x11 - (unsigned __int64)(uVar1 < 0x10000);
        }
        else {
          uVar1 = 0x13 - (unsigned __int64)(uVar1 < 0x40000);
        }
      }
      else if (uVar1 < 0x200000) {
        uVar1 = 0x15 - (unsigned __int64)(uVar1 < 0x100000);
      }
      else {
        uVar1 = 0x17 - (unsigned __int64)(uVar1 < 0x400000);
      }
    }
    else if (uVar1 < 0x8000000) {
      if (uVar1 < 0x2000000) {
        uVar1 = 0x19 - (unsigned __int64)(uVar1 < 0x1000000);
      }
      else {
        uVar1 = 0x1b - (unsigned __int64)(uVar1 < 0x4000000);
      }
    }
    else if (uVar1 < 0x20000000) {
      uVar1 = 0x1d - (unsigned __int64)(uVar1 < 0x10000000);
    }
    else if (uVar1 < 0x40000000) {
      uVar1 = 0x1e;
    }
    else {
      uVar1 = 0x20 - (unsigned __int64)(uVar1 < 0xffffffff80000000);
    }
    uVar1 = uVar1 & 0xff;
  }
  else {
    uVar1 = uVar1 - 0x7ffec;
  }
  if (((uVar1 & 0xffffffff) != 0) && ((uVar1 & 0xffffffff) < 0x1e)) {
    return *(unsigned int *)(&lbl_83155A28 + (int)((uVar1 & 0xffffffff) << 2));
  }
  return 0x2c;
}

