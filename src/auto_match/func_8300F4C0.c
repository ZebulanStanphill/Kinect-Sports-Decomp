extern int fn_82A1E658();
extern int fn_830376E0();


void fn_8300F4C0(int param_1)

{
  fn_830376E0(param_1 + 0x9c);
  if (*(unsigned int *)(param_1 + 0xb0) != 0) {
    fn_82A1E658(*(unsigned int *)(param_1 + 0xb0));
  }
  *(unsigned int *)(param_1 + 0xb0) = 0;
  return;
}

