extern int fn_8295A330();
extern int fn_82975B00();


unsigned __int64 fn_829A9AF8(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  
  uVar1 = *(unsigned int *)(*(int *)(*(int *)(param_2 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4);
  if ((uVar1 & 0x100) == 0) {
    if (((uVar1 & 0x200) == 0) || ((uVar1 & 0x80) == 0)) {
      if ((uVar1 & 0x200) == 0) {
        if ((uVar1 & 0x10) == 0) {
          if ((uVar1 & 0x2020) == 0x2020) {
            uVar2 = 5;
          }
          else if ((uVar1 & 0x40020) == 0x40020) {
            uVar2 = 6;
          }
          else if ((uVar1 & 0x20) == 0) {
            if (((uVar1 & 1) == 0) || ((uVar1 & 2) == 0)) {
              if (((uVar1 & 2) == 0) || ((uVar1 & 4) == 0)) {
                if ((uVar1 & 0x10000) != 0) {
                  fn_82975B00(param_1,*(unsigned int *)
                                             (*(int *)(*(int *)(param_2 + 0x48) * 4 +
                                                      *(int *)(param_1 + 0x18)) + 0x3c),0x1194,
                                    0xffffffff82052028);
                }
                return 0xffffffff80004005;
              }
              uVar2 = 8;
            }
            else {
              uVar2 = 7;
            }
          }
          else {
            uVar2 = 4;
          }
        }
        else {
          uVar2 = 3;
        }
      }
      else {
        uVar2 = 2;
      }
    }
    else {
      uVar2 = 9;
    }
  }
  else {
    uVar2 = 1;
  }
  uVar2 = fn_8295A330(param_1,uVar2);
  return uVar2;
}

