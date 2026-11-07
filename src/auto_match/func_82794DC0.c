extern int fn_8267C4C8(unsigned int p);
extern int fn_8267C4F0(unsigned int p);
extern unsigned int fn_8278B458(unsigned int p);
extern int fn_82794C90(int self, unsigned int p);

void fn_82794DC0(int param_1, unsigned int param_2)
{
  if (fn_8278B458(param_2) != 0) {
    fn_82794C90(param_1, param_2);
  }
  else {
    if (param_2 != 0) {
      fn_8267C4C8(param_2);
    }
    if (*(unsigned int *)(param_1 + 0x1c) != 0) {
      fn_8267C4F0(*(unsigned int *)(param_1 + 0x1c));
    }
    *(unsigned int *)(param_1 + 0x1c) = param_2;
  }
}
