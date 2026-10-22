extern unsigned int *fn_8268D790(void *out, int list, unsigned int *key);

void fn_82678540(int param_1, unsigned int *param_2)
{
  unsigned int *puVar1;
  unsigned int key;
  unsigned int result;

  key = *param_2;
  puVar1 = fn_8268D790(&result, param_1 + 0x134, &key);
  *(unsigned int *)(param_1 + 0x2220) = 1;
  *(unsigned int *)(param_1 + 0x2228) = *puVar1;
}
