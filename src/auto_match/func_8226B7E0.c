extern int fn_8226C378();


__int64 fn_8226B7E0(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                      unsigned int param_5,__int64 param_6)

{
  int iVar1;
  __int64 lVar2;
  
  if ((int)param_6 < 0x20) {
    lVar2 = param_6 * 0x14;
    do {
      if (*(char *)((int)lVar2 + *(int *)(param_1 + 0x54) + 0x10) == '\0') {
        if (0x1f < (int)param_6) {
          return param_6;
        }
        iVar1 = (int)param_6 * 0x14;
        *(unsigned int *)(*(int *)(param_1 + 0x54) + iVar1) = param_2;
        if (*(int *)(*(int *)(param_1 + 0x54) + iVar1) < 0) {
          *(unsigned int *)(*(int *)(param_1 + 0x54) + iVar1) = 0;
        }
        *(unsigned int *)(*(int *)(param_1 + 0x54) + iVar1 + 4) = param_3;
        if (*(int *)(param_1 + 0x48) <= *(int *)(*(int *)(param_1 + 0x54) + iVar1 + 4)) {
          *(int *)(*(int *)(param_1 + 0x54) + iVar1 + 4) = *(int *)(param_1 + 0x48) + -1;
        }
        *(unsigned int *)(*(int *)(param_1 + 0x54) + iVar1 + 8) = param_4;
        if (*(int *)(*(int *)(param_1 + 0x54) + iVar1 + 8) < 0) {
          *(unsigned int *)(*(int *)(param_1 + 0x54) + iVar1 + 8) = 0;
        }
        *(unsigned int *)(*(int *)(param_1 + 0x54) + iVar1 + 0xc) = param_5;
        if (*(int *)(param_1 + 0x4c) <= *(int *)(*(int *)(param_1 + 0x54) + iVar1 + 0xc)) {
          *(int *)(*(int *)(param_1 + 0x54) + iVar1 + 0xc) = *(int *)(param_1 + 0x4c) + -1;
        }
        *(unsigned char *)(*(int *)(param_1 + 0x54) + iVar1 + 0x10) = 1;
        fn_8226C378();
        return param_6;
      }
      lVar2 = lVar2 + 0x14;
      param_6 = param_6 + 1;
    } while ((int)lVar2 < 0x280);
  }
  return -1;
}

