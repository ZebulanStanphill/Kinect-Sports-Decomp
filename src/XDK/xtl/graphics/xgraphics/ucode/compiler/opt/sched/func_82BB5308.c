extern int fn_82AB15D0();


void fn_82BB5308(int *param_1,int param_2)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  
  if ((param_1[1] != 1) && (param_1[1] != 3)) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e01e0,0xffffffff820e0168,0x1d2);
  }
  if (param_1[1] == 1) {
    *param_1 = param_2;
    param_1[1] = 3;
  }
  else {
    if (param_1[1] == 3) {
      if (*param_1 == param_2) {
        return;
      }
      uVar2 = 0x1d8;
      uVar1 = 0xffffffff820e01c4;
    }
    else {
      uVar2 = 0x1da;
      uVar1 = 0xffffffff82196f10;
    }
    fn_82AB15D0(0,0xffffffff820d2ea4,uVar1,0xffffffff820e0168,uVar2);
  }
  return;
}

