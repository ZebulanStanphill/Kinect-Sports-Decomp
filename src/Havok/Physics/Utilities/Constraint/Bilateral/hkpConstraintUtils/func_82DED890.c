extern int fn_8260A648(void *, void *);
extern int fn_82CE4040(unsigned int);

void fn_82DED890(void *param_1, int param_2)
{
  unsigned int *p;
  int i;
  fn_8260A648((void *)param_2, param_1);
  p = (unsigned int *)(param_2 + 0xd0);
  i = 3;
  do {
    if (*p != 0) {
      fn_82CE4040(*p);
    }
    i = i - 1;
    p = p + 1;
  } while (i != 0);
}
