extern int fn_829301D0();
extern int fn_82934160();
extern int fn_82F691F0();


unsigned __int64 fn_82963A30(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,int param_5)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  uVar3 = param_2 & 0xfffff;
  param_1[3] = param_4;
  if (param_5 != 0) goto LAB_82963c8c;
  uVar1 = param_2 & 0xf0000000;
  if (uVar1 == 0) {
    param_3 = 0;
    param_4 = 0;
    goto LAB_82963c38;
  }
  uVar4 = uVar3;
  if (uVar1 == 0x10000000) {
LAB_82963bf4:
    param_4 = uVar3;
    param_3 = uVar4;
  }
  else {
    if (uVar1 == 0x20000000) {
      uVar4 = (param_2 & 0xfffff) << 1;
      goto LAB_82963bf4;
    }
    if (uVar1 == 0x30000000) {
      uVar4 = uVar3 * 3;
      goto LAB_82963bf4;
    }
    if (uVar1 == 0x40000000) {
      uVar4 = (param_2 & 0xfffff) << 2;
      goto LAB_82963bf4;
    }
    if (uVar1 == 0x50000000) {
      uVar1 = param_2 & 0xfff00000;
      if (uVar1 != 0x50000000) {
        if (uVar1 != 0x50100000) {
          if (uVar1 == 0x50200000) goto LAB_82963c10;
          if (uVar1 != 0x50300000) goto LAB_82963c38;
        }
        goto LAB_82963bf4;
      }
      uVar3 = (param_2 & 0xfffff) << 1;
      param_3 = uVar3;
      if (param_4 == 0xffffffff) {
LAB_82963c10:
        param_4 = 1;
        param_3 = uVar3;
      }
    }
    else if (uVar1 == 0x60000000) {
      param_2 = param_2 & 0xfff00000;
      if (param_2 < 0x60a00001) {
        if (param_2 != 0x60a00000) {
          if (param_2 < 0x60500001) {
            if ((param_2 == 0x60500000) || (param_2 == 0x60000000)) {
              param_3 = 4;
              goto LAB_82963bb8;
            }
            if (((param_2 != 0x60100000) && (param_2 != 0x60200000)) && (param_2 != 0x60300000)) {
              uVar3 = 0x60400000;
              goto LAB_82963b00;
            }
          }
          else if (((param_2 != 0x60600000) && (param_2 != 0x60700000)) && (param_2 != 0x60800000))
          {
            uVar3 = 0x60900000;
LAB_82963b00:
            if (param_2 != uVar3) goto LAB_82963c38;
          }
          goto LAB_82963b08;
        }
LAB_82963b44:
        param_3 = 6;
      }
      else {
        if (param_2 < 0x60f00001) {
          if (param_2 == 0x60f00000) goto LAB_82963b44;
          if (param_2 == 0x60b00000) goto LAB_82963bb4;
          if ((param_2 != 0x60c00000) && (param_2 != 0x60d00000)) {
            uVar3 = 0x60e00000;
            goto LAB_82963b00;
          }
        }
        else {
          if (param_2 == 0x61000000) {
LAB_82963bb4:
            param_3 = 0xc;
            goto LAB_82963bb8;
          }
          if ((param_2 != 0x61100000) && (param_2 != 0x61200000)) {
            uVar3 = 0x61300000;
            goto LAB_82963b00;
          }
        }
LAB_82963b08:
        param_3 = 8;
      }
LAB_82963bb8:
      param_4 = 4;
    }
  }
LAB_82963c38:
  if (param_1[1] == 0xffffffff) {
    param_1[1] = param_3;
  }
  if (param_1[3] == 0xffffffff) {
    param_1[3] = param_4;
  }
  if ((((param_1[1] != param_3) || (param_1[3] != param_4)) || (param_1[1] == 0xffffffff)) ||
     (param_1[3] == 0xffffffff)) {
    return 0xffffffff80004005;
  }
LAB_82963c8c:
  uVar3 = param_1[1];
  if (uVar3 < 9) {
    param_1[2] = (unsigned int)(param_1 + 0x10);
  }
  else {
    iVar2 = fn_82934160();
    uVar3 = fn_829301D0(*(unsigned int *)(iVar2 + 0x10),uVar3 << 2,0x10);
    param_1[2] = uVar3;
    if (uVar3 == 0) {
      return 0xffffffff8007000e;
    }
  }
  uVar3 = param_1[3];
  if (uVar3 < 5) {
    param_1[4] = (unsigned int)(param_1 + 0x18);
  }
  else {
    iVar2 = fn_82934160();
    uVar3 = fn_829301D0(*(unsigned int *)(iVar2 + 0x10),uVar3 << 2,0x10);
    param_1[4] = uVar3;
    if (uVar3 == 0) {
      return 0xffffffff8007000e;
    }
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_1[2],0xff,param_1[1] << 2);
}

