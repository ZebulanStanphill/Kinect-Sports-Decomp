int fn_82E43830(int param_1,int *param_2)

{
  int *piVar1;
  int uVar2;
  
  if (param_2 == (int *)0x0) {
    uVar2 = 0x80070057;
  }
  else {
    *param_2 = 0;
    piVar1 = *(int **)(param_1 + 0x18);
    if (piVar1 == (int *)0x0) {
      uVar2 = 0xc00d36b2;
    }
    else {
      *param_2 = (int)piVar1;
      (*(int (**)())(*piVar1 + 4))(piVar1);
      uVar2 = 0;
    }
  }
  return uVar2;
}

