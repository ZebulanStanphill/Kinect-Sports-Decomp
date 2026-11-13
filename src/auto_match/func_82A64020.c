unsigned __int64 fn_82A64020(unsigned int param_1,unsigned int param_2,int param_3,unsigned __int64 param_4)

{
  if (param_1 != 0) {
    if (param_1 == 1) {
      if (param_2 == 1) {
        if (param_3 == 2) {
          return 0xffffffff82a61a70;
        }
        if (param_3 == 6) {
          if ((param_4 & 4) != 0) {
            return 0xffffffff82a63350;
          }
          return 0xffffffff82a61bb0;
        }
      }
      else if (param_2 == 2) {
        if (param_3 == 6) {
          return 0xffffffff82a61de0;
        }
      }
      else if (param_2 == 6) {
        if (param_3 == 2) {
          return 0xffffffff82a62180;
        }
      }
      else if ((param_2 == 4) && (param_3 == 6)) {
        return 0xffffffff82a62518;
      }
      if ((param_4 & 2) != 0) {
        if (((param_4 & 1) != 0) || (((param_2 < 5 && (param_2 != 3)) && ((param_4 & 4) != 0)))) {
          return 0xffffffff82a63768;
        }
        if (param_2 < 7) {
          return 0xffffffff82a62c50;
        }
      }
      return 0xffffffff82a61858;
    }
    if (6 < param_1) {
      if (param_1 != 7) {
        return 0;
      }
      if (param_2 == 1) {
        if (param_3 == 2) {
          return 0xffffffff82a5f968;
        }
        if (param_3 == 6) {
          if ((param_4 & 4) != 0) {
            return 0xffffffff82a60c98;
          }
          return 0xffffffff82a5fa70;
        }
      }
      else if (param_2 == 2) {
        if (param_3 == 6) {
          if ((param_4 & 4) != 0) {
            return 0xffffffff82a61080;
          }
          return 0xffffffff82a5fc48;
        }
      }
      else if (param_2 == 6) {
        if (param_3 == 2) {
          return 0xffffffff82a5ff30;
        }
      }
      else if ((param_2 == 4) && (param_3 == 6)) {
        return 0xffffffff82a60170;
      }
      if ((param_4 & 2) != 0) {
        if (((param_4 & 1) != 0) || (((param_2 < 5 && (param_2 != 3)) && ((param_4 & 4) != 0)))) {
          return 0xffffffff82a61478;
        }
        if (param_2 < 7) {
          return 0xffffffff82a60738;
        }
      }
      return 0xffffffff82a5f7b0;
    }
  }
  return 0xffffffff82a63bc8;
}

