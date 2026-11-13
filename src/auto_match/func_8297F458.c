typedef unsigned char bool;


unsigned __int64 fn_8297F458(int param_1,int param_2)

{
  bool bVar1;
  
  if (param_1 == 0x18) {
    if (param_2 == 0x18) {
      return 1;
    }
    if (param_2 == 0x19) {
      return 1;
    }
    if (param_2 == 0x1b) {
      return 1;
    }
    if (param_2 == 0x1d) {
      return 1;
    }
    if (param_2 == 0x1e) {
      return 1;
    }
    if (param_2 == 0x1a) {
      return 1;
    }
    bVar1 = param_2 == 0x1c;
  }
  else {
    if (param_1 != 0x21) {
      return 0;
    }
    if (param_2 == 0x21) {
      return 1;
    }
    if (param_2 == 0x22) {
      return 1;
    }
    if (param_2 == 0x23) {
      return 1;
    }
    if (param_2 == 0x24) {
      return 1;
    }
    bVar1 = param_2 == 0x25;
  }
  if (bVar1) {
    return 1;
  }
  return 0;
}

