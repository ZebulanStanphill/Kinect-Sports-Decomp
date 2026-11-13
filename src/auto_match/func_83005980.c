extern int fn_83032738();


int * fn_83005980(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(int (**)())(*param_1 + 0x10c))(param_1);
  if ((piVar1 == (int *)0x0) && (piVar1 = (int *)fn_83032738(), piVar1 != (int *)0x0)) {
    (*(int (**)())(*piVar1 + 100))(piVar1,param_1[3]);
    (*(int (**)())(*piVar1 + 8))(piVar1);
  }
  return piVar1;
}

