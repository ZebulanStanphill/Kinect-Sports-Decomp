extern int fn_822315A0();
extern int fn_8265CA20();


int fn_8223A820(int param_1,unsigned int param_2)

{
  if (*(unsigned int *)(param_1 + 0xc) != 0) {
    fn_822315A0(*(int *)(param_1 + 0xc));
  }
  if (*(unsigned int *)(param_1 + 4) != 0) {
    fn_822315A0(*(unsigned int *)(param_1 + 4));
  }
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

