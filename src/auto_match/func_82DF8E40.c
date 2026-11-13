extern unsigned int *auStack_70;
extern int fn_82DF8C10();


void fn_82DF8E40(unsigned __int64 param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  unsigned char auStack_70 [4];
  int aiStack_6c;
  
  if (param_2[4] == 0) {
    iVar4 = -1;
    iVar8 = 0;
  }
  else {
    iVar4 = 0;
    iVar8 = *(int *)param_2[3];
  }
  iVar2 = 0;
  auStack_70[0] = 0;
  if (0 < param_2[1]) {
    iVar3 = 0;
    do {
      piVar1 = *(int **)(iVar3 + *param_2);
      piVar9 = piVar1 + 4;
      piVar5 = (int *)((int)piVar1 + *piVar1 + 0x10);
      if (piVar1 + 4 < piVar5) {
        iVar6 = iVar4 << 2;
        iVar7 = iVar4 + 1;
        do {
          aiStack_6c = 0;
          if ((iVar8 != 0) &&
             ((*(int *)(iVar8 + 0x18) != iVar2 ||
              (*(int *)(iVar8 + 0x1c) < (int)piVar9 + (-0x10 - (int)piVar1))))) {
            auStack_70[0] = 0;
            if (iVar7 < param_2[4]) {
              iVar6 = iVar6 + 4;
              iVar4 = iVar4 + 1;
              iVar7 = iVar7 + 1;
              iVar8 = *(int *)(param_2[3] + iVar6);
            }
            else {
              iVar8 = 0;
            }
          }
          fn_82DF8C10(param_1,piVar9,iVar8,0,&aiStack_6c,auStack_70);
          piVar9 = (int *)(aiStack_6c + (int)piVar9);
        } while (piVar9 < piVar5);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar2 < param_2[1]);
  }
  return;
}

