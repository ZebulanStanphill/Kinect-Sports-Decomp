extern unsigned int *auStack_30;
extern int fn_82A1E108();
extern unsigned int iStack_2c;


unsigned __int64 fn_82C00AA0(int param_1,int param_2)

{
  int *piVar1;
  unsigned __int64 uVar2;
  unsigned char auStack_30 [4];
  int iStack_2c;
  
  piVar1 = *(int **)(param_1 + 0x38);
  uVar2 = 0;
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x288) == 0) {
    if (param_2 == 3) {
      return 0;
    }
    uVar2 = (**(int (***)())(*piVar1 + 0x58))();
    (**(int (***)())(**(int **)(param_1 + 0x38) + 100))(*(int **)(param_1 + 0x38),auStack_30);
    while (iStack_2c != 0) {
      fn_82A1E108(10);
      (**(int (***)())(**(int **)(param_1 + 0x38) + 100))(*(int **)(param_1 + 0x38),auStack_30);
    }
    *(unsigned int *)(param_1 + 0x280) = 0;
    return uVar2;
  }
  if (param_2 != 2) {
    if (param_2 == 3) {
      uVar2 = (**(int (***)())(*piVar1 + 0x50))(piVar1,0,0);
      *(unsigned int *)(param_1 + 0x288) = 0;
      return uVar2;
    }
    if (param_2 == 4) {
      (**(int (***)())(*piVar1 + 0x50))(piVar1,0,0);
      uVar2 = (**(int (***)())(**(int **)(param_1 + 0x38) + 0x58))();
      (**(int (***)())(**(int **)(param_1 + 0x38) + 100))(*(int **)(param_1 + 0x38),auStack_30);
      if (iStack_2c != 0) {
        do {
          fn_82A1E108(10);
          (**(int (***)())(**(int **)(param_1 + 0x38) + 100))(*(int **)(param_1 + 0x38),auStack_30);
        } while (iStack_2c != 0);
        *(unsigned int *)(param_1 + 0x280) = 0;
        *(unsigned int *)(param_1 + 0x288) = 0;
        return uVar2;
      }
      goto LAB_82c00c7c;
    }
  }
  (**(int (***)())(*piVar1 + 100))(piVar1,auStack_30);
  while (iStack_2c != 0) {
    fn_82A1E108(10);
    (**(int (***)())(**(int **)(param_1 + 0x38) + 100))(*(int **)(param_1 + 0x38),auStack_30);
  }
LAB_82c00c7c:
  *(unsigned int *)(param_1 + 0x280) = 0;
  *(unsigned int *)(param_1 + 0x288) = 0;
  return uVar2;
}

