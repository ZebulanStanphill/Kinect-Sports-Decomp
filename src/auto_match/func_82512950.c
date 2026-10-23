extern void fn_82521AB0(int);
extern void fn_82599418();
extern void fn_827D81A8(unsigned int, int);
extern unsigned char fn_828EA610(int);
extern void fn_828EB410();
extern unsigned int lbl_83265A24;

void fn_82512950(int param_1)
{
  int h;

  fn_828EB410();
  fn_82521AB0(param_1);
  if (fn_828EA610(param_1) == 0 && *(unsigned char *)(param_1 + 0xd8) == 0) {
    h = *(int *)(param_1 + 0x124);
    if (h != -1) {
      *(int *)(param_1 + 0x124) = -1;
      fn_827D81A8(lbl_83265A24, h);
      fn_82599418();
    }
  }
}
