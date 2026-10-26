extern int fn_82F62680();
extern int fn_82F626D0();

void fn_8223F508(int param_1)
{
  unsigned char auStack_20[16];

  fn_82F62680(auStack_20, 0);
  if (*(unsigned int *)(param_1 + 4) < 0xffffffff) {
    *(unsigned int *)(param_1 + 4) = *(unsigned int *)(param_1 + 4) + 1;
  }
  fn_82F626D0(auStack_20);
}
