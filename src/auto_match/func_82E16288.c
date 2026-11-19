extern int fn_82CEA280(void *table, unsigned int key, int def);

int fn_82E16288(int self)
{
  if (*(unsigned int *)(self + 8) != 0) {
    return fn_82CEA280((void *)(self + 0x10), *(unsigned int *)(self + 8), 0);
  }
  return 0;
}
