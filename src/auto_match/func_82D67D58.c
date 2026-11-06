extern void fn_82D78288(void *, int);

void fn_82D67D58(int param_1, int param_2, unsigned short param_3)
{
  int i;
  int n = *(unsigned char *)(param_2 + 0x21);
  for (i = 0; i < n; i++) {
    if (*(unsigned short *)(param_2 + 2 + i * 4) == param_3) {
      fn_82D78288((void *)param_2, i);
      *(unsigned char *)(param_1 + 2) = *(unsigned char *)(param_1 + 2) + 255;
      return;
    }
  }
}
