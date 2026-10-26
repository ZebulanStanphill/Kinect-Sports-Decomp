extern int **fn_8288DFB8(void *, void *, unsigned int *);

char *fn_8288F9A0(char *param_1, unsigned int param_2)
{
  char tmp[8];

  if (param_2 == 0x8000) {
    return param_1 + 0x24;
  }
  return (char *)*fn_8288DFB8(tmp, param_1 + 0x34, &param_2) + 0x10;
}
