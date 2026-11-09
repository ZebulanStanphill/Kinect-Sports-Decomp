extern void fn_82487840(int, int);
extern void fn_8254B438(int);
extern void fn_8255B1E0(int, int, int, int, int, int, int, float, int);

void fn_82487CF0(int param_1)
{
  fn_8254B438(*(int *)(*(int *)(param_1 + 0x490) + 0x8c8));
  fn_82487840(param_1 + 0x10, *(int *)(param_1 + 8) == 5);
  if ((*(int *)(param_1 + 8) == 7) && (*(unsigned int *)(param_1 + 0x494) != 0)) {
    fn_8255B1E0(*(int *)(*(int *)(param_1 + 0x490) + 0x844), param_1 + 0x494, 1, 0, 0, 0, 1,
                0.0f, 1);
  }
}
