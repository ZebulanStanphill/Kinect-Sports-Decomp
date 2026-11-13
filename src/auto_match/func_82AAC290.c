void fn_82AAC290(int param_1,short *param_2,int param_3,int param_4,__int64 param_5)

{
  int *piVar1;
  int iVar2;
  short *psVar3;
  int *piVar4;
  __int64 lVar5;
  
  if (0 < (int)param_5) {
    do {
      iVar2 = 0;
      psVar3 = param_2;
      if (0 < param_4) {
        do {
          piVar4 = (int *)(param_1 + -4);
          lVar5 = 2;
          do {
            piVar4 = piVar4 + 1;
            *psVar3 = *(short *)(*piVar4 + iVar2 * 2) + -0x8000;
            psVar3 = psVar3 + 1;
            lVar5 = lVar5 + -1;
          } while (lVar5 != 0);
          iVar2 = iVar2 + 1;
        } while (iVar2 < param_4);
      }
      piVar4 = (int *)(param_1 + -4);
      lVar5 = 2;
      do {
        piVar1 = piVar4 + 1;
        piVar4 = piVar4 + 1;
        *piVar4 = *piVar1 + param_4 * 2;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      param_5 = param_5 + -1;
      param_2 = (short *)((int)param_2 + param_3);
    } while (param_5 != 0);
  }
  return;
}

