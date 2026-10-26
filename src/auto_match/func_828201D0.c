extern void fn_82814650(int, void *);
extern void fn_82823F58(void);

void fn_828201D0(int param_1)
{
  unsigned int *p;

  p = *(unsigned int **)(param_1 + 0x20);
  if (p != 0) {
    if ((p[4] & 0x4000) != 0) {
      fn_82814650(p[6], p);
    }
    *(int *)(param_1 + 0x20) = 0;
  }
  fn_82823F58();
}
