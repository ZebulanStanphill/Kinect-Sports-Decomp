extern int fn_82A1E0C0();
extern int fn_82A1E508();


unsigned __int64 fn_82C0E160(int *param_1,unsigned int *param_2)

{
  unsigned __int64 uVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  
  uVar1 = (**(int (***)())(*param_1 + 0x34))();
  if (-1 < (int)uVar1) {
    param_1[0x16] = 0;
    *(unsigned char *)(param_1 + 0x15) = 1;
    param_1[0x17] = (int)(param_1 + 0x17);
    param_1[0x18] = (int)(param_1 + 0x17);
    *(unsigned char *)(param_1 + 0x19) = 1;
    param_1[0x1a] = 0;
    param_1[0x1b] = (int)(param_1 + 0x1b);
    param_1[0x1c] = (int)(param_1 + 0x1b);
    *(unsigned char *)(param_1 + 0x1d) = 1;
    param_1[0x1e] = 0;
    param_1[0x1f] = (int)(param_1 + 0x1f);
    param_1[0x20] = (int)(param_1 + 0x1f);
    *(unsigned char *)(param_1 + 0x21) = 1;
    param_1[0x22] = 0;
    param_1[0x23] = (int)(param_1 + 0x23);
    param_1[0x24] = (int)(param_1 + 0x23);
    *(unsigned char *)(param_1 + 0x25) = 0;
    param_1[0x26] = 1;
    param_1[0x27] = (int)(param_1 + 0x27);
    param_1[0x28] = (int)(param_1 + 0x27);
    *(unsigned char *)(param_1 + 0x29) = 0;
    param_1[0x2a] = 1;
    param_1[0x2b] = (int)(param_1 + 0x2b);
    param_1[0x2c] = (int)(param_1 + 0x2b);
    *(unsigned char *)(param_1 + 0x2d) = 0;
    param_1[0x2e] = 1;
    param_1[0x2f] = (int)(param_1 + 0x2f);
    param_1[0x30] = (int)(param_1 + 0x2f);
    *(unsigned char *)(param_1 + 0x31) = 0;
    param_1[0x32] = 1;
    param_1[0x33] = (int)(param_1 + 0x33);
    param_1[0x34] = (int)(param_1 + 0x33);
    iVar2 = fn_82A1E0C0(0,0x10000,0xffffffff82c0d5b0,param_1,4,0);
    param_1[0x42] = iVar2;
    if (iVar2 == 0) {
      uVar1 = (**(int (***)())(*param_1 + 0x20))(param_1);
    }
    if (-1 < (int)uVar1) {
      iVar2 = fn_82A1E0C0(0,0x10000,0xffffffff82c0d5e0,param_1,4,0);
      param_1[0x43] = iVar2;
      if (iVar2 == 0) {
        uVar1 = (**(int (***)())(*param_1 + 0x20))(param_1);
      }
      if (-1 < (int)uVar1) {
        iVar2 = fn_82A1E0C0(0,0x10000,0xffffffff82c0d610,param_1,4,0);
        param_1[0x44] = iVar2;
        if (iVar2 == 0) {
          uVar1 = (**(int (***)())(*param_1 + 0x20))(param_1);
        }
        if (-1 < (int)uVar1) {
          iVar2 = fn_82A1E0C0(0,0x10000,0xffffffff82c0d640,param_1,4,0);
          param_1[0x45] = iVar2;
          if (iVar2 == 0) {
            uVar1 = (**(int (***)())(*param_1 + 0x20))(param_1);
          }
          if (-1 < (int)uVar1) {
            if (param_2[2] == 0) {
              uVar3 = 1;
              uVar5 = 3;
              uVar6 = 3;
              uVar4 = 2;
            }
            else {
              uVar5 = param_2[3];
              uVar3 = param_2[4];
              uVar6 = param_2[5];
              uVar4 = param_2[6];
            }
            fn_82A1E508(param_1[0x43],uVar3);
            fn_82A1E508(param_1[0x45],uVar4);
            fn_82A1E508(param_1[0x42],uVar5);
            fn_82A1E508(param_1[0x44],uVar6);
            uVar1 = (**(int (***)())(*param_1 + 0x40))(param_1,*param_2);
            if ((-1 < (int)uVar1) &&
               (uVar1 = (**(int (***)())(*param_1 + 0x44))(param_1,param_2[1]), -1 < (int)uVar1)) {
              return uVar1;
            }
          }
        }
      }
    }
  }
  (**(int (***)())(*param_1 + 0x34))(param_1);
  return uVar1;
}

