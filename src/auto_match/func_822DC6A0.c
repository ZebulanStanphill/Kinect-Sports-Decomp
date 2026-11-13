extern int fn_822DCD18();
extern int fn_822DD580();
extern int fn_82F63CA0();


void fn_822DC6A0(char *param_1,char *param_2,unsigned __int64 param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  char *pcVar5;
  unsigned int uVar6;
  int iVar8;
  __int64 lVar7;
  char acStack_40 [8];
  char *pcStack_38;
  char *pcStack_34;
  
  uVar6 = (int)param_2 - (int)param_1;
  if (0x20 < (int)uVar6) {
    do {
      iVar8 = (int)param_3;
      if (iVar8 < 1) break;
      fn_822DCD18(&pcStack_38,param_1,param_2);
      pcVar3 = pcStack_34;
      pcVar2 = pcStack_38;
      param_3 = (__int64)(iVar8 >> 1) + (unsigned __int64)(iVar8 < 0 && (param_3 & 1) != 0);
      param_3 = (__int64)((int)param_3 >> 1) + (unsigned __int64)((int)param_3 < 0 && (param_3 & 1) != 0)
                + param_3;
      if ((int)pcStack_38 - (int)param_1 < (int)param_2 - (int)pcStack_34) {
        fn_822DC6A0(param_1,pcStack_38,param_3);
        param_1 = pcVar3;
      }
      else {
        fn_822DC6A0(pcStack_34,param_2,param_3);
        param_2 = pcVar2;
      }
      uVar6 = (int)param_2 - (int)param_1;
    } while (0x20 < (int)uVar6);
    if (0x20 < (int)uVar6) {
      if ((int)uVar6 < 2) {
        return;
      }
      lVar7 = (__int64)((int)uVar6 >> 1) + (unsigned __int64)((int)uVar6 < 0 && (uVar6 & 1) != 0);
      if (0 < lVar7) {
        do {
          lVar7 = lVar7 + -1;
          acStack_40[0] = param_1[(int)lVar7];
          fn_822DD580(param_1,lVar7,uVar6,acStack_40);
        } while (0 < (int)lVar7);
      }
      while (1 < (int)uVar6) {
        acStack_40[0] = param_1[uVar6 - 1];
        param_1[uVar6 - 1] = *param_1;
        fn_822DD580(param_1,0,uVar6 - 1,acStack_40);
        uVar6 = uVar6 - 1;
      }
      return;
    }
  }
  if ((1 < (int)uVar6) && (pcVar2 = param_1, param_1 != param_2)) {
    while (pcVar2 = pcVar2 + 1, pcVar2 != param_2) {
      cVar1 = *pcVar2;
      if (cVar1 < *param_1) {
        fn_82F63CA0(param_1 + 1,param_1);
        *param_1 = cVar1;
      }
      else {
        cVar4 = pcVar2[-1];
        pcVar3 = pcVar2;
        pcVar5 = pcVar2 + -1;
        while (cVar1 < cVar4) {
          *pcVar3 = cVar4;
          cVar4 = pcVar5[-1];
          pcVar3 = pcVar5;
          pcVar5 = pcVar5 + -1;
        }
        *pcVar3 = cVar1;
      }
    }
  }
  return;
}

