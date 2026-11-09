extern char *fn_82E1F690(const char *s);

char *fn_82E20350(void)
{
  char buf[256];
  buf[0] = 0;
  return fn_82E1F690(buf[0] ? buf : "Unknown");
}
