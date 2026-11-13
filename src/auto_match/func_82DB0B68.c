extern int fn_82D35890();
extern int fn_82D93438();


void fn_82DB0B68(int param_1,int param_2)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0x24) != '\0') {
    sVar1 = fn_82D93438((int)*(char *)(param_2 + 0x20) + param_2 + 0x10);
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x48)) {
      piVar2 = *(int **)(param_1 + 0x44);
      do {
        if (*piVar2 == param_2 + 0x10) {
          if (iVar4 != -1) {
            iVar3 = *(int *)(param_1 + 0x48) + -1;
            *(int *)(param_1 + 0x48) = iVar3;
            if (iVar3 == iVar4) {
              return;
            }
            *(unsigned int *)(iVar4 * 4 + *(int *)(param_1 + 0x44)) =
                 *(unsigned int *)(iVar3 * 4 + *(int *)(param_1 + 0x44));
            return;
          }
          break;
        }
        iVar4 = iVar4 + 1;
        piVar2 = piVar2 + 1;
      } while (iVar4 < *(int *)(param_1 + 0x48));
    }
    if (sVar1 != -1) {
      fn_82D35890(*(unsigned int *)(param_1 + 0xc));
    }
  }
  return;
}

