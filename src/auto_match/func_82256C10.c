extern int fn_822315A0();
extern int fn_82359C18();
extern int fn_8265CA20();
extern int fn_828E32A0();


int fn_82256C10(int param_1,unsigned int param_2)

{
  if (*(unsigned int *)(param_1 + 0x6c) != 0) {
    fn_822315A0(*(int *)(param_1 + 0x6c));
  }
  fn_82359C18(param_1 + 0x50);
  fn_82359C18(param_1 + 0x38);
  fn_828E32A0(param_1);
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

