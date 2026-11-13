extern double fn_826BCE08(const char *s, char **end);

int fn_826A1928(char *param_1, double *param_2)
{
  char c;
  char *end;

  if (param_1 != 0 && (c = *param_1) != 0 &&
      ((c >= '0' && c <= '9') || c == '+' || c == '-' || c == '.')) {
    *param_2 = fn_826BCE08(param_1, &end);
    if (end == 0 || *end == 0) {
      return 1;
    }
  }
  return 0;
}
