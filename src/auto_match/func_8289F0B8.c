extern int fn_82381BC0();
extern int fn_828ACCE8();
extern int fn_82A4AAA8();


__int64 fn_8289F0B8(int param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  __int64 lVar4;
  int aiStack_30;
  
  lVar4 = 0;
  aiStack_30 = **(int **)(param_1 + 0x220);
  if ((int *)aiStack_30 != *(int **)(param_1 + 0x220)) {
    do {
      piVar1 = *(int **)(aiStack_30 + 0x10);
      iVar2 = (**(int (***)())(*piVar1 + 8))(piVar1);
      if (iVar2 == 0) {
        cVar3 = fn_828ACCE8(param_1);
        if (cVar3 != '\0') goto LAB_8289f138;
      }
      else {
        (**(int (***)())(*piVar1 + 8))(piVar1);
        iVar2 = fn_82A4AAA8();
        if (iVar2 == 1) {
LAB_8289f138:
          lVar4 = lVar4 + 1;
        }
      }
      fn_82381BC0(&aiStack_30);
    } while (aiStack_30 != *(int *)(param_1 + 0x220));
  }
  return lVar4;
}

