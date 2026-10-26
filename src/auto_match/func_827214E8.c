extern void fn_826824B0(int);
extern void fn_826BEDE8(void *);
extern void fn_826C3400(void *);

void fn_827214E8(char *param_1)
{
  fn_826C3400(param_1 + 0x48);
  if (*(int *)(param_1 + 0x38) != 0) {
    fn_826824B0(*(int *)(param_1 + 0x38));
  }
  fn_826BEDE8(param_1);
}
