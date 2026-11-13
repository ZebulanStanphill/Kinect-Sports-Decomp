extern int fn_8267BE38();
extern int fn_8276CBA8();


void fn_8276D860(int param_1,int param_2)

{
  unsigned int uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  int *piVar4;
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    if (*(int *)(param_1 + 0x24) == param_2) {
      *(unsigned int *)(param_1 + 0x24) = 0;
    }
  }
  else {
    piVar4 = *(int **)(param_1 + 0x24);
    uVar3 = 0;
    if (piVar4[1] != 0) {
      iVar2 = 0;
      do {
        if (*(int *)(*piVar4 + iVar2) == param_2) {
          fn_8276CBA8(piVar4,uVar3);
          piVar4 = *(int **)(param_1 + 0x24);
          if (piVar4[1] == 1) {
            uVar1 = *(unsigned int *)*piVar4;
            if (piVar4 != (int *)0x0) {
              fn_8267BE38((unsigned int *)*piVar4);
              fn_8267BE38(piVar4);
            }
            *(unsigned int *)(param_1 + 0x24) = uVar1;
            *(unsigned char *)(param_1 + 0x20) = 0;
            return;
          }
        }
        uVar3 = uVar3 + 1;
        iVar2 = iVar2 + 4;
      } while ((uVar3 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x24) + 4));
    }
  }
  return;
}

