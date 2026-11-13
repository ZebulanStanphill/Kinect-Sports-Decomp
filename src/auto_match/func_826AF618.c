extern void fn_82683270(int *, int);
extern void fn_82696330(unsigned);

void fn_826AF618(unsigned *param_1)
{
  if (*param_1 - 0x30U < param_1[1]) {
    fn_82683270((int *)param_1, 3);
  }
  else {
    fn_82696330(*param_1);
    *param_1 = *param_1 - 0x10;
    fn_82696330(*param_1);
    *param_1 = *param_1 - 0x10;
    fn_82696330(*param_1);
    *param_1 = *param_1 - 0x10;
  }
}
