typedef unsigned int size_t;
void *memset(void *dst, int c, size_t n);
extern int fn_8265C990();

void fn_82A84B20(int param_1)
{
  if (*(unsigned int *)(param_1 + 0x1c) != 0) {
    fn_8265C990(*(unsigned int *)(param_1 + 0x1c), 0x20980000);
  }
  if (*(unsigned int *)(param_1 + 0x20) != 0) {
    fn_8265C990(*(unsigned int *)(param_1 + 0x20), 0xb0980000);
  }
  memset((void *)param_1, 0, 0x34);
}
