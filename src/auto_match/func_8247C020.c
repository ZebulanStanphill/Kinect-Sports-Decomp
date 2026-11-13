extern int fn_82484BF0();
extern int fn_82484BF0();
extern int fn_82484E08();
extern int fn_82484EE0();
extern int fn_82485850();
extern unsigned int uRam832766f1;


void fn_8247C020(int param_1,unsigned __int64 param_2,unsigned int *param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5)

{
  int iVar1;
  unsigned int uVar2;

  if (((param_2 & 0xffffffff) == 3) && (param_3 != (unsigned int *)0x0)) {
    *param_3 = 0;
    *(unsigned int *)(param_1 + 0x4c) = 1;
    fn_82484E08(*(unsigned int *)(param_1 + 0x34));
  }
  fn_82484EE0((double)*(float *)(param_1 + 0x7c),*(unsigned int *)(param_1 + 0x34),param_2,param_3
                  ,param_4,param_5);
  if ((param_2 & 0xffffffff) < 0x11) {
    if (0xe < (param_2 & 0xffffffff)) goto LAB_8247c150;
    if ((param_2 & 0xffffffff) == 1) {
      fn_82484BF0(*(unsigned int *)(param_1 + 0x34));
    }
    else {
      if ((param_2 & 0xffffffff) != 2) {
        if ((param_2 & 0xffffffff) == 3) {
          uRam832766f1 = 1;
          fn_82484E08(*(unsigned int *)(param_1 + 0x34));
          *(unsigned int *)(param_1 + 0x3c) = 1;
          *(unsigned int *)(param_1 + 0x44) = 1;
          return;
        }
        if ((param_2 & 0xffffffff) < 4) {
          return;
        }
        if (9 < (param_2 & 0xffffffff)) {
          if ((param_2 & 0xffffffff) < 0xb) {
            return;
          }
          if (0xd < (param_2 & 0xffffffff)) {
            return;
          }
        }
        goto LAB_8247c150;
      }
      fn_82484BF0(*(unsigned int *)(param_1 + 0x34));
    }
  }
  else {
    if (0x1e < (param_2 & 0xffffffff)) {
      if ((param_2 & 0xffffffff) < 0x36) {
        return;
      }
      if (0x3c < (param_2 & 0xffffffff)) {
        return;
      }
      uVar2 = 0;
      if ((param_2 & 0xffffffff) == 0x36) {
        uVar2 = 3;
      }
      else if ((param_2 & 0xffffffff) == 0x37) {
        uVar2 = 4;
      }
      else if ((param_2 & 0xffffffff) == 0x38) {
        uVar2 = 5;
      }
      else if ((param_2 & 0xffffffff) == 0x39) {
        uVar2 = 6;
      }
      else if ((param_2 & 0xffffffff) == 0x3b) {
        uVar2 = 1;
      }
      else if ((param_2 & 0xffffffff) == 0x3c) {
        uVar2 = 2;
      }
      *(unsigned int *)(*(int *)(param_1 + 0x34) + 0x18bc) = uVar2;
      *(unsigned int *)(param_1 + 0x3c) = 1;
      *(unsigned int *)((*(int *)(param_1 + 0x30) + 9) * 4 + *(int *)(param_1 + 0x34)) =
           *(unsigned int *)(*(int *)(param_1 + 0x14) + 100);
      goto LAB_8247c204;
    }
    if ((param_2 & 0xffffffff) < 0x1a) {
      if ((param_2 & 0xffffffff) < 0x12) {
        return;
      }
      if (0x13 < (param_2 & 0xffffffff)) {
        if ((param_2 & 0xffffffff) < 0x15) {
          return;
        }
        if (0x16 < (param_2 & 0xffffffff)) {
          return;
        }
      }
    }
LAB_8247c150:
    fn_82485850((unsigned __int64)*(unsigned int *)(param_1 + 0x34),
                      (unsigned __int64)*(unsigned int *)(param_1 + 0x34) + 0x634);
    *(unsigned int *)(*(int *)(param_1 + 0x34) + 0x14) =
         *(unsigned int *)(*(int *)(param_1 + 0x34) + 0x20);
  }
  *(unsigned int *)((*(int *)(param_1 + 0x30) + 9) * 4 + *(int *)(param_1 + 0x34)) =
       *(unsigned int *)(*(int *)(param_1 + 0x14) + 100);
LAB_8247c204:
  iVar1 = *(int *)(param_1 + 0x30);
  *(int *)(param_1 + 0x30) = iVar1 + 1;
  if (iVar1 == 1) {
    *(unsigned int *)(param_1 + 0x50) = 1;
  }
  return;
}
