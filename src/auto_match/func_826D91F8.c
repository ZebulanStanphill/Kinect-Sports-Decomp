extern int fn_8267C488();
extern int fn_8267C4F0();
extern int fn_82687270();


void fn_826D91F8(int param_1)

{
  if (*(unsigned int *)(param_1 + 0xc) != 0) {
    fn_8267C4F0(*(int *)(param_1 + 0xc));
  }
  if (*(unsigned int *)(param_1 + 8) != 0) {
    fn_82687270(*(unsigned int *)(param_1 + 8));
  }
  fn_8267C488(param_1);
  return;
}

