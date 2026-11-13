extern int fn_82820EF8();
extern int fn_82827750();
extern int fn_82F672D8();


void fn_8282DA48(int param_1)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  
  pcVar3 = (char *)(param_1 + 0x1b8);
  piVar6 = (int *)(*(int *)(param_1 + 0x2d8) + *(int *)(param_1 + 0x2e4));
  *(int *)(param_1 + 0x2d8) = *(int *)(param_1 + 0x2d8) + 4;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 4;
  pcVar4 = pcVar3;
  do {
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  iVar5 = (int)pcVar4 - (int)pcVar3;
  *piVar6 = iVar5 + -1;
  if (iVar5 + -1 != 0) {
    *piVar6 = iVar5;
    iVar1 = *(int *)(param_1 + 0x2d8);
    *(int *)(param_1 + 0x2d8) = iVar1 + iVar5;
    *(int *)(param_1 + 0x58) = iVar5 + *(int *)(param_1 + 0x58);
    fn_82F672D8(iVar1 + *(int *)(param_1 + 0x2e4),pcVar3,*piVar6);
  }
  cVar2 = fn_82827750(param_1);
  if (cVar2 != '\0') {
    fn_82820EF8(piVar6,4);
  }
  return;
}

