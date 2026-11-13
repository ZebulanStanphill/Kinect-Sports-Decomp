#define true 1
extern unsigned int lbl_821AAD20;


__int64 fn_829E98F0(__int64 param_1,__int64 param_2,__int64 param_3,int param_4,
                      unsigned int *param_5)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  if (param_4 == 0) {
    if (iVar1 < (int)param_2) {
      if (param_5 == (unsigned int *)0x0) {
        return param_2;
      }
      *param_5 = lbl_821AAD20;
      return param_2;
    }
    if (iVar1 < (int)param_3) {
      return param_1;
    }
    if (param_5 != (unsigned int *)0x0) {
      *param_5 = lbl_821AAD20;
    }
  }
  else {
    if (param_4 != 2) {
      if (param_4 != 4) {
        return param_1;
      }
      param_1 = param_1 - param_2;
      while( true ) {
        for (; (int)param_1 < 0; param_1 = -1 - param_1) {
        }
        if ((int)param_1 < (int)(param_3 - param_2)) break;
        param_1 = ((param_3 - param_2 & 0x7fffffffU) * 2 - param_1) + -1;
      }
      return param_1 + param_2;
    }
    if (iVar1 < (int)param_2) {
      return param_2;
    }
    if (iVar1 < (int)param_3) {
      return param_1;
    }
  }
  return param_3 + -1;
}

