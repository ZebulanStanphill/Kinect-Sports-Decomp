extern unsigned int fn_826E8488(void *reader, int bits);

int fn_826E8610(void *reader, int bits)
{
  int v = fn_826E8488(reader, bits);
  if ((1 << (bits - 1)) & v)
    v |= -1 << bits;
  return v;
}
