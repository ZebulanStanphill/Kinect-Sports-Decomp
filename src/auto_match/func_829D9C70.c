extern void fn_829D4970(void *, void *);
extern void fn_829D9970(void *, int, void *);
extern void *_alloca(unsigned);

void fn_829D9C70(char *param_1, void *param_2, unsigned char param_3)
{
  unsigned *p;
  unsigned n;
  unsigned lim;

  if (*(unsigned *)(param_1 + 0x9c90) == 0x14 && param_3 != 0) {
    fn_829D9970(param_1, 0xd, _alloca(0x40));
  }
  fn_829D4970(param_1, param_2);
  lim = *(unsigned *)(param_1 + 0x9c90);
  p = (unsigned *)(param_1 + 0x9c98);
  n = *p + 1;
  *p = n;
  if (n >= lim) n = lim;
  *p = n;
}
