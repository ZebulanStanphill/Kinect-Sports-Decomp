extern unsigned int lbl_820798C8;
extern unsigned int lbl_820798D0;


void fn_829E8B10(unsigned int *param_1)
{
  unsigned int *p;

  p = (unsigned int *)param_1[11];
  *param_1 = (unsigned int)&lbl_820798D0;
  if (p != 0) {
    (*(int (**)())(*p + 8))(p);
  }
  *param_1 = (unsigned int)&lbl_820798C8;
  return;
}
