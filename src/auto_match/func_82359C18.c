void fn_82359C18(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[4];
  if (piVar1 != (int *)0x0) {
    (*(int (**)())(*piVar1 + 0xc))(piVar1,piVar1 != param_1);
    param_1[4] = 0;
  }
  return;
}

