extern unsigned int *auStack_60;
extern int fn_82FAB9C0();
extern unsigned int lbl_832642E0;


unsigned __int64 fn_83021A98(int param_1,unsigned int *param_2,int param_3)

{
  int *piVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  int *piVar4;
  __int64 lVar5;
  unsigned int auStack_60;
  
  piVar4 = *(int **)(param_1 + 0x10);
  auStack_60 = 0;
  lVar5 = 0;
  uVar3 = 1;
  if (piVar4 != *(int **)(param_1 + 0x14)) {
    do {
      if ((*(unsigned int *)(*piVar4 + 0x14) & 0xffffff00) == 0x401100) {
        uVar2 = *(unsigned int *)(*piVar4 + 0x10);
        piVar1 = (int *)fn_82FAB9C0((unsigned __int64)lbl_832642E0 + 4,uVar2);
        if (piVar1 == (int *)0x0) {
          return 0x3d;
        }
        if (*param_2 != 0) {
          *(unsigned int *)(auStack_60 * 0xc + param_3) = uVar2;
          if (piVar1[4] == 0) {
            uVar2 = 0;
          }
          else {
            uVar2 = *(unsigned int *)(piVar1[4] + 0xc);
          }
          *(unsigned int *)(auStack_60 * 0xc + param_3 + 4) = uVar2;
          *(int *)(auStack_60 * 0xc + param_3 + 8) = (int)lVar5;
          if (*param_2 <= auStack_60 + 1) {
            auStack_60 = auStack_60 + 1;
            (**(int (***)())(*piVar1 + 8))(piVar1);
            break;
          }
        }
        auStack_60 = auStack_60 + 1;
        lVar5 = lVar5 + 1;
        uVar3 = (**(int (***)())(*piVar1 + 0x70))(piVar1,param_2,param_3,&auStack_60,lVar5);
        (**(int (***)())(*piVar1 + 8))(piVar1);
        if ((int)uVar3 != 1) goto LAB_83021c28;
      }
      piVar4 = piVar4 + 1;
    } while (piVar4 != *(int **)(param_1 + 0x14));
  }
  if (*param_2 == 0) {
    uVar3 = 3;
  }
LAB_83021c28:
  *param_2 = auStack_60;
  return uVar3;
}

