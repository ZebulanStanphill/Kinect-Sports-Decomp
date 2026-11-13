extern int fn_825A2410();
extern int fn_82A1DD38();
extern unsigned int lbl_831BF280;


void fn_825F6940(unsigned short *param_1,int param_2)

{
  int iVar1;
  __int64 lVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  piVar5 = *(int **)(param_1 + 2);
  piVar4 = *(int **)(param_1 + 4);
  if (piVar5 < piVar4) {
    do {
      lVar2 = (*(int (**)())(&lbl_831BF280)[*piVar5 * 2])(param_2,piVar5);
      if (lVar2 != 0) {
        iVar1 = piVar5[1];
        if (iVar1 != 0) {
          piVar3 = (int *)fn_825A2410(*(int *)(param_2 + 0x88c) * 0xc + param_2 + 0x85c);
          *piVar3 = iVar1;
          piVar3[1] = 0;
        }
        if ((int)lVar2 == 1) {
          if (piVar5 < (int *)(*(int *)(param_1 + 4) - (unsigned int)*param_1)) {
            fn_82A1DD38(piVar5);
          }
          piVar5 = piVar5 + -7;
          piVar4 = piVar4 + -7;
          *(unsigned int *)(param_1 + 4) = *(int *)(param_1 + 4) - (unsigned int)*param_1;
        }
      }
      piVar5 = piVar5 + 7;
    } while (piVar5 < piVar4);
  }
  return;
}

