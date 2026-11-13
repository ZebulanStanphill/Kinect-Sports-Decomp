extern int fn_826959C8();


void fn_8269A1F0(unsigned char *param_1,unsigned int param_2)

{
  if (*param_1 >= 5) {
    fn_826959C8();
  }
  *(unsigned int *)(param_1 + 8) = param_2;
  *param_1 = 4;
  return;
}

