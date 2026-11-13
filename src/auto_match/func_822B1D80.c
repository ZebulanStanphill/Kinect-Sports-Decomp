extern int fn_82359C18();
extern int fn_82381BC0();
extern int fn_8288B760();
extern int fn_828B1340();
extern int fn_82F63108();


unsigned __int64 fn_822B1D80(int param_1,int param_2,char param_3)

{
  int *piVar1;
  char cVar4;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  int aiStack_30;
  
  cVar4 = fn_8288B760(*(unsigned int *)(param_1 + 0x10));
  if ((cVar4 == '\0') ||
     (uVar3 = fn_828B1340(*(unsigned int *)(*(int *)(param_1 + 0x10) + 0x10)),
     (uVar3 & 0xff) != 0)) {
    fn_82359C18(param_2);
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
    piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x10) + 0x10) + 0x200);
    aiStack_30 = *piVar1;
    if ((int *)aiStack_30 != piVar1) {
      do {
        if ((param_3 != '\0') || (*(char *)(*(int *)(aiStack_30 + 0x10) + 0x26) == '\0')) {
          if (*(int **)(param_2 + 0x10) == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            fn_82F63108(uVar3,*(unsigned int *)(aiStack_30 + 0x10));
          }
          cVar4 = (**(int (***)())(**(int **)(param_2 + 0x10) + 4))();
          if (cVar4 == '\0') {
            uVar2 = 0;
            break;
          }
        }
        uVar3 = fn_82381BC0(&aiStack_30);
      } while (aiStack_30 != *(int *)(*(int *)(*(int *)(param_1 + 0x10) + 0x10) + 0x200));
    }
    fn_82359C18(param_2);
  }
  return uVar2;
}

