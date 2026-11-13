extern int fn_82FA5060();
extern unsigned int lbl_831BC770;


void fn_8304EAF8(int param_1,int param_2,int param_3,unsigned int param_4,unsigned int param_5,unsigned int param_6,
                  char param_7,unsigned int *param_8)

{
  unsigned int uVar1;
  int *piVar2;
  int iVar3;
  unsigned int uVar4;
  int iVar5;
  int *piVar6;
  unsigned int uVar7;
  
  if ((*(int *)(param_1 + 8) != 0) && ((*(unsigned int *)(param_2 + 8) & 4) != 0)) {
    if (param_8 == (unsigned int *)0x0) {
      uVar7 = (unsigned int)*(unsigned short *)(param_3 + 0xe);
    }
    else {
      uVar7 = *param_8;
    }
    *(unsigned int *)(param_3 + 0x14) = 0;
    *(unsigned short *)(param_3 + 0x10) = 0;
    if (param_7 == '\0') {
      uVar4 = 0;
      if (*(int *)(param_1 + 4) != 0) {
        iVar5 = 0;
        do {
          uVar1 = *(unsigned int *)(iVar5 + *(int *)(param_1 + 8) + 4);
          if ((param_4 <= uVar1) && (uVar1 < uVar7 + param_4)) {
            *(short *)(param_3 + 0x10) = *(short *)(param_3 + 0x10) + 1;
          }
          uVar4 = uVar4 + 1;
          iVar5 = iVar5 + 0xc;
        } while (uVar4 < *(unsigned int *)(param_1 + 4));
      }
    }
    else {
      uVar4 = 0;
      if (*(int *)(param_1 + 4) != 0) {
        iVar5 = 0;
        do {
          uVar1 = *(unsigned int *)(iVar5 + *(int *)(param_1 + 8) + 4);
          if (((param_4 <= uVar1) && (uVar1 < param_6)) ||
             ((param_5 <= uVar1 && (uVar1 < (uVar7 - param_6) + param_4 + param_5)))) {
            *(short *)(param_3 + 0x10) = *(short *)(param_3 + 0x10) + 1;
          }
          uVar4 = uVar4 + 1;
          iVar5 = iVar5 + 0xc;
        } while (uVar4 < *(unsigned int *)(param_1 + 4));
      }
    }
    if ((unsigned __int64)*(unsigned short *)(param_3 + 0x10) != 0) {
      piVar2 = (int *)fn_82FA5060(lbl_831BC770,(unsigned __int64)*(unsigned short *)(param_3 + 0x10) * 0x14);
      *(int **)(param_3 + 0x14) = piVar2;
      if (piVar2 == (int *)0x0) {
        *(unsigned short *)(param_3 + 0x10) = 0;
      }
      else {
        uVar4 = 0;
        if (param_7 == '\0') {
          if (*(int *)(param_1 + 4) != 0) {
            piVar6 = piVar2 + 2;
            iVar5 = 0;
            piVar2 = piVar2 + -5;
            do {
              uVar1 = *(unsigned int *)(iVar5 + *(int *)(param_1 + 8) + 4);
              if ((param_4 <= uVar1) && (uVar1 < uVar7 + param_4)) {
                piVar2 = piVar2 + 5;
                *piVar2 = param_2;
                piVar6[-1] = *(int *)(iVar5 + *(int *)(param_1 + 8) + 4) - param_4;
                iVar3 = iVar5 + *(int *)(param_1 + 8);
                *piVar6 = *(int *)(iVar5 + *(int *)(param_1 + 8));
                piVar6[1] = *(int *)(iVar3 + 4);
                piVar6[2] = *(int *)(iVar3 + 8);
                piVar6 = piVar6 + 5;
              }
              uVar4 = uVar4 + 1;
              iVar5 = iVar5 + 0xc;
            } while (uVar4 < *(unsigned int *)(param_1 + 4));
          }
        }
        else if (*(int *)(param_1 + 4) != 0) {
          iVar5 = 0;
          do {
            uVar1 = *(unsigned int *)(iVar5 + *(int *)(param_1 + 8) + 4);
            if (((param_4 <= uVar1) && (uVar1 < param_6)) ||
               ((param_5 <= uVar1 && (uVar1 < (uVar7 - param_6) + param_4 + param_5)))) {
              *piVar2 = param_2;
              uVar1 = *(unsigned int *)(iVar5 + *(int *)(param_1 + 8) + 4);
              iVar3 = uVar1 - param_4;
              if (uVar1 < param_4) {
                piVar2[1] = (iVar3 - param_5) + param_6;
              }
              else {
                piVar2[1] = iVar3;
              }
              iVar3 = iVar5 + *(int *)(param_1 + 8);
              piVar2[2] = *(int *)(iVar5 + *(int *)(param_1 + 8));
              piVar2[3] = *(int *)(iVar3 + 4);
              piVar2[4] = *(int *)(iVar3 + 8);
              piVar2 = piVar2 + 5;
            }
            uVar4 = uVar4 + 1;
            iVar5 = iVar5 + 0xc;
          } while (uVar4 < *(unsigned int *)(param_1 + 4));
        }
      }
    }
  }
  return;
}

