int toupper(int c)
{
  if (c < 'a') {
    return c;
  }
  if (c > 'z') {
    return c;
  }
  return c - 0x20;
}
