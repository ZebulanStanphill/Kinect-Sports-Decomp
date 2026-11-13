extern int fn_82C2B580();
extern int fn_82C2B590();
extern int memset();


unsigned __int64 fn_82A566A8(int *param_1)

{
  unsigned __int64 in_r7;
  unsigned __int64 uVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  int iVar4;

  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    uVar1 = 0xffffffff80070057;
  }
  else {
    if (param_1[0x5d] != 0) {
      if (0 < (int)in_r7) {
        iVar4 = 0;
        uVar3 = in_r7;
        do {
          if (*(int *)(iVar4 + param_1[0x5d]) != 0) {
            fn_82C2B590(*(int *)(iVar4 + param_1[0x5d]));
            *(unsigned int *)(iVar4 + param_1[0x5d]) = 0;
          }
          uVar3 = uVar3 - 1;
          iVar4 = iVar4 + 4;
        } while (uVar3 != 0);
      }
      if (param_1[0x5d] != 0) {
        fn_82C2B590();
        param_1[0x5d] = 0;
      }
    }
    if (param_1[0x5e] != 0) {
      if (0 < (int)in_r7) {
        iVar4 = 0;
        uVar3 = in_r7;
        do {
          if (*(int *)(iVar4 + param_1[0x5e]) != 0) {
            fn_82C2B590(*(int *)(iVar4 + param_1[0x5e]));
            *(unsigned int *)(iVar4 + param_1[0x5e]) = 0;
          }
          uVar3 = uVar3 - 1;
          iVar4 = iVar4 + 4;
        } while (uVar3 != 0);
      }
      if (param_1[0x5e] != 0) {
        fn_82C2B590();
        param_1[0x5e] = 0;
      }
    }
    lVar2 = (in_r7 & 0x3fffffff) << 2;
    uVar3 = fn_82C2B580(lVar2);
    param_1[0x5d] = (int)uVar3;
    if ((uVar3 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
      memset(uVar3,0,lVar2);
    }
    uVar1 = 0xffffffff8007000e;
  }
  return uVar1;
}
