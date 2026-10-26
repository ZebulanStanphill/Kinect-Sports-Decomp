extern void fn_82A36C68(int, int, unsigned int *);
unsigned int *fn_82A2B660(int a, int b, unsigned int *out)
{
  out[2] = b;
  out[0] = 0x76c3f251;
  out[1] = 1;
  fn_82A36C68(a, b, out);
  return out;
}
