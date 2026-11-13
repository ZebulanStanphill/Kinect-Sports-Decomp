extern int fn_82FA5190();
extern int fn_83036C28();
extern unsigned int lbl_831BC768;
extern unsigned int lbl_831BC770;


void fn_8300DD58(int *param_1)

{
  int *piVar1;
  int *piVar2;
  __int64 lVar3;
  unsigned int uVar4;
  int iVar5;
  int *piVar6;
  
  uVar4 = 0;
  if (param_1[1] - *param_1 >> 3 != 0) {
    iVar5 = 0;
    do {
      fn_83036C28(*(unsigned int *)(iVar5 + *param_1 + 4));
      fn_82FA5190(lbl_831BC770,*(unsigned int *)(iVar5 + *param_1 + 4));
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 8;
    } while (uVar4 < (unsigned int)(param_1[1] - *param_1 >> 3));
  }
  lVar3 = 4;
  piVar2 = param_1;
  do {
    piVar6 = piVar2 + 3;
    uVar4 = 0;
    if (piVar2[4] - *piVar6 >> 3 != 0) {
      iVar5 = 0;
      do {
        piVar1 = *(int **)(*piVar6 + iVar5 + 4);
        if (piVar1 != (int *)0x0) {
          (**(int (***)())(*piVar1 + 4))(piVar1,0xffffffff831bc7fc);
          *(unsigned int *)(*piVar6 + iVar5 + 4) = 0;
        }
        uVar4 = uVar4 + 1;
        iVar5 = iVar5 + 8;
      } while (uVar4 < (unsigned int)(piVar2[4] - *piVar6 >> 3));
    }
    if (*piVar6 != 0) {
      piVar2[4] = *piVar6;
      fn_82FA5190(lbl_831BC768);
      *piVar6 = 0;
      piVar2[4] = 0;
      piVar2[5] = 0;
    }
    lVar3 = lVar3 + -1;
    piVar2 = piVar6;
  } while (lVar3 != 0);
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    fn_82FA5190(lbl_831BC768);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

