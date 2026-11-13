extern int fn_82F565A0();


void fn_82F56C08(int unused,unsigned int *d,unsigned int *s)
{
  if (d != 0) {
    char *b = (char *)s + 8;
    char *a = (char *)d + 8;
    *d = *s;
    fn_82F565A0(a, b);
    fn_82F565A0(a + 0x18, b + 0x18);
  }
}
