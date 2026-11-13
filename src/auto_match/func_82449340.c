extern int fn_8242C1B8(int p);
extern void fn_82449A80(int p);
extern void fn_824517A0(int p);

void fn_82449340(int param_1)
{
  int r;
  int obj;

  fn_824517A0(param_1);
  if (*(int *)(param_1 + 0x14) == 9) {
    r = fn_8242C1B8(**(int **)(param_1 + 0x40));
    if (*(int *)(*(int *)(r + 0x1a0) + 0x1c) != 0) {
      obj = *(int *)(**(int **)(param_1 + 0x40) + 0x174);
      *(unsigned int *)(obj + 0x68) |= 0x200;
    }
  }
  fn_82449A80(param_1);
}
