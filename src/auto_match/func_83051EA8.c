extern int *piRam0000000c;


unsigned __int64 fn_83051EA8(int param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;

  piVar4 = *(int **)(param_1 + 0x58);
  if (*(int **)(param_1 + 0x58) == (int *)0x0) {
    *(unsigned int *)(param_1 + 0x58) = 0;
  }
  else {
    do {
      piVar1 = (int *)piVar4[3];
      piVar2 = piVar1;
      if (piVar4 == *(int **)(param_1 + 0x58)) {
        *(int **)(param_1 + 0x58) = piVar1;
        piVar2 = piRam0000000c;
      }
      piRam0000000c = piVar2;
      cVar3 = (**(int (***)())(*piVar4 + 8))(piVar4);
      if (cVar3 == '\0') {
        if (*(int *)(param_1 + 0x58) == 0) {
          *(int **)(param_1 + 0x58) = piVar4;
          piVar4[3] = 0;
          return 0;
        }
        piVar4[3] = *(int *)(param_1 + 0x58);
        *(int **)(param_1 + 0x58) = piVar4;
        return 0;
      }
      piVar4 = piVar1;
    } while (piVar1 != (int *)0x0);
    *(unsigned int *)(param_1 + 0x58) = 0;
  }
  return 1;
}
