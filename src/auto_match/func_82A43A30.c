extern int fn_82BFE128();


void fn_82A43A30(int param_1,unsigned __int64 param_2,unsigned int param_3)

{
  int *piVar1;
  
  fn_82BFE128(*(unsigned int *)(param_1 + 0x30));
  piVar1 = *(int **)(param_1 + 0x38);
  if ((piVar1 != (int *)0x0) &&
     ((*(int (**)())(*piVar1 + 0x10))(piVar1,param_2), (param_3 & 0x40) != 0)) {
    (*(int (**)())(*piVar1 + 8))(piVar1);
  }
  return;
}

