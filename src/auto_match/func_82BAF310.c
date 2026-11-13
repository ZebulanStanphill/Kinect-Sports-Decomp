int fn_82BAF310(int *param_1, int param_2)
{
  int pos = 0;
  int i = 0;
  if (0 < param_2) {
    int *cur = param_1;
    do {
      unsigned v = *cur;
      if (*cur == 0) {
        pos += 0x20;
      } else {
        int b = 0;
        do {
          if ((v & 1) == 1) {
            return pos;
          }
          b++;
          v >>= 1;
          pos++;
        } while (b < 0x20);
      }
      i++;
      cur++;
    } while (i < param_2);
  }
  return -1;
}
