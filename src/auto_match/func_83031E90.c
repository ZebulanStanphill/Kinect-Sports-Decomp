extern int fn_82FAB9C0();
extern int fn_82FF5D28();
extern int fn_83035CC0();
extern unsigned int lbl_832642E0;


unsigned __int64 fn_83031E90(int param_1)

{
  int *piVar2;
  unsigned __int64 uVar1;
  unsigned int *puVar3;
  int *piVar4;
  
  piVar2 = (int *)fn_82FAB9C0((unsigned __int64)lbl_832642E0 + 0xcbc);
  if (piVar2 == (int *)0x0) {
    uVar1 = 0xf;
  }
  else {
    for (piVar4 = *(int **)(param_1 + 0xa8);
        (piVar4 != *(int **)(param_1 + 0xac) && ((int *)*piVar4 != piVar2)); piVar4 = piVar4 + 1) {
    }
    if (piVar4 == *(int **)(param_1 + 0xac)) {
      puVar3 = (unsigned int *)fn_82FF5D28(param_1 + 0xa8);
      if (puVar3 == (unsigned int *)0x0) {
        (**(int (***)())(*piVar2 + 8))(piVar2);
        return 2;
      }
      *puVar3 = piVar2;
      fn_83035CC0(piVar2,param_1);
    }
    else {
      (**(int (***)())(*piVar2 + 8))(piVar2);
    }
    uVar1 = 1;
  }
  return uVar1;
}

