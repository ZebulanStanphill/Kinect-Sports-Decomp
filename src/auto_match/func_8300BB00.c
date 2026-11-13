extern int fn_8300B720();


void fn_8300BB00(int param_1)

{
  if ((*(unsigned char *)(param_1 + 0xa0) & 0xe0) != 0x40) {
    return;
  }
  *(unsigned char *)(param_1 + 0xa0) = *(unsigned char *)(param_1 + 0xa0) & 0x1f;
  fn_8300B720();
  return;
}
