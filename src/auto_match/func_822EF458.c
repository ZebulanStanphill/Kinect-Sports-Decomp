extern int fn_822EF060();


unsigned __int64 fn_822EF458(int *param_1,int *param_2)

{
  if (*(char *)(param_1 + 1) == '\0') {
    fn_822EF060();
  }
  if (*(char *)(param_2 + 1) == '\0') {
    fn_822EF060(param_2);
  }
  if (*param_1 == 0) {
    if (*param_2 == 0) {
      return 1;
    }
  }
  else if (*param_2 != 0) {
    return 1;
  }
  return 0;
}

