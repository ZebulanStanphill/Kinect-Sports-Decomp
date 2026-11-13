extern int fn_82D81078();
extern int fn_82D83B68();
extern int fn_82D856F0();
extern int fn_82D86288();
extern int fn_82D888D0();
extern int fn_82D88EF8();


void fn_82D89248(unsigned __int64 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_2 + 0xc);
  if (0 < iVar4) {
    iVar3 = 0;
    if (0 < iVar4) {
      piVar2 = *(int **)(param_2 + 8);
      do {
        if (*piVar2 == 0) {
          if (iVar3 != -1) {
            iVar3 = 0;
            if (0 < iVar4) {
              iVar4 = 0;
              do {
                if (*(int *)(iVar4 + *(int *)(param_2 + 8)) != 0) {
                  fn_82D81078(param_1,*(unsigned int *)(iVar4 + *(int *)(param_2 + 8)),
                                *(char *)(param_2 + 0x40) != '\0');
                }
                iVar3 = iVar3 + 1;
                iVar4 = iVar4 + 4;
              } while (iVar3 < *(int *)(param_2 + 0xc));
            }
            goto LAB_82d89314;
          }
          break;
        }
        iVar3 = iVar3 + 1;
        piVar2 = piVar2 + 1;
      } while (iVar3 < iVar4);
    }
    fn_82D856F0(param_1,*(unsigned int *)(param_2 + 8),iVar4,*(char *)(param_2 + 0x40) != '\0');
  }
LAB_82d89314:
  iVar4 = *(int *)(param_2 + 0x30);
  if (0 < iVar4) {
    iVar3 = 0;
    if (iVar4 < 1) {
LAB_82d89368:
      fn_82D86288(param_1,*(unsigned int *)(param_2 + 0x2c));
    }
    else {
      piVar2 = *(int **)(param_2 + 0x2c);
      do {
        if (*piVar2 == 0) {
          if (iVar3 == -1) goto LAB_82d89368;
          iVar3 = 0;
          if (0 < iVar4) {
            iVar4 = 0;
            do {
              iVar1 = *(int *)(*(int *)(param_2 + 0x2c) + iVar4);
              if (iVar1 != 0) {
                fn_82D83B68(param_1,iVar1);
              }
              iVar3 = iVar3 + 1;
              iVar4 = iVar4 + 4;
            } while (iVar3 < *(int *)(param_2 + 0x30));
          }
          goto LAB_82d893b8;
        }
        iVar3 = iVar3 + 1;
        piVar2 = piVar2 + 1;
      } while (iVar3 < iVar4);
      fn_82D86288(param_1,*(unsigned int *)(param_2 + 0x2c));
    }
  }
LAB_82d893b8:
  iVar4 = 0;
  if (0 < *(int *)(param_2 + 0x24)) {
    iVar3 = 0;
    do {
      iVar1 = *(int *)(iVar3 + *(int *)(param_2 + 0x20));
      if (iVar1 != 0) {
        fn_82D888D0(param_1,iVar1);
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar4 < *(int *)(param_2 + 0x24));
  }
  iVar4 = 0;
  if (0 < *(int *)(param_2 + 0x18)) {
    iVar3 = 0;
    do {
      iVar1 = *(int *)(iVar3 + *(int *)(param_2 + 0x14));
      if ((iVar1 != 0) && ((*(int *)(iVar1 + 0x14) != 0 || (*(int *)(iVar1 + 0x18) != 0)))) {
        fn_82D88EF8(param_1);
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar4 < *(int *)(param_2 + 0x18));
  }
  return;
}

