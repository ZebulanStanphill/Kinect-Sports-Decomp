extern int fn_82381BC0();
extern int fn_8288B760();
extern int fn_828AAF70();


void fn_8236D9D0(int *param_1)

{
  char cVar3;
  int iVar2;
  unsigned __int64 uVar1;
  unsigned __int64 uVar4;
  int aiStack_30;
  
  if (param_1[0x20] != 0) {
    cVar3 = fn_8288B760();
    if (cVar3 != '\0') {
      iVar2 = (**(int (***)())(*param_1 + 8))(param_1);
      uVar4 = 1;
      aiStack_30 = **(int **)(param_1[4] + 0x200);
      if ((int *)aiStack_30 != *(int **)(param_1[4] + 0x200)) {
        do {
          uVar1 = (**(int (***)())(*(int *)(iVar2 + 0x48) + 0x38))
                            ((int *)(iVar2 + 0x48),*(unsigned int *)(aiStack_30 + 0x10));
          uVar4 = uVar1 & 0xff & uVar4;
          fn_82381BC0(&aiStack_30);
        } while (aiStack_30 != *(int *)(param_1[4] + 0x200));
      }
      if (uVar4 != 0) {
        fn_828AAF70(iVar2 + 0x9c,1);
      }
    }
  }
  return;
}

