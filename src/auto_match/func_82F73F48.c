extern unsigned int *auStack_28;
extern int fn_82F728D0();
extern int fn_82F72DD0();
extern int fn_82F73108();
extern int fn_82F73228();
extern int fn_82F732B0();
extern int fn_82F735D8();
extern unsigned int lbl_82169AD8;
extern unsigned int lbl_82169AE4;
extern unsigned int *lbl_832635C0;
extern unsigned int uStack_30;


unsigned __int64 * fn_82F73F48(unsigned __int64 *param_1,unsigned int *param_2,unsigned char *param_3,int param_4)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  unsigned __int64 uVar4;
  unsigned char *puVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uStack_30;
  unsigned char auStack_28 [40];
  
  uStack_30 = (unsigned __int64)(((unsigned __int64)(uStack_30) >> 32) & 0xFFFFFFFF) & 0xffffffff0000ffff;
  pcVar1 = (char *)((int)lbl_832635C0 + 1);
  cVar2 = *pcVar1;
  if (cVar2 == 'A') {
    lbl_832635C0 = pcVar1;
    if (param_4 == 0) {
      if (*(char *)*param_2 == '&') goto LAB_82f740e4;
      puVar5 = &lbl_82169AD8;
LAB_82f740f8:
      lbl_832635C0 = pcVar1;
      *param_2 = puVar5;
    }
LAB_82f74100:
    lbl_832635C0 = lbl_832635C0 + 1;
    *(unsigned char *)((int)param_1 + 4) = 0;
  }
  else {
    if (cVar2 == 'B') {
      if (param_4 == 0) {
        lbl_832635C0 = pcVar1;
        *param_3 = 1;
        fn_82F732B0(&uStack_30,0x3e);
        goto LAB_82f74100;
      }
    }
    else {
      if (cVar2 == 'C') {
LAB_82f740e4:
        puVar5 = &lbl_82169AE4;
        goto LAB_82f740f8;
      }
      if (((__int64)cVar2 == 0) ||
         (pcVar3 = (char *)((int)lbl_832635C0 + 2), (__int64)*pcVar3 == 0)) {
        lbl_832635C0 = pcVar1;
        fn_82F728D0(param_1,1);
        return param_1;
      }
      if (param_4 == 0) {
        lbl_832635C0 = (char *)((int)lbl_832635C0 + 3);
        uVar6 = (((__int64)cVar2 - 0x30U & 0xfffffff) * 0x10 + (__int64)*pcVar3) - 0x30;
        if (1 < (uVar6 & 0xffffffff)) {
          fn_82F732B0(&uStack_30,0x2c);
          uVar4 = fn_82F73108(auStack_28,uVar6 & 0xffffffff);
          fn_82F73228(&uStack_30,uVar4);
        }
        fn_82F735D8(&uStack_30,0x3e);
        if (*lbl_832635C0 == '$') {
          lbl_832635C0 = lbl_832635C0 + 1;
        }
        else {
          fn_82F735D8(&uStack_30,0x5e);
        }
        if (*lbl_832635C0 == '\0') {
          fn_82F72DD0(&uStack_30,1);
        }
        else {
          lbl_832635C0 = lbl_832635C0 + 1;
        }
        uStack_30 = uStack_30 | 0x20000;
        *param_1 = uStack_30;
        return param_1;
      }
    }
    lbl_832635C0 = pcVar1;
    *(unsigned char *)((int)param_1 + 4) = 2;
  }
  *(unsigned int *)param_1 = 0;
  *(unsigned char *)((int)param_1 + 5) = 0;
  return param_1;
}

