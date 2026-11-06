extern void *fn_8265C940(unsigned int, int);
extern void fn_829AB0F0(unsigned int, const char *);

void *fn_829B5088(unsigned int param_1, unsigned int param_2)
{
  void *p;

  if (param_1 == 0 || param_2 == 0) {
    return 0;
  }
  p = fn_8265C940(param_2, 0x24810000);
  if (p == 0) {
    fn_829AB0F0(param_1, "Out of Memory");
  }
  return p;
}
