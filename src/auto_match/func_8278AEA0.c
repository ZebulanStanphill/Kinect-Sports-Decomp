extern int fn_8267C488();
extern int fn_8267C498();
extern int fn_8267C4F0();


void fn_8278AEA0(int param_1)

{
  if (*(unsigned int *)(param_1 + 0x14) != 0) {
    fn_8267C498(*(int *)(param_1 + 0x14));
  }
  if (*(unsigned int *)(param_1 + 0xc) != 0) {
    fn_8267C4F0(*(unsigned int *)(param_1 + 0xc));
  }
  if (*(unsigned int *)(param_1 + 8) != 0) {
    fn_8267C4F0(*(unsigned int *)(param_1 + 8));
  }
  fn_8267C488(param_1);
  return;
}

