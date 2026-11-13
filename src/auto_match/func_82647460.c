extern int fn_82653918();
extern int fn_8265C990();


int fn_82647460(int param_1)
{
  unsigned int n = *(unsigned int *)(param_1 + 0x3c);
  if (n == 1) {
    fn_82653918();
    fn_8265C990(*(unsigned int *)(param_1 + -4),0x24800000);
    return 0;
  }
  *(unsigned int *)(param_1 + 0x3c) = n - 1;
  return n - 1;
}
