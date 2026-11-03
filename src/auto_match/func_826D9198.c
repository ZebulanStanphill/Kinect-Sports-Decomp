extern int fn_8267C4C8(void *);
extern int lbl_8200C698;

int *fn_826D9198(int *param_1, void *a, void *b)
{
  param_1[1] = 1;
  *param_1 = (int)&lbl_8200C698;
  if (a != 0) {
    fn_8267C4C8(a);
  }
  param_1[2] = (int)a;
  if (b != 0) {
    fn_8267C4C8(b);
  }
  param_1[3] = (int)b;
  return param_1;
}
