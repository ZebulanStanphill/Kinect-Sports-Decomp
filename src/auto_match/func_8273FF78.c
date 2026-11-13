extern int fn_8267BE38();
extern int fn_8269A608();
extern int fn_8269F500();


void fn_8273FF78(int param_1,int *param_2)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  int *piVar3;
  unsigned int uVar4;
  
  if (param_2 == (int *)0x0) {
    *(unsigned int *)(param_1 + 0x30) = 0;
    puVar1 = *(unsigned int **)(param_1 + 0x34);
    if (puVar1 != (unsigned int *)0x0) {
      uVar2 = *puVar1;
      *puVar1 = (unsigned int)((unsigned __int64)uVar2 - 1);
      if ((__int64)((unsigned __int64)uVar2 - 1) < 1) {
        fn_8269A608(puVar1);
        fn_8267BE38(puVar1);
      }
    }
    *(unsigned int *)(param_1 + 0x34) = 0;
  }
  else {
    piVar3 = (int *)param_2[0x20];
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)fn_8269F500(param_2);
    }
    if (piVar3 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
    puVar1 = *(unsigned int **)(param_1 + 0x34);
    if (puVar1 != (unsigned int *)0x0) {
      uVar2 = *puVar1;
      *puVar1 = (unsigned int)((unsigned __int64)uVar2 - 1);
      if ((__int64)((unsigned __int64)uVar2 - 1) < 1) {
        fn_8269A608(puVar1);
        fn_8267BE38(puVar1);
      }
    }
    *(int **)(param_1 + 0x34) = piVar3;
    uVar4 = (**(int (***)())(*param_2 + 0x40))(param_2);
    *(unsigned int *)(param_1 + 0x30) = uVar4;
  }
  return;
}

