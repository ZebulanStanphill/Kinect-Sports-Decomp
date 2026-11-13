extern int fn_82529230(int a, int b);
extern int fn_82529320(unsigned int a, int b);
extern void fn_82592238(int a, int *b);

void fn_824FB838(int param_1, int *param_2)
{
  switch (*param_2) {
  case 0x4b:
    if (*(unsigned int *)(param_1 + 0x74) != 0) {
      fn_82529320(*(unsigned int *)(param_1 + 0x74), 0);
      *(unsigned int *)(param_1 + 0x74) = 0;
    }
    break;
  case 0x45:
    *(int *)(param_1 + 0x74) = fn_82529230(*(int *)(param_1 + 0x30), param_1 + 0x70);
    break;
  }
  fn_82592238(param_1, param_2);
}
