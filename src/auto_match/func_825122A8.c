extern unsigned int lbl_83265988[];

unsigned int fn_825122A8(unsigned int param_1)
{
  unsigned int i;
  unsigned int *p;

  i = 0;
  p = lbl_83265988;
  do {
    if (*p == param_1) {
      return i;
    }
    i = i + 1;
    p = p + 1;
  } while (i < 4);
  i = 0;
  p = lbl_83265988 + 5;
  do {
    if (*p == param_1) {
      return i;
    }
    i = i + 1;
    p = p + 1;
  } while (i < 4);
  return 0;
}
