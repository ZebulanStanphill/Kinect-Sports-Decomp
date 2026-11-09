extern void fn_82FF18E8(unsigned int node, float t, void *arg, unsigned char flag);

void fn_82FF4078(int o, float t, void *arg)
{
  unsigned int n;

  for (n = *(int *)(o + 0x7c); n != 0; n = *(int *)(n + 0x14)) {
    fn_82FF18E8(n, t, arg, 0);
  }
}
