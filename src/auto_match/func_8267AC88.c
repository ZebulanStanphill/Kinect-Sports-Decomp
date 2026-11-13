extern int fn_8267AA50();
extern int fn_8267BE38();


void fn_8267AC88(char *param_1,int param_2)

{
  unsigned int uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  int *piVar4;
  
  if (*param_1 == '\0') {
    if (*(int *)(param_1 + 4) == param_2) {
      param_1[4] = '\0';
      param_1[5] = '\0';
      param_1[6] = '\0';
      param_1[7] = '\0';
    }
  }
  else {
    piVar4 = *(int **)(param_1 + 4);
    uVar3 = 0;
    if (piVar4[1] != 0) {
      iVar2 = 0;
      do {
        if (*(int *)(*piVar4 + iVar2) == param_2) {
          fn_8267AA50(piVar4,uVar3);
          piVar4 = *(int **)(param_1 + 4);
          if (piVar4[1] == 1) {
            uVar1 = *(unsigned int *)*piVar4;
            if (piVar4 != (int *)0x0) {
              fn_8267BE38((unsigned int *)*piVar4);
              fn_8267BE38(piVar4);
            }
            *(unsigned int *)(param_1 + 4) = uVar1;
            *param_1 = '\0';
            return;
          }
        }
        uVar3 = uVar3 + 1;
        iVar2 = iVar2 + 4;
      } while ((uVar3 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 4) + 4));
    }
  }
  return;
}

