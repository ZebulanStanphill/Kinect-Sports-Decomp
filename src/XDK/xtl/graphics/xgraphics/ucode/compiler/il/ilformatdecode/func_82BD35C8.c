extern int fn_82AB15D0();


unsigned __int64 fn_82BD35C8(unsigned int *param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  if ((*param_1 & 0x400000) != 0) {
    uVar2 = 0;
    do {
      if (uVar2 == 0) {
        uVar1 = param_1[1] & 3;
LAB_82bd3660:
        if ((uVar1 == 2) || (uVar1 == 3)) {
          return 1;
        }
      }
      else {
        if (uVar2 == 1) {
          uVar1 = param_1[1] >> 2 & 3;
          goto LAB_82bd3660;
        }
        if (uVar2 < 3) {
          uVar1 = param_1[1] >> 4 & 3;
          goto LAB_82bd3660;
        }
        if (uVar2 == 3) {
          uVar1 = param_1[1] >> 6 & 3;
          goto LAB_82bd3660;
        }
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff82196f10,0xffffffff820e8618,0xa6);
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < 4);
  }
  return 0;
}

