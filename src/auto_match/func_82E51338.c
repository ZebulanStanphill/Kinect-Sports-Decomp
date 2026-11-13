extern void fn_82E50CB8(int);
extern void fn_82E50F10(int);


int fn_82E51338(int param_1,int *param_2)

{
  int *piVar1;
  int uVar2;
  
  if (param_2 == (int *)0x0) {
    uVar2 = 0x80070057;
  }
  else {
    fn_82E50CB8(param_1 + 100);
    piVar1 = *(int **)(param_1 + 0x60);
    *param_2 = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      (*(int (**)())(*piVar1 + 4))(piVar1);
    }
    fn_82E50F10(param_1 + 100);
    uVar2 = 0;
  }
  return uVar2;
}

