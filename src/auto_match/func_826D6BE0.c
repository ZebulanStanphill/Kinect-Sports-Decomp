extern int fn_8265CA20();


int * fn_826D6BE0(int *param_1,unsigned int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    (*(int (**)())(*piVar1 + 8))(piVar1,param_1[1]);
  }
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

