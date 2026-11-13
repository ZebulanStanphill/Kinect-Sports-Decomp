extern int fn_8267C488();
extern int fn_8267C498();
extern int fn_82761DE8();


void fn_82724AE8(int param_1)

{
  if (*(unsigned int *)(param_1 + 0xc) != 0) {
    fn_8267C498(*(int *)(param_1 + 0xc));
  }
  if (*(unsigned int *)(param_1 + 8) != 0) {
    fn_82761DE8(*(unsigned int *)(param_1 + 8));
  }
  fn_8267C488(param_1);
  return;
}

