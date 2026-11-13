extern int fn_82AB15D0();


unsigned __int64 fn_82BA8F38(unsigned __int64 param_1,unsigned __int64 param_2)

{
  if ((param_2 & 0xffffffff) < 8) {
    if ((int)param_2 == 0) {
      return param_1;
    }
    if (param_2 == 1) {
      return 7;
    }
    if (param_2 == 2) {
      return 4;
    }
    if (param_2 == 3) {
      return 5;
    }
    if (param_2 != 4) {
      if (param_2 == 5) {
        return 1;
      }
      if (param_2 != 6) {
        return 3;
      }
      return 2;
    }
  }
  else {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff82196f10,0xffffffff820df268,0xb4e);
  }
  return 0;
}

