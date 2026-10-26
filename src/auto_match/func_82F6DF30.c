int tolower(int c)
{
  if (c < 'A') {
    return c;
  }
  if (c > 'Z') {
    return c;
  }
  return c + 0x20;
}
