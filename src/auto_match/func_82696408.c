extern int fn_826959C8();


void fn_82696408(char *param_1,int *param_2)

{
  if ((*param_1 != '\a') || (*(int **)(param_1 + 4) != param_2)) {
    fn_826959C8(param_1);
    *(int **)(param_1 + 4) = param_2;
    *param_1 = '\a';
    if (param_2 != (int *)0x0) {
      *param_2 = *param_2 + 1;
    }
  }
  return;
}

