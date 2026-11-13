extern int fn_82670230();
extern int fn_8267C498();


int fn_826898C0(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  
  iVar2 = *(int *)(param_1 + 0xc);
  if ((iVar2 == 0) && (*(int *)(param_1 + 0x14) != 0)) {
    iVar2 = (**(int (***)())(*param_2 + 8))(param_2);
    if (*(int *)(param_1 + 0xc) != 0) {
      fn_82670230(*(int *)(param_1 + 0xc));
    }
    *(int *)(param_1 + 0xc) = iVar2;
    if (iVar2 != 0) {
      cVar3 = (**(int (***)())(*(int *)(param_1 + 8) + 8))(param_1 + 8,param_2);
      piVar1 = *(int **)(param_1 + 0xc);
      if (cVar3 == '\0') {
        if (piVar1 != (int *)0x0) {
          fn_82670230();
        }
        *(unsigned int *)(param_1 + 0xc) = 0;
      }
      else {
        (**(int (***)())(*piVar1 + 0x2c))(piVar1,param_1 + 8);
      }
    }
    if ((*(int *)(param_1 + 0xc) != 0) && (*(char *)(param_1 + 0x20) != '\0')) {
      if (*(int *)(param_1 + 0x14) != 0) {
        fn_8267C498();
      }
      *(unsigned int *)(param_1 + 0x14) = 0;
    }
    iVar2 = *(int *)(param_1 + 0xc);
  }
  return iVar2;
}

