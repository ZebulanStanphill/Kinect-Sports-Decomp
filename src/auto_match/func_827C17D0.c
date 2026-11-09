extern void free_pool(int, int);
extern void jpeg_free_small(int, int, int);
extern void jpeg_mem_term(int);

void self_destruct(int param_1)
{
  int i;
  for (i = 1; i >= 0; i--) {
    free_pool(param_1, i);
  }
  jpeg_free_small(param_1, *(int *)(param_1 + 4), 0x54);
  *(int *)(param_1 + 4) = 0;
  jpeg_mem_term(param_1);
}
