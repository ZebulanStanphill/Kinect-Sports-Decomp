extern void fn_82A36A10(int, int, unsigned int *);
unsigned int *fn_82A2B598(int a, int b, unsigned int *out)
{
  out[2] = b;
  out[0] = 0x76c3f250;
  out[1] = 1;
  fn_82A36A10(a, b, out);
  return out;
}
