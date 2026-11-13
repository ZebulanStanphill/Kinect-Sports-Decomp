extern int fn_82F21E78();


void fn_82F23B08(int param_1)

{
  int iVar1;
  __int64 lVar2;
  __int64 lVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x1e54);
  lVar2 = 0;
  if (*(int *)(param_1 + 0x8e0) == 0) {
    if (0 < *(int *)(param_1 + 0x2d4)) {
      iVar1 = *(int *)(param_1 + 0x2d0);
      do {
        lVar3 = 0;
        if (0 < iVar1) {
          do {
            fn_82F21E78(param_1,lVar3,lVar2,*(unsigned char *)(iVar4 + 0x58),iVar4 + 0x38,
                            iVar4 + *(int *)(param_1 + 0x2d0) * -0x114 + 0x38,iVar4 + -0xdc,
                            iVar4 + 4);
            iVar1 = *(int *)(param_1 + 0x2d0);
            lVar3 = lVar3 + 1;
            iVar4 = iVar4 + 0x114;
          } while ((int)lVar3 < iVar1);
        }
        lVar2 = lVar2 + 1;
      } while ((int)lVar2 < *(int *)(param_1 + 0x2d4));
    }
  }
  else if (0 < *(int *)(param_1 + 0x2d4)) {
    iVar1 = *(int *)(param_1 + 0x2d0);
    do {
      lVar3 = 0;
      if (0 < iVar1) {
        do {
          fn_82F21E78(param_1,lVar3,lVar2,*(unsigned char *)(iVar4 + 0x58),iVar4 + 0x38,
                          iVar4 + *(int *)(param_1 + 0x2d0) * -0x114 + 0x38,iVar4 + -0xdc,iVar4 + 4)
          ;
          iVar1 = *(int *)(param_1 + 0x2d0);
          lVar3 = lVar3 + 1;
          iVar4 = iVar4 + 0x114;
        } while ((int)lVar3 < iVar1);
      }
      lVar2 = lVar2 + 1;
    } while ((int)lVar2 < *(int *)(param_1 + 0x2d4));
  }
  return;
}

