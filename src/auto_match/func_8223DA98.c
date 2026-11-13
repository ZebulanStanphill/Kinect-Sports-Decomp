extern int fn_8265CA20();
extern int *fn_8223F5A0(unsigned int);

int *fn_8223DA98(unsigned int *param_1, unsigned int param_2)
{
  int *puVar1;

  if (*param_1 != 0) {
    puVar1 = fn_8223F5A0(*param_1);
    if (puVar1 != 0) {
      (*(void (**)(int *, int))*puVar1)(puVar1, 1);
    }
  }
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return (int *)param_1;
}
