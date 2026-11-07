extern void *fn_8265C9E0(unsigned int size);
extern void *fn_824D4D20(void *self, void *arg);

void *fn_824CEE08(void *param_1, void *param_2)
{
  void *p;

  p = fn_8265C9E0(0x960);
  if (p != 0) {
    return fn_824D4D20(p, param_2);
  }
  return 0;
}
