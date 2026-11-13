extern int fn_822315A0();
extern int fn_8251FA58();
extern int fn_82529320();


void fn_823ADF20(int param_1)

{
  if (*(unsigned int *)(param_1 + 0xa8) != 0) {
    fn_82529320(*(unsigned int *)(param_1 + 0xa8),0);
    if (*(unsigned int *)(param_1 + 0x260) != 0) {
    fn_8251FA58(*(unsigned int *)(param_1 + 0x260));
    *(unsigned int *)(param_1 + 0x260) = 0;
    }
  }
  if (*(unsigned int *)(param_1 + 0x2c4) != 0) {
    fn_822315A0(*(unsigned int *)(param_1 + 0x2c4));
  }
  if (*(unsigned int *)(param_1 + 0x2b8) != 0) {
    fn_822315A0(*(unsigned int *)(param_1 + 0x2b8));
  }
  if (*(unsigned int *)(param_1 + 0x2ac) != 0) {
    fn_822315A0(*(unsigned int *)(param_1 + 0x2ac));
  }
  if (*(unsigned int *)(param_1 + 0x1e8) != 0) {
    fn_822315A0(*(unsigned int *)(param_1 + 0x1e8));
  }
  return;
}

