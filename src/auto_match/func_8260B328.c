extern int fn_8284D890();


void fn_8260B328(int param_1,int *param_2,int *param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int aiStack_60 [2];
  __int64 lStack_58;
  
  iVar9 = *param_2;
  iVar8 = 0;
  if (0 < *(int *)(iVar9 + 8)) {
    iVar10 = 0;
    do {
      pcVar4 = *(char **)(*(int *)(iVar9 + 0xc) + iVar10 + 4);
      if (param_3 != (int *)0x0) {
        iVar3 = 0;
        if (0 < param_3[1]) {
          iVar5 = 0;
          do {
            pcVar7 = *(char **)(iVar5 + *param_3);
            pcVar6 = pcVar4;
            do {
              cVar1 = *pcVar7;
              cVar2 = *pcVar6;
              if (cVar1 == '\0') break;
              pcVar7 = pcVar7 + 1;
              pcVar6 = pcVar6 + 1;
            } while (cVar1 == cVar2);
            if (cVar1 == cVar2) {
              pcVar4 = *(char **)(iVar5 + *param_3 + 4);
            }
            iVar3 = iVar3 + 1;
            iVar5 = iVar5 + 8;
          } while (iVar3 < param_3[1]);
        }
      }
      iVar3 = fn_8284D890(*(unsigned int *)(param_1 + 0xb4),pcVar4,0xffffffff821c81d0,aiStack_60);
      if (iVar3 != 0) {
        lStack_58 = (__int64)*(int *)(*(int *)(iVar9 + 0xc) + iVar10 + 0x5c);
        *(float *)(*(int *)(param_1 + 0xbc) + aiStack_60[0] * 4) = (float)lStack_58;
      }
      iVar8 = iVar8 + 1;
      iVar10 = iVar10 + 100;
    } while (iVar8 < *(int *)(iVar9 + 8));
  }
  iVar9 = 0;
  if (0 < param_2[0xb]) {
    iVar10 = 0;
    iVar8 = 0;
    do {
      if (*(int *)(iVar10 + param_2[10]) != 0) {
        fn_8260B328(param_1,*(unsigned int *)(iVar10 + param_2[10]),
                      *(unsigned int *)(*(int *)(*(int *)(param_1 + 0xb4) + 0x128) + iVar8 + 0x1c));
      }
      iVar9 = iVar9 + 1;
      iVar8 = iVar8 + 0x20;
      iVar10 = iVar10 + 4;
    } while (iVar9 < param_2[0xb]);
  }
  return;
}

