extern int fn_83036648();
extern int fn_83036710();
extern unsigned int iStack_60;


void fn_8300D4C0(int *param_1)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  unsigned int uVar7;
  int iVar8;
  int iStack_60;
  int aiStack_5c;
  
  uVar2 = 0;
  if (*(char *)((int)param_1 + 0x4d) != '\0') {
    do {
      uVar3 = 0;
      piVar6 = param_1 + (uVar2 + 1) * 3;
      iVar4 = param_1[(uVar2 + 1) * 3];
      if (piVar6[1] - iVar4 >> 3 != 0) {
        iVar5 = 0;
        do {
          iVar4 = iVar5 + iVar4;
          if (*(int *)(iVar4 + 4) != 0) {
            iVar1 = *param_1;
            uVar7 = 0;
            if (param_1[1] - iVar1 >> 3 != 0) {
              iVar8 = 0;
              do {
                fn_83036648(*(unsigned int *)(iVar1 + 4),uVar2,*(unsigned int *)(iVar5 + *piVar6),
                                &iStack_60,&aiStack_5c);
                if ((iStack_60 != 0) && (*(short *)(iStack_60 + 0xe) != 0)) {
                  (**(int (***)())(**(int **)(iVar4 + 4) + 0x18))();
                }
                if ((aiStack_5c != 0) && (*(short *)(aiStack_5c + 0xe) != 0)) {
                  (**(int (***)())(**(int **)(iVar4 + 4) + 0x1c))();
                }
                uVar7 = uVar7 + 1;
                iVar8 = iVar8 + 8;
                iVar1 = iVar8 + *param_1;
              } while (uVar7 < (unsigned int)(param_1[1] - *param_1 >> 3));
            }
            (**(int (***)())(**(int **)(iVar4 + 4) + 0x20))();
          }
          iVar4 = *piVar6;
          uVar3 = uVar3 + 1;
          iVar5 = iVar5 + 8;
        } while (uVar3 < (unsigned int)(piVar6[1] - iVar4 >> 3));
      }
      uVar2 = uVar2 + 1 & 0xff;
    } while (uVar2 < *(unsigned char *)((int)param_1 + 0x4d));
  }
  iVar4 = *param_1;
  uVar2 = 0;
  if (param_1[1] - iVar4 >> 3 != 0) {
    iVar5 = 0;
    do {
      fn_83036710(*(unsigned int *)(iVar4 + 4));
      uVar2 = uVar2 + 1;
      iVar5 = iVar5 + 8;
      iVar4 = iVar5 + *param_1;
    } while (uVar2 < (unsigned int)(param_1[1] - *param_1 >> 3));
  }
  return;
}

