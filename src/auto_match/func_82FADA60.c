extern void fn_82FA9558(unsigned int);
void fn_82FADA60(int param_1, int param_2)
{
  unsigned int n = *(unsigned int *)(param_1 + 4);
  if (n != 0) {
    while (n != 0 && n != param_2) {
      n = *(unsigned int *)(n + 4);
    }
    if (n == 0) return;
    for (; n != 0; n = *(unsigned int *)(n + 4)) {
      if (*(char *)(n + 0x10) != 0) {
        fn_82FA9558(n);
      }
    }
  }
}
