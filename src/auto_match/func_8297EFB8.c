extern int fn_82969030();
extern int fn_8296C668();
extern int fn_8296F448();
extern int fn_82971580();
extern int fn_82971B58();
extern int fn_82971ED0();
extern int fn_82973D90();
extern int fn_829740E0();
extern int fn_82974948();
extern int fn_82974DF8();
extern int fn_8297CA38();
extern int fn_8297D2E0();
extern int fn_8297E440();
extern int fn_8297E6F8();


int fn_8297EFB8(int *param_1)

{
  int uVar1;
  int iVar2;
  unsigned int uVar3;
  
  uVar1 = fn_82971B58();
  if ((uVar1 == 0) || (uVar1 >= 0)) {
    uVar1 = fn_8297CA38(param_1);
    if ((uVar1 == 0) || (uVar1 >= 0)) {
      uVar1 = fn_82973D90(param_1,1);
      if ((uVar1 == 0) || (uVar1 >= 0)) {
        uVar3 = 0;
        do {
          uVar1 = fn_8296F448(param_1,1);
          iVar2 = (int)uVar1;
          if (iVar2 != 0) {
            if (iVar2 < 0) {
              return uVar1;
            }
            if (iVar2 == 1) break;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < 0x100);
        uVar1 = fn_82971ED0(param_1);
        if (((int)uVar1 == 0) || ((int)uVar1 >= 0)) {
          uVar1 = fn_8297D2E0(param_1);
          if (((int)uVar1 == 0) || ((int)uVar1 >= 0)) {
            uVar1 = (*(int (**)())(*param_1 + 0x10))(param_1);
            if (((int)uVar1 == 0) || ((int)uVar1 >= 0)) {
              uVar1 = fn_82973D90(param_1,0);
              if (((int)uVar1 == 0) || ((int)uVar1 >= 0)) {
                uVar1 = fn_829740E0(param_1);
                if (((int)uVar1 == 0) || ((int)uVar1 >= 0)) {
                  param_1[0x37] = 1;
                  uVar1 = fn_82974948(param_1);
                  if (((int)uVar1 == 0) || ((int)uVar1 >= 0)) {
                    uVar1 = fn_8297E440(param_1);
                    if (((int)uVar1 == 0) || ((int)uVar1 >= 0)) {
                      uVar1 = fn_8296C668(param_1);
                      if (((int)uVar1 == 0) || ((int)uVar1 >= 0)) {
                        uVar1 = (*(int (**)())(*param_1 + 0x14))(param_1);
                        if (((int)uVar1 == 0) || ((int)uVar1 >= 0)) {
                          uVar1 = (*(int (**)())(*param_1 + 0x18))(param_1);
                          if (((int)uVar1 == 0) || ((int)uVar1 >= 0)) {
                            uVar1 = fn_82969030(param_1);
                            if (((int)uVar1 == 0) || ((int)uVar1 >= 0)) {
                              uVar1 = fn_82971580(param_1);
                              if (((int)uVar1 == 0) || ((int)uVar1 >= 0)) {
                                uVar1 = fn_8297E6F8(param_1);
                                if (((int)uVar1 == 0) || ((int)uVar1 >= 0)) {
                                  uVar1 = fn_82974DF8(param_1);
                                  if (((int)uVar1 == 0) || ((int)uVar1 >= 0)) {
                                    uVar1 = 0;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar1;
}

