extern int fn_8275FD10();


int * fn_8275FD58(int *param_1,int param_2)

{
  *param_1 = param_2;
  param_1[1] = 0;
  if (((*(unsigned char *)(param_2 + 0x20) & 0x80) == 0) && (*(unsigned char *)(param_2 + 0x20) != 1)) {
    fn_8275FD10(param_2);
  }
  return param_1;
}

