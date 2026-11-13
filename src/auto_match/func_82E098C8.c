extern int fn_82CE5410();
extern int fn_82CE63B0();


void fn_82E098C8(int param_1,int *param_2)

{
  unsigned int uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  if (-1 < *(int *)(param_1 + 0x10)) {
    piVar3 = *(int **)(param_1 + 8);
    do {
      if (*piVar3 != -1) break;
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 2;
    } while (iVar4 <= *(int *)(param_1 + 0x10));
  }
  if (iVar4 <= *(int *)(param_1 + 0x10)) {
    do {
      uVar1 = *(unsigned int *)(iVar4 * 8 + *(int *)(param_1 + 8) + 4);
      iVar2 = fn_82CE5410();
      if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
        fn_82CE63B0(*(unsigned int *)(iVar2 + 0x10),param_2,4);
      }
      iVar4 = iVar4 + 1;
      *(unsigned int *)(param_2[1] * 4 + *param_2) = uVar1;
      param_2[1] = param_2[1] + 1;
      if (iVar4 <= *(int *)(param_1 + 0x10)) {
        piVar3 = (int *)(iVar4 * 8 + *(int *)(param_1 + 8));
        do {
          if (*piVar3 != -1) break;
          iVar4 = iVar4 + 1;
          piVar3 = piVar3 + 2;
        } while (iVar4 <= *(int *)(param_1 + 0x10));
      }
    } while (iVar4 <= *(int *)(param_1 + 0x10));
  }
  return;
}

