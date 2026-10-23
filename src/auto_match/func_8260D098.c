typedef int (*code)();
extern int fn_827DC520();
extern unsigned int fn_827DE938();

void fn_8260D098(int param_1, int *param_2)
{
  if (fn_827DE938(param_2) != 0) {
    fn_827DC520(*(int *)(param_1 + 0x40), fn_827DE938(param_2));
  }
  if (param_2 != 0) {
    (*(code *)*param_2)(param_2, 1);
  }
}
