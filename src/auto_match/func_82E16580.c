extern int fn_82CEA480();
extern int fn_82D002A8();
extern int fn_82D00450();


void fn_82E16580(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if ((*(int *)(param_1 + 0x30) != 0) && (0 < *(int *)(param_1 + 0x20))) {
    iVar3 = 0;
    if (-1 < *(int *)(param_1 + 0x18)) {
      piVar2 = *(int **)(param_1 + 0x10);
      do {
        if (*piVar2 != -1) break;
        iVar3 = iVar3 + 1;
        piVar2 = piVar2 + 2;
      } while (iVar3 <= *(int *)(param_1 + 0x18));
    }
    if (iVar3 <= *(int *)(param_1 + 0x18)) {
      do {
        iVar1 = fn_82D00450(param_1 + 0x1c,
                                  *(unsigned int *)(iVar3 * 8 + *(int *)(param_1 + 0x10) + 4),0);
        if ((iVar1 != 0) && (*(int (***)())(iVar1 + 8) != (int (**)())0x0)) {
          (**(int (***)())(iVar1 + 8))(*(unsigned int *)(iVar3 * 8 + *(int *)(param_1 + 0x10)));
        }
        iVar3 = iVar3 + 1;
        if (iVar3 <= *(int *)(param_1 + 0x18)) {
          piVar2 = (int *)(iVar3 * 8 + *(int *)(param_1 + 0x10));
          do {
            if (*piVar2 != -1) break;
            iVar3 = iVar3 + 1;
            piVar2 = piVar2 + 2;
          } while (iVar3 <= *(int *)(param_1 + 0x18));
        }
      } while (iVar3 <= *(int *)(param_1 + 0x18));
    }
  }
  *(unsigned int *)(param_1 + 8) = 0;
  fn_82CEA480(param_1 + 0x10);
  fn_82D002A8(param_1 + 0x1c);
  return;
}

