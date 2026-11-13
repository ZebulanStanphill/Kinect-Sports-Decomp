int fn_82BC2E88(char *a, char *b)
{
  int d = *(int *)(a + 0x3bc) - *(int *)(b + 0x868);
  return (d < 0 ? 0 : d) == 1;
}
