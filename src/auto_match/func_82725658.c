extern int fn_82681E98();
extern int fn_8269A800();
extern int fn_8269F500();


void fn_82725658(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if ((*(int **)(param_1 + 8) != (int *)0x0) &&
     (iVar1 = (**(int (***)())(**(int **)(param_1 + 8) + 8))(), iVar1 == 4)) {
    piVar2 = (int *)(*(int *)(param_1 + 8) + -0x68);
    if (*(int *)(param_1 + 8) == 0) {
      piVar2 = (int *)0x0;
    }
    if (piVar2[5] < 0x4000) {
      iVar1 = piVar2[0x20];
      if (iVar1 == 0) {
        iVar1 = fn_8269F500(piVar2);
      }
      if (iVar1 == 0) {
        iVar1 = (**(int (***)())(*piVar2 + 0x58))(piVar2);
        iVar1 = *(int *)(iVar1 + 0x78);
      }
      fn_82681E98(piVar2 + 3,0xffffffff8200bea4,**(unsigned int **)(iVar1 + 8));
    }
    else {
      fn_8269A800(piVar2);
    }
  }
  return;
}

