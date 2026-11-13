extern int fn_82A3FF60();
extern int fn_82A59718();
extern int fn_82A598F0();
extern int fn_82A761A0();
extern int fn_82A76C60();
extern int fn_82A81840();


__int64 fn_82A76E78(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int *param_4,
                      unsigned __int64 param_5,unsigned int *param_6)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  unsigned __int64 uVar6;
  
  lVar1 = fn_82A81840();
  uVar6 = 0;
  if ((param_3 & 0xffffffff) != 0) {
    do {
      if ((int)lVar1 < 0) break;
      uVar2 = fn_82A59718(*(unsigned int *)(param_1 + 4),*param_4);
      iVar3 = fn_82A598F0(param_1 + 0x10,uVar2);
      lVar1 = -0x7ff8fff2;
      if (iVar3 != 0) {
        fn_82A761A0(uVar2);
        lVar1 = 0;
      }
      uVar6 = uVar6 + 1;
      param_4 = param_4 + 1;
    } while ((uVar6 & 0xffffffff) < (param_3 & 0xffffffff));
  }
  uVar6 = 0;
  if ((param_5 & 0xffffffff) != 0) {
    do {
      if ((int)lVar1 < 0) {
        return lVar1;
      }
      uVar2 = fn_82A59718(*(unsigned int *)(param_1 + 4),*param_6);
      iVar3 = fn_82A598F0(param_1 + 0x38,uVar2);
      lVar1 = -0x7ff8fff2;
      if (iVar3 != 0) {
        fn_82A761A0(uVar2);
        lVar1 = 0;
      }
      uVar6 = uVar6 + 1;
      param_6 = param_6 + 1;
    } while ((uVar6 & 0xffffffff) < (param_5 & 0xffffffff));
  }
  if ((-1 < (int)lVar1) && (lVar1 = fn_82A76C60(param_1), -1 < lVar1)) {
    lVar1 = (param_3 & 0x3fffffff) << 2;
    if (0x3fffffff < (param_3 & 0xffffffff)) {
      lVar1 = -1;
    }
    iVar3 = fn_82A3FF60(0xffffffff83219d50,lVar1,0x20970006,0);
    *(int *)(param_1 + 0x78) = iVar3;
    if (iVar3 != 0) {
      lVar1 = (param_5 & 0x3fffffff) << 2;
      if (0x3fffffff < (param_5 & 0xffffffff)) {
        lVar1 = -1;
      }
      iVar3 = fn_82A3FF60(0xffffffff83219d50,lVar1,0x20970006,0);
      *(int *)(param_1 + 0x7c) = iVar3;
      if (iVar3 != 0) {
        piVar4 = *(int **)(param_1 + 0x28);
        if ((param_3 & 0xffffffff) != 0) {
          iVar3 = 0;
          do {
            if (piVar4 == (int *)0x0) {
              iVar5 = 0;
            }
            else {
              iVar5 = *piVar4;
              piVar4 = (int *)piVar4[1];
            }
            *(int *)(*(int *)(param_1 + 0x78) + iVar3) = iVar5 + 0x38;
            iVar3 = iVar3 + 4;
            param_3 = param_3 - 1;
          } while (param_3 != 0);
        }
        piVar4 = *(int **)(param_1 + 0x50);
        if ((param_5 & 0xffffffff) == 0) {
          return 0;
        }
        iVar3 = 0;
        do {
          if (piVar4 == (int *)0x0) {
            iVar5 = 0;
          }
          else {
            iVar5 = *piVar4;
            piVar4 = (int *)piVar4[1];
          }
          *(int *)(iVar3 + *(int *)(param_1 + 0x7c)) = iVar5 + 0x38;
          iVar3 = iVar3 + 4;
          param_5 = param_5 - 1;
        } while (param_5 != 0);
        return 0;
      }
    }
    lVar1 = -0x7ff8fff2;
  }
  return lVar1;
}

