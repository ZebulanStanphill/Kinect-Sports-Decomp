#define true 1
extern int fn_82B8F208();


int fn_82AC64B8(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  while( true ) {
    piVar4 = *(int **)(param_1 + 8);
    if (piVar4 != (int *)0x0) {
      iVar3 = *piVar4;
      *(unsigned int *)(param_1 + 0xc) = 0;
      do {
        piVar4 = (int *)piVar4[1];
        *(int **)(param_1 + 8) = piVar4;
        if (piVar4 == (int *)0x0) {
          return iVar3;
        }
      } while (((*(unsigned int *)(*piVar4 + 0x30) >> 0x16 & 1) != 0) ||
              ((*(unsigned int *)(*piVar4 + 0x30) >> 0x14 & 1) == 0));
      return iVar3;
    }
    iVar3 = *(int *)(param_1 + 4);
    *(unsigned int *)(param_1 + 0x10) = 0;
    *(unsigned int *)(param_1 + 0x14) = 0;
    if (iVar3 == 0) break;
    iVar2 = *(int *)(iVar3 + 4);
    *(int *)(param_1 + 0xc) = iVar3;
    cVar1 = *(char *)(param_1 + 0x19);
    fn_82B8F208(param_1,*(unsigned int *)(iVar3 + 0xc));
    if (cVar1 == '\0') {
      return iVar2;
    }
  }
  return 0;
}

