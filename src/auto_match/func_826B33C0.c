extern void fn_82694D70(int *);
extern void fn_826B0C28(void *, int *);
extern void fn_826B0D48(void *, int **);

void fn_826B33C0(void *param_1, int *param_2, unsigned char param_3)
{
  int *p;
  if (param_3 != 0) {
    fn_826B0C28(param_1, param_2);
  } else {
    p = param_2;
    if (*(unsigned int *)(*param_2 + 4) == 0) {
      fn_82694D70((int *)*param_2);
    }
    fn_826B0D48(param_1, &p);
  }
}
