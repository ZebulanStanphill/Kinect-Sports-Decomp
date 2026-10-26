extern void fn_826820F0(int);
extern void fn_826BEF40(void *);
extern void fn_826C3448(void *);

void fn_82721530(char *param_1)
{
  fn_826C3448(param_1 + 0x48);
  if (*(int *)(param_1 + 0x38) != 0) {
    fn_826820F0(*(int *)(param_1 + 0x38));
  }
  fn_826BEF40(param_1);
}
