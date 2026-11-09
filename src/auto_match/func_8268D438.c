extern unsigned int fn_8268D210(int pool, int size);
extern unsigned int fn_826F01D0(unsigned int mem, int owner, float value);
extern unsigned char fn_826F06A8(int owner);
extern void fn_826F0768(int owner, unsigned int item, int flag);

void fn_8268D438(int param_1, float *param_2)
{
  unsigned int mem;
  unsigned int item;

  if (fn_826F06A8(param_1) != 0) {
    do {
      mem = fn_8268D210(param_1 + 0xf4, 0x188);
      if (mem != 0) {
        item = fn_826F01D0(mem, param_1, *param_2);
      }
      else {
        item = 0;
      }
      fn_826F0768(param_1, item, 1);
    } while (fn_826F06A8(param_1) != 0);
  }
  *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + 1;
}
