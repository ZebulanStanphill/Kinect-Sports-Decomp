#define true 1
extern int _blkmov();
extern int fn_82FA5190();
extern int fn_83019FD0();
extern unsigned int lbl_831BC768;


void fn_830182F0(int param_1,int param_2,int param_3,int param_4,char *param_5)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  int iVar5;
  int *piVar6;
  
  iVar5 = param_1 + 0x720;
  RtlEnterCriticalSection(iVar5);
  puVar4 = *(unsigned int **)(param_1 + 0x6a0);
  puVar3 = (unsigned int *)0x0;
  do {
    puVar2 = puVar4;
    if (puVar2 == (unsigned int *)0x0) {
      if (param_5 != (char *)0x0) {
        *param_5 = '\0';
      }
LAB_8301836c:
      RtlLeaveCriticalSection(iVar5);
      return;
    }
    if ((puVar2[1] == param_2) && (puVar2[2] == param_3)) {
      if (param_5 != (char *)0x0) {
        *param_5 = '\x01' - (puVar2[5] == puVar2[6]);
      }
      piVar6 = (int *)puVar2[5];
      if (piVar6 != (int *)puVar2[6]) {
        while (*piVar6 != param_4) {
          piVar6 = piVar6 + 5;
          if (piVar6 == (int *)puVar2[6]) {
            RtlLeaveCriticalSection(iVar5);
            return;
          }
        }
        if (piVar6[2] != 0) {
          fn_82FA5190(lbl_831BC768);
          piVar6[2] = 0;
        }
        piVar6[3] = 0;
        piVar6[4] = 0;
        if (piVar6 < (int *)(puVar2[6] - 0x14)) {
          _blkmov(piVar6,piVar6 + 5,(((puVar2[6] - (int)piVar6) - 0x15U) / 0x14 + 1) * 0x14);
        }
        iVar1 = puVar2[6];
        puVar2[6] = iVar1 + -0x14;
        if (iVar1 + -0x14 == puVar2[5]) {
          if (param_5 != (char *)0x0) {
            *param_5 = '\0';
          }
          fn_83019FD0(puVar2 + 1);
          if (puVar2 == *(unsigned int **)(param_1 + 0x6a0)) {
            *(unsigned int *)(param_1 + 0x6a0) = *puVar2;
          }
          else {
            *puVar3 = *puVar2;
          }
          if (puVar2 == *(unsigned int **)(param_1 + 0x6a4)) {
            *(unsigned int **)(param_1 + 0x6a4) = puVar3;
          }
          *puVar2 = *(unsigned int *)(param_1 + 0x6a8);
          *(unsigned int **)(param_1 + 0x6a8) = puVar2;
          *(int *)(param_1 + 0x6b4) = *(int *)(param_1 + 0x6b4) + -1;
          RtlLeaveCriticalSection(iVar5);
          return;
        }
      }
      goto LAB_8301836c;
    }
    puVar4 = (unsigned int *)*puVar2;
    puVar3 = puVar2;
  } while( true );
}

