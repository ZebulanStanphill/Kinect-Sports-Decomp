extern int fn_82BE5340(int);
extern int fn_82BE5350(int);
extern int fn_82BE5378(int);
extern int fn_82BF1318(int, unsigned int);

void fn_82BF1430(int param_1, unsigned int param_2)
{
  int it;

  it = param_1 + 0x3c;
  fn_82BE5340(it);
  while (*(int *)(param_1 + 0x44) != 0) {
    if (*(unsigned int *)(fn_82BE5378(it) + 0x18) == param_2) {
      int n = fn_82BE5378(it);
      *(int *)(n + 0x50) = 0;
      *(int *)(n + 0xb0) = 0;
      break;
    }
    fn_82BE5350(it);
  }
  fn_82BF1318(param_1, param_2);
}
