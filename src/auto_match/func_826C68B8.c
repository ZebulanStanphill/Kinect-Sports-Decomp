unsigned __int64 fn_826C68B8(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  unsigned int uVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 0x1b4);
  if (iVar1 != 0) {
    uVar4 = 0;
    if (*(unsigned int *)(iVar1 + 0xc) != 0) {
      iVar5 = 0;
      do {
        if (*(int *)(*(int *)(iVar5 + *(int *)(iVar1 + 8)) + 0xc) == param_2) {
          piVar2 = *(int **)(*(int *)(uVar4 * 4 + *(int *)(iVar1 + 8)) + 8);
          if ((piVar2 != (int *)0x0) && (cVar3 = (**(int (***)())(*piVar2 + 0x14))(), cVar3 != '\0')) {
            return 1;
          }
          return 0;
        }
        uVar4 = uVar4 + 1;
        iVar5 = iVar5 + 4;
      } while (uVar4 < *(unsigned int *)(iVar1 + 0xc));
    }
  }
  return 0;
}

