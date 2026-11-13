extern int fn_82F01808();
extern int fn_82F02A98();
extern int fn_82F02BB8();
extern int fn_82F02E20();
extern int fn_82F03068();
extern int fn_82F03248();
extern int fn_82F0F9A0();


void fn_82F03E00(int param_1)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  
  if (*(int *)(param_1 + 0x76c8) == 0) {
    if (*(int *)(param_1 + 0x1c2c) != 0) {
      *(unsigned int *)(param_1 + 0x1c2c) = 0;
      iVar2 = *(int *)(param_1 + 0x10) * 0xc + param_1;
      *(unsigned int *)(param_1 + 0x1ee8) =
           *(unsigned int *)((*(int *)(param_1 + 0x10) + 0x7bb) * 4 + param_1);
      *(unsigned int *)(param_1 + 0x1d84) = *(unsigned int *)(iVar2 + 0x1ce4);
      *(unsigned int *)(param_1 + 0x1d88) = *(unsigned int *)(iVar2 + 0x1ce8);
      *(unsigned int *)(param_1 + 0x1d8c) = *(unsigned int *)(iVar2 + 0x1cec);
      fn_82F02A98(param_1,*(unsigned int *)(param_1 + 0x10));
      fn_82F03248();
    }
    iVar2 = *(int *)(param_1 + 0xaf0);
    if ((iVar2 == 1) || (iVar2 == 2)) {
      iVar1 = *(int *)(param_1 + 0x6a4);
      if ((*(int *)(param_1 + 0x10) != iVar1) && ((*(int *)(param_1 + 0x1c34) == 0 && (iVar2 != 2)))
         ) {
        iVar2 = iVar1 * 0x58 + param_1;
        uVar3 = (unsigned __int64)*(unsigned int *)(iVar2 + 0x6f4);
        if (*(int *)(param_1 + 0x10) < iVar1) {
          fn_82F02E20();
        }
        else {
          fn_82F02BB8(param_1,(unsigned __int64)*(unsigned int *)(iVar2 + 0x6f0) +
                                    (unsigned __int64)*(unsigned int *)(param_1 + 0x14),
                            *(unsigned int *)(param_1 + 0x18) + uVar3,*(unsigned int *)(param_1 + 0x1c) + uVar3,
                            *(unsigned int *)(param_1 + 0x4a94),*(unsigned int *)(param_1 + 0x4a98),
                            *(unsigned int *)(param_1 + 0x4a9c));
        }
        *(unsigned int *)(param_1 + 0x1c34) = 1;
        fn_82F01808(param_1);
        fn_82F0F9A0(param_1,0);
        if (*(int *)(param_1 + 0x1eb8) == 0) {
          *(unsigned int *)(param_1 + 0x76bc) = 1;
        }
      }
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      fn_82F03068(param_1,*(unsigned int *)(param_1 + 0x4aa0));
      *(unsigned int *)(param_1 + 0x4aa0) = *(unsigned int *)(param_1 + 0x1c40);
      if (*(int *)(param_1 + 0x1eb8) == 0) {
        *(unsigned int *)(param_1 + 0x76bc) = 1;
      }
    }
    iVar2 = *(int *)(param_1 + 0x4aa0);
    *(int *)(param_1 + 0x1abc) = *(int *)(param_1 + 0x1d84) + iVar2;
    *(int *)(param_1 + 0x1ac0) = *(int *)(param_1 + 0x1d88) + iVar2;
    *(int *)(param_1 + 0x1ac4) = *(int *)(param_1 + 0x1d8c) + iVar2;
  }
  return;
}

