extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern int fn_82681D00();
extern int fn_826826A8();
extern int fn_82682D30();
extern int fn_82683270();
extern int fn_82693410();
extern int fn_82695DA0();
extern int fn_82696330();
extern int fn_826C9858();
extern int fn_82700B38();
extern int fn_82704A98();


unsigned __int64 fn_827050F0(int param_1,int *param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                       __int64 param_5,__int64 param_6)

{
  unsigned int uVar1;
  __int64 lVar2;
  int iVar4;
  __int64 lVar3;
  unsigned __int64 uVar5;
  unsigned int *puVar6;
  unsigned char auStack_80 [16];
  unsigned char auStack_70 [16];
  
  if (param_2 != (int *)0x0) {
    lVar2 = fn_82693410();
    auStack_80[0] = 0;
    *(int *)(param_1 + 0xb88) = *(int *)(param_1 + 0xb88) + 1;
    iVar4 = (**(int (***)())(*param_2 + 0x5c))(param_2);
    uVar5 = param_6 - 1;
    if (-1 < (__int64)uVar5) {
      puVar6 = (unsigned int *)(iVar4 + 8);
      param_5 = (uVar5 & 0xfffffff) * 0x10 + param_5;
      do {
        auStack_70[0] = 0;
        fn_82681D00(param_1,param_5,auStack_70);
        uVar1 = *puVar6;
        *puVar6 = uVar1 + 0x10;
        if (*(unsigned int *)(iVar4 + 0x10) <= uVar1 + 0x10) {
          fn_826826A8(puVar6);
        }
        if (*puVar6 != 0) {
          fn_82695DA0(*puVar6,auStack_70);
        }
        fn_82696330(auStack_70);
        uVar5 = uVar5 - 1;
        param_5 = param_5 + -0x10;
      } while (-1 < (__int64)uVar5);
    }
    if ((*(int *)(param_1 + 0xa00) == 0) || (lVar3 = fn_82704A98(param_1,param_3), lVar3 == 0)) {
      uVar5 = fn_826C9858(param_2,param_3,auStack_80,param_6);
    }
    else {
      uVar5 = fn_82700B38(param_1,param_3,lVar3,auStack_80,param_6);
    }
    fn_82683270(iVar4 + 8,param_6);
    if (((uVar5 & 0xff) != 0) && ((param_4 & 0xffffffff) != 0)) {
      fn_82682D30(param_1,iVar4,auStack_80,param_4);
    }
    fn_82696330(auStack_80);
    lVar3 = fn_82693410();
    *(__int64 *)(param_1 + 0xb58) = *(__int64 *)(param_1 + 0xb58) + (lVar3 - lVar2);
    return uVar5;
  }
  return 0;
}

