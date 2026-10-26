extern int fn_82F72E58(void *, char *, int);

void *fn_82F732B0(unsigned int *param_1, char param_2)
{
  *(unsigned char *)(param_1 + 1) = 0;
  *param_1 = 0;
  *((unsigned char *)param_1 + 5) = 0;
  if (param_2 != '\0') {
    fn_82F72E58(param_1, &param_2, 1);
  }
  return param_1;
}
