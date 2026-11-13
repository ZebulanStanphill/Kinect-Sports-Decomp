extern int fn_822E5640();
extern int fn_822E5710();
extern int fn_822F25B0();
extern int fn_822F2870();


void fn_822F2818(int param_1)

{
  fn_822F25B0();
  if (*(int *)(*(int *)(param_1 + 0xc) + 0x24) == 0) {
    fn_822F2870(param_1);
    fn_822E5640(*(unsigned int *)(param_1 + 0xc));
    fn_822E5710(*(unsigned int *)(param_1 + 0xc));
  }
  return;
}

