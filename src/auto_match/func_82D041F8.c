typedef unsigned int uint;

char *fn_82CFBEA0(char *s, char *sub);

int fn_82D041F8(uint *param_1, char *param_2, int param_3)
{
  char *p;

  p = fn_82CFBEA0((char *)(*param_1 + param_3), param_2);
  if (p != 0) {
    return (int)p - *param_1;
  }
  return -1;
}
