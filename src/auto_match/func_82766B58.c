extern int fn_8267C498();
extern int fn_8267C4F0();
extern unsigned int lbl_8200BD80;
extern unsigned int lbl_82014C60;


void fn_82766B58(unsigned int *param_1)

{
  int *piVar1;
  unsigned int uVar2;
  int iVar3;
  
  *param_1 = &lbl_82014C60;
  if (*(char *)(param_1 + 8) == '\0') {
    piVar1 = (int *)param_1[9];
    if (piVar1 != (int *)0x0) {
      (**(int (***)())(*piVar1 + 4))(piVar1,param_1);
    }
  }
  else {
    uVar2 = 0;
    if (*(int *)(param_1[9] + 4) != 0) {
      iVar3 = 0;
      do {
        (**(int (***)())(**(int **)(*(int *)param_1[9] + iVar3) + 4))
                  (*(int **)(*(int *)param_1[9] + iVar3),param_1);
        uVar2 = uVar2 + 1;
        iVar3 = iVar3 + 4;
      } while (uVar2 < *(unsigned int *)(param_1[9] + 4));
    }
  }
  piVar1 = (int *)param_1[6];
  if (piVar1 != (int *)0x0) {
    (**(int (***)())(*piVar1 + 8))(piVar1,param_1[7]);
  }
  if (param_1[4] != 0) {
    fn_8267C498();
  }
  if (param_1[3] != 0) {
    fn_8267C4F0();
  }
  *param_1 = &lbl_8200BD80;
  return;
}

