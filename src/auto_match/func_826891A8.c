void fn_826891A8(int *out, char *p)
{
  int t[4];
  t[0] = *(int *)(p + 0x10);
  t[1] = *(int *)(p + 0x14);
  t[2] = *(int *)(p + 0x18);
  t[3] = *(int *)(p + 0x1c);
  out[0] = t[0];
  out[1] = t[1];
  out[2] = t[2];
  out[3] = t[3];
}
