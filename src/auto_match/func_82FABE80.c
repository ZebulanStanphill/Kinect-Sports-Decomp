typedef unsigned int (*code)(void *);
extern unsigned int fn_82FAD0A8(unsigned int p);

unsigned int fn_82FABE80(int *param_1)
{
  unsigned int r;

  r = (*(code *)(*param_1 + 0x18))(param_1);
  if (r == 0) {
    return 0;
  }
  return fn_82FAD0A8(r);
}
