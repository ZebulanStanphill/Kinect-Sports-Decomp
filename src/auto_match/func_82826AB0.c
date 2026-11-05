extern void fn_8282D0E0(void *, int, void *);

void fn_82826AB0(unsigned char *param_1, int param_2, int *param_3, int *param_4)
{
  unsigned char *e;
  unsigned char *q;
  int v;

  if ((param_1[0x134] & 0x20) == 0 || (param_1[0x134] & 0x10) == 0) {
    fn_8282D0E0(*(void **)(param_1 + 0xcc), 3, &param_1);
  }
  e = *(unsigned char **)(param_1 + 0xe8) + param_2 * 0xe;
  q = e - 0xe;
  v = *(int *)(((unsigned char)(q[0xc] - 1)) * 0x21 + *(int *)(param_1 + 0x114) + 0xd) + *(int *)(q + 4);
  *param_3 = v;
  *param_4 = *(int *)(q + 8) + v - 1;
}
