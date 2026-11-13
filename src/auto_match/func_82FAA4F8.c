extern unsigned int *auStack_50;
extern int fn_82FA7848();
extern int fn_82FA8948();
extern int fn_82FA8A88();
extern int fn_82FA8F30();
extern int fn_82FA9208();
extern int fn_82FA9DC8();
extern unsigned int lbl_83264230;


void fn_82FAA4F8(int param_1,__int64 param_2,__int64 param_3)

{
  int iVar1;
  __int64 lVar2;
  int iVar3;
  int *piVar4;
  unsigned int auStack_50 [20];
  
  iVar3 = (int)param_3;
  if (*(int *)(param_1 + 0x40) != 0) {
    lVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x20) + param_2;
    if ((-1 < lVar2) && ((int)lVar2 < iVar3)) {
      if (*(short *)(param_1 + 0x30) == 0) {
        fn_82FA8948(*(int *)(param_1 + 0x40),param_1 + 0x24);
      }
      else {
        *(unsigned short *)(param_1 + 0x32) = *(unsigned short *)(param_1 + 0x32) | 0x8000;
      }
    }
    lVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x34) + param_2;
    if ((-1 < lVar2) && ((int)lVar2 < iVar3)) {
      fn_82FA8A88(*(unsigned int *)(param_1 + 0x40),param_1 + 0x38);
    }
  }
  piVar4 = *(int **)(param_1 + 0x14);
  if (piVar4 != *(int **)(param_1 + 0x18)) {
    do {
      if (*piVar4 + (int)param_2 < iVar3) {
        if (piVar4[1] == 0) {
          auStack_50[0] = 0;
          iVar1 = *(int *)(piVar4[2] + 0x10);
          if ((*(unsigned int *)(piVar4[2] + 0x14) & 0x80000000) == 0) {
            fn_82FA8F30(iVar1,auStack_50);
            iVar1 = piVar4[2];
            *piVar4 = *(int *)(iVar1 + 0xc) + *piVar4;
            *(unsigned int *)(iVar1 + 0x14) = *(unsigned int *)(iVar1 + 0x14) | 0x80000000;
            goto LAB_82faa6bc;
          }
          if (iVar1 != 0) {
            fn_82FA8A88(iVar1,auStack_50);
            iVar1 = *(int *)(piVar4[2] + 0x10);
            *(unsigned int *)(piVar4[2] + 0x10) = 0;
            if (iVar1 != 0) {
              fn_82FA9208();
            }
          }
          *(unsigned int *)(piVar4[2] + 0x14) = *(unsigned int *)(piVar4[2] + 0x14) & 0x7fffffff;
          iVar1 = *(int *)(param_1 + 0x18);
          if (1 < (unsigned int)((iVar1 - *(int *)(param_1 + 0x14)) / 0xc)) {
            *piVar4 = *(int *)(iVar1 + -0xc);
            piVar4[1] = *(int *)(iVar1 + -8);
            piVar4[2] = *(int *)(iVar1 + -4);
          }
LAB_82faa684:
          *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -0xc;
        }
        else if (piVar4[1] == 1) {
          fn_82FA7848(lbl_83264230,piVar4[2]);
          iVar1 = *(int *)(param_1 + 0x18);
          if ((unsigned int)((iVar1 - *(int *)(param_1 + 0x14)) / 0xc) < 2) goto LAB_82faa684;
          *piVar4 = *(int *)(iVar1 + -0xc);
          piVar4[1] = *(int *)(iVar1 + -8);
          piVar4[2] = *(int *)(iVar1 + -4);
          *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -0xc;
        }
      }
      else {
LAB_82faa6bc:
        piVar4 = piVar4 + 3;
      }
    } while (piVar4 != *(int **)(param_1 + 0x18));
  }
  fn_82FA9DC8(param_1,param_3 - param_2);
  return;
}

