extern int fn_8288B760();
extern int fn_8288D868();
extern unsigned int lbl_8329618C;


__int64 fn_82244B58(void)

{
  int *piVar1;
  int iVar2;
  __int64 lVar3;
  int *piVar4;
  char cVar5;
  
  lVar3 = 1;
  if (lbl_8329618C == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(lbl_8329618C + 4);
  }
  piVar1 = *(int **)(iVar2 + 0x314);
  for (piVar4 = *(int **)(iVar2 + 0x310); piVar4 < piVar1; piVar4 = piVar4 + 2) {
    iVar2 = *(int *)(*piVar4 + 0x20);
    if (iVar2 != 0) {
      if (iVar2 == 0) {
        cVar5 = *(int *)(*piVar4 + 0x24) != 0;
      }
      else {
        cVar5 = fn_8288B760();
      }
      if (cVar5 != '\0') {
        if (*(int *)(*piVar4 + 0x20) == 0) {
          cVar5 = '\0';
        }
        else {
          cVar5 = fn_8288D868();
        }
        if ((lVar3 == 0) || (lVar3 = 1, cVar5 == '\0')) {
          lVar3 = 0;
        }
      }
    }
  }
  return lVar3;
}

