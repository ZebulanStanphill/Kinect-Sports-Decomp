extern void fn_82681F88(int);
extern void fn_826BE840(void *);
extern void fn_826C3290(void *);

void fn_827214A0(char *param_1)
{
  fn_826C3290(param_1 + 0x48);
  if (*(int *)(param_1 + 0x38) != 0) {
    fn_82681F88(*(int *)(param_1 + 0x38));
  }
  fn_826BE840(param_1);
}
