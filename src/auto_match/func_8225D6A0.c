extern int fn_8225D388();
extern int fn_823AB478();
extern int fn_828EA608();
extern int fn_82F63CA0();


void fn_8225D6A0(int param_1,int param_2)

{
  int iVar1;
  char cVar3;
  unsigned __int64 uVar2;
  int *piVar4;
  
  if (*(int *)(param_1 + 100) == 0) {
    *(unsigned int *)(param_1 + 100) = 1;
    if (param_2 != 0) {
      for (piVar4 = *(int **)(param_1 + 0x10); piVar4 != *(int **)(param_1 + 0x14);
          piVar4 = piVar4 + 1) {
        iVar1 = *piVar4;
        if ((*(char *)(iVar1 + 0xd8) != '\0') && (cVar3 = fn_828EA608(iVar1), cVar3 != '\0')) {
          uVar2 = fn_823AB478(iVar1);
          fn_8225D388(param_1,uVar2);
        }
      }
    }
    *(unsigned int *)(param_1 + 0x30) = 0;
    iVar1 = *(int *)(param_1 + 0x10);
    if (iVar1 != *(int *)(param_1 + 0x14)) {
      fn_82F63CA0(iVar1,*(int *)(param_1 + 0x14),0);
      *(int *)(param_1 + 0x14) = iVar1;
    }
    *(unsigned int *)(param_1 + 100) = 0;
  }
  return;
}

