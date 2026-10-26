extern void fn_82BC0878();
extern void fn_82BC7368(int);

void fn_82BC6118(int param_1)
{
  while (*(unsigned int *)(*(int *)(param_1 + 0x2c) + 4) != 0) {
    fn_82BC7368(*(int *)(param_1 + 0x2c));
    fn_82BC0878();
  }
}
