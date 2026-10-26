extern void fn_8279C658(int a, int b, int c);
extern void fn_827A3A50(int p, int c, unsigned int f);

static unsigned char bit0(short v) { return v & 1; }

void fn_827A5000(int param_1, int param_2, int param_3)
{
  unsigned short flags = *(unsigned short *)(param_1 + 0x68);
  if (!bit0(flags) || bit0(flags >> 1)) {
    fn_827A3A50(param_1, param_3, flags >> 1 & 1);
  }
  fn_8279C658(*(int *)(param_1 + 8), param_2, param_3);
}
