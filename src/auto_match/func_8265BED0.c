extern int fn_8265CA20();
extern int free();
extern unsigned int lbl_820014D4;


unsigned int * fn_8265BED0(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_820014D4;
  if (*(char *)(param_1 + 2) != '\0') {
    free(param_1[1]);
  }
  param_1[1] = 0;
  *(unsigned char *)(param_1 + 2) = 0;
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

