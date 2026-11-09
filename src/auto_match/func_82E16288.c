extern int fn_82CEA280(void *table, unsigned int key, int def);

int fn_82E16288(int param_1)
{
  if (*(unsigned int *)(param_1 + 8) != 0) {
    return fn_82CEA280((void *)(param_1 + 0x10), *(unsigned int *)(param_1 + 8), 0);
  }
  return 0;
}
