void fn_82BD0910(unsigned int **param_1)
{
  unsigned int *p = *param_1;
  unsigned int i;
  for (i = 0; i < *p; i++) {
    p[i + 2] = 0;
  }
}
