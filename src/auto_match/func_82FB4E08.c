extern int *fn_82FB6240(void *p);
int fn_82FB4E08(char *o, int v)
{
  int *p = fn_82FB6240(o + 0x54);
  if (p != 0) {
    *p = v;
    return v;
  }
  return 0;
}
