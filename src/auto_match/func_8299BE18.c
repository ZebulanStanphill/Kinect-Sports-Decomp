extern int fn_82975B00();
extern int fn_8299BD58();


unsigned __int64 fn_8299BE18(int param_1)

{
  int *piVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned __int64 uVar5;
  unsigned int uVar6;
  
  uVar5 = 0;
  if (*(unsigned int *)(param_1 + 0xc) < 0x41) {
    uVar3 = 0;
    if (*(unsigned int *)(param_1 + 0xc) != 0) {
      iVar4 = 0;
      do {
        uVar3 = uVar3 + 1;
        piVar1 = (int *)(*(int *)(param_1 + 0x18) + iVar4);
        iVar4 = iVar4 + 4;
        *(unsigned int *)(*piVar1 + 0x28) = 0;
      } while (uVar3 < *(unsigned int *)(param_1 + 0xc));
    }
    uVar3 = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      iVar4 = 0;
      do {
        iVar2 = *(int *)(*(int *)(param_1 + 0x18) + iVar4);
        *(int *)(param_1 + 0x104) = iVar2;
        if ((*(int *)(iVar2 + 0x24) != 0) && (uVar6 = 0, *(int *)(iVar2 + 4) != 0)) {
          iVar2 = 0;
          do {
            if (*(char *)(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x104) + 8) + iVar2) * 4 +
                                  *(int *)(param_1 + 0x14)) + 0x6f) == '\x01') {
              fn_82975B00(param_1,*(unsigned int *)(*(int *)(param_1 + 0x104) + 0x3c),0x1194,
                            0xffffffff820512f0);
              uVar5 = 1;
            }
            uVar6 = uVar6 + 1;
            iVar2 = iVar2 + 4;
          } while (uVar6 < *(unsigned int *)(*(int *)(param_1 + 0x104) + 4));
        }
        iVar2 = fn_8299BD58(param_1,*(unsigned int *)(param_1 + 0x104),0);
        if (iVar2 == 0) {
          return 1;
        }
        uVar3 = uVar3 + 1;
        iVar4 = iVar4 + 4;
      } while (uVar3 < *(unsigned int *)(param_1 + 0xc));
    }
  }
  else {
    fn_82975B00(param_1,0,0x1194,0xffffffff8205133c);
    uVar5 = 1;
  }
  return uVar5;
}

