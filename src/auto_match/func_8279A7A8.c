typedef unsigned int size_t;
void *memcpy(void *dst, const void *src, size_t n);

int fn_8279A7A8(int param_1, int param_2)
{
  int rc;

  memcpy((unsigned char *)param_1, (unsigned char *)param_2, 0x28);
  rc = *(int *)(param_2 + 0x28);
  if ((unsigned int)rc != 0) {
    *(int *)(rc + 4) = *(int *)(rc + 4) + 1;
  }
  *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
  *(unsigned char *)(param_1 + 0x2c) = *(unsigned char *)(param_2 + 0x2c);
  return param_1;
}
