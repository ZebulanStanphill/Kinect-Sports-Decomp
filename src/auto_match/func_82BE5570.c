unsigned char fn_82BE5570(char c)
{
  unsigned char r;
  if (c >= '0' && c <= '9') {
    r = c - 0x30;
    return r;
  }
  if (c >= 'A' && c <= 'F') {
    r = c - 0x37;
  } else if (c >= 'a' && c <= 'f') {
    r = c - 0x57;
  } else {
    return 0;
  }
  return r;
}
