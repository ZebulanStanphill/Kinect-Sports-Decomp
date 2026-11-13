extern int fn_82AB15D0();
extern int fn_82AB6BC8();


unsigned __int64 fn_82B7F170(unsigned int *param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  __int64 lVar3;
  int *piVar4;
  
  if (param_1 == (unsigned int *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9f38,0xffffffff820dbba0,0xcb);
  }
  if (param_1[0x12] == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dbb88,0xffffffff820dbba0,0xcc);
  }
  uVar1 = param_1[0x12];
  param_1[0x12] = (int)((unsigned __int64)uVar1 - 1);
  if ((unsigned __int64)uVar1 - 1 == 0) {
    uVar2 = *param_1;
    if (param_1[0xe] != 0) {
      (*(int (**)())param_1[2])(uVar2);
    }
    if (param_1[0xf] != 0) {
      (*(int (**)())param_1[2])(uVar2);
    }
    if (param_1[0xc] != 0) {
      fn_82AB6BC8();
    }
    if (param_1[0xd] != 0) {
      fn_82AB6BC8();
    }
    piVar4 = param_1 + 6;
    lVar3 = 6;
    do {
      if (*piVar4 != 0) {
        (*(int (**)())param_1[2])(uVar2);
      }
      lVar3 = lVar3 + -1;
      piVar4 = piVar4 + 1;
    } while (lVar3 != 0);
    (*(int (**)())param_1[2])(uVar2,param_1);
  }
  return 0;
}

