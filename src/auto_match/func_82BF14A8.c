extern int fn_82BE1A10();
extern int fn_82BE1FF0();
extern int fn_82BE5240();
extern int fn_82BF4F80();
extern int fn_82BF5120();
extern int fn_82BF52A0();


void fn_82BF14A8(int param_1,unsigned __int64 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  
  fn_82BE1A10();
  iVar2 = fn_82BE1FF0();
  if (((param_4 == 0) || (iVar2 == 0)) || (iVar2 = *(int *)(iVar2 + 0x4c), iVar2 == 0)) {
    fn_82BE5240(param_1,0x261,0xffffffff82196582);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x34);
    if (iVar1 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(unsigned int *)(iVar1 + 0x24);
    }
    if (uVar4 < 0x400) {
      if (*(unsigned int *)(param_4 + 0x18) != 0) {
        if (iVar1 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(unsigned int *)(iVar1 + 0x18);
        }
        trapWord(6,(unsigned __int64)*(unsigned short *)(param_4 + 0x1c),0);
        fn_82BF4F80((double)(*(float *)(param_4 + 0x20) / (float)*(unsigned short *)(param_4 + 0x24)),
                          iVar2,(param_3 != 0) + '\x01',param_2,uVar3,
                          *(unsigned int *)(param_4 + 0x34),*(unsigned __int64 *)(param_4 + 0x40),
                          *(unsigned __int64 *)(param_4 + 0x48),
                          (unsigned __int64)*(unsigned int *)(param_4 + 0x18) /
                          (unsigned __int64)*(unsigned short *)(param_4 + 0x1c) & 0xffff);
      }
    }
    else {
      if (iVar1 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(unsigned int *)(iVar1 + 0x24);
      }
      if (uVar4 < 0x800) {
        if (*(unsigned int *)(param_4 + 0x18) != 0) {
          if (iVar1 == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = *(unsigned int *)(iVar1 + 0x18);
          }
          trapWord(6,(unsigned __int64)*(unsigned short *)(param_4 + 0x1c),0);
          fn_82BF4F80((double)(*(float *)(param_4 + 0x20) / (float)*(unsigned short *)(param_4 + 0x24)
                                    ),iVar2,(param_3 != 0) + '\x01',param_2,uVar3,
                            *(unsigned int *)(param_4 + 0x34),*(unsigned __int64 *)(param_4 + 0x40),
                            *(unsigned __int64 *)(param_4 + 0x48),
                            (unsigned __int64)*(unsigned int *)(param_4 + 0x18) /
                            (unsigned __int64)*(unsigned short *)(param_4 + 0x1c) & 0xffff);
        }
      }
      else {
        if (iVar1 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(unsigned int *)(iVar1 + 0x24);
        }
        if (uVar4 < 0x1000) {
          if (*(unsigned short *)(param_4 + 0x2c) != 0) {
            if (iVar1 == 0) {
              uVar3 = 0;
            }
            else {
              uVar3 = *(unsigned int *)(iVar1 + 0x18);
            }
            fn_82BF5120((double)(*(float *)(param_4 + 0x28) /
                                      (float)*(unsigned short *)(param_4 + 0x2c)),iVar2,
                              (param_3 != 0) + '\x01',param_2,uVar3,*(unsigned int *)(param_4 + 0x34),
                              *(unsigned __int64 *)(param_4 + 0x40),*(unsigned __int64 *)(param_4 + 0x48));
          }
        }
        else {
          if (iVar1 == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = *(unsigned int *)(iVar1 + 0x24);
          }
          if ((uVar4 < 0x2000) && (*(unsigned int *)(param_4 + 0x18) != 0)) {
            if (iVar1 == 0) {
              uVar3 = 0;
            }
            else {
              uVar3 = *(unsigned int *)(iVar1 + 0x18);
            }
            trapWord(6,(unsigned __int64)*(unsigned short *)(param_4 + 0x1c),0);
            fn_82BF52A0(iVar2,(param_3 != 0) + '\x01',param_2,uVar3,
                              *(unsigned int *)(param_4 + 0x34),*(unsigned __int64 *)(param_4 + 0x40),
                              *(unsigned __int64 *)(param_4 + 0x48),
                              (unsigned __int64)*(unsigned int *)(param_4 + 0x18) /
                              (unsigned __int64)*(unsigned short *)(param_4 + 0x1c) & 0xffff);
          }
        }
      }
    }
  }
  return;
}

