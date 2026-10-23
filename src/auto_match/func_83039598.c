extern void fn_82FF4A38(int a, int b, int c, int d);
extern void fn_83038F08(int p, unsigned char b);
extern int lbl_83264304;

void fn_83039598(int param_1, unsigned char param_2)
{
  if (param_2 == 0) {
    fn_82FF4A38(lbl_83264304, *(int *)(param_1 + 0x50), *(int *)(param_1 + 0x1f0),
                *(int *)(param_1 + 500));
  }
  fn_83038F08(param_1, param_2);
}
