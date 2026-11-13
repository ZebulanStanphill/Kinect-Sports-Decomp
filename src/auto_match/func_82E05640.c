extern int fn_82CE4040();
extern int fn_82CE4118();
extern int fn_82E05480();


void fn_82E05640(int *param_1,unsigned int param_2,unsigned __int64 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  __int64 lVar6;
  int *piVar7;
  int aiStack_60 [4];
  
  for (lVar6 = (__int64)((int)param_2 >> 1) + (unsigned __int64)((int)param_2 < 0 && (param_2 & 1) != 0);
      0 < lVar6; lVar6 = lVar6 + -1) {
    fn_82E05480(param_1,lVar6,param_2,param_3);
  }
  if (0 < (int)param_2) {
    piVar5 = param_1 + param_2 * 3;
    do {
      piVar7 = piVar5 + -3;
      if (*param_1 != 0) {
        fn_82CE4040();
      }
      iVar1 = *param_1;
      iVar2 = param_1[1];
      iVar3 = param_1[2];
      if (param_1 != piVar7) {
        iVar4 = *piVar7;
        if (iVar4 != 0) {
          fn_82CE4040(iVar4);
        }
        if (*param_1 != 0) {
          fn_82CE4118();
        }
        *param_1 = iVar4;
      }
      param_1[1] = piVar5[-2];
      param_1[2] = piVar5[-1];
      if (piVar7 != aiStack_60) {
        if (iVar1 != 0) {
          fn_82CE4040(iVar1);
        }
        if (*piVar7 != 0) {
          fn_82CE4118();
        }
        *piVar7 = iVar1;
      }
      piVar5[-2] = iVar2;
      param_2 = param_2 - 1;
      piVar5[-1] = iVar3;
      fn_82E05480(param_1,1,param_2,param_3);
      if (iVar1 != 0) {
        fn_82CE4118(iVar1);
      }
      piVar5 = piVar7;
    } while (0 < (int)param_2);
  }
  return;
}

