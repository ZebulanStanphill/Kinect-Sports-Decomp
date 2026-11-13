extern int fn_82AB15D0();
extern int fn_82AB6648();
extern int fn_82AB6770();
extern int fn_82B6E928();


__int64 fn_82B6D458(unsigned int *param_1,unsigned __int64 param_2,unsigned int *param_3,int param_4)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  int iVar3;
  __int64 lVar4;
  
  lVar4 = 0;
  if (param_1 == (unsigned int *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d77ac,0xffffffff820d9f48,0x2dd);
  }
  if ((param_2 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9f3c,0xffffffff820d9f48,0x2de);
  }
  if (param_3 == (unsigned int *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da0a8,0xffffffff820d9f48,0x2df);
  }
  if (*(int *)param_3[8] == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da080,0xffffffff820d9f48,0x2e2);
  }
  if ((unsigned __int64)param_3[8] == 0xfffffffffffffff8) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da064,0xffffffff820d9f48,0x2e3);
  }
  if (*param_3 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da048,0xffffffff820d9f48,0x2e4);
  }
  uVar1 = *param_3;
  *param_3 = (unsigned int)((unsigned __int64)uVar1 - 1);
  if ((unsigned __int64)uVar1 - 1 == 0) {
    puVar2 = (unsigned int *)fn_82B6E928(param_2,(unsigned int *)param_3[8] + 2,
                                       *(unsigned int *)param_3[8]);
    if (puVar2 != param_3) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da028,0xffffffff820d9f48,0x2f2);
    }
    if (puVar2[6] != 0) {
      if ((param_4 < 0) || (7 < param_4)) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9fe8,0xffffffff820d9f48,0x2fa);
      }
      if (puVar2[5] == 0) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9fc0,0xffffffff820d9f48,0x2fe);
      }
      param_1[param_4 + 0x47] = param_1[param_4 + 0x47] + *(int *)puVar2[8] * -4;
      (*(int (**)())param_1[4])(*param_1,puVar2 + 1);
      fn_82AB6648(param_1[param_4 + 0xf],puVar2[6]);
      fn_82AB6770();
    }
    iVar3 = (*(int (**)())param_1[2])(*param_1,param_3[8]);
    if (iVar3 != 0) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9fac,0xffffffff820d9f48,0x312);
    }
    lVar4 = (*(int (**)())param_1[2])(*param_1,param_3);
    if (lVar4 != 0) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9fac,0xffffffff820d9f48,0x31b);
    }
  }
  return lVar4;
}

