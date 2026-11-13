extern void fn_8268B330(int param_1);
extern void fn_8268B400(int param_1, unsigned int c);
extern unsigned int fn_826BD078(int *cursor);

int fn_827558F0(int param_1, int param_2, unsigned int param_3, unsigned int param_4, unsigned char param_5)
{
  unsigned int c;
  int cursor;

  fn_8268B330(param_1);
  cursor = (*(unsigned int *)(param_2 + 0xc) & 0xfffffffc) + 8;
  for (; param_3 < param_4; ) {
    c = fn_826BD078(&cursor);
    if (c == 0) break;
    if (c != 10) {
      fn_8268B400(param_1, c);
      param_3 = param_3 + 1;
    }
    else if (param_5 != 0) {
      fn_8268B400(param_1, 10);
    }
  }
  return param_1;
}
