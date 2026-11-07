extern void *fn_82242070(void *mem, void *arg);
extern void *fn_8265C9E0(unsigned int size);

void *fn_82242028(char *param_1)
{
  void *mem;

  mem = fn_8265C9E0(0x310);
  if (mem != 0) {
    return fn_82242070(mem, param_1 - 0x28);
  }
  return 0;
}
