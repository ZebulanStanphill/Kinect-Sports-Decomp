extern void fn_8287D6D8(char **out, void *map, int *key);
int fn_8287D5C0(char *p, int key)
{
  char *it;
  fn_8287D6D8(&it, p + 0xf0, &key);
  return *(int *)(it + 0xc0) != 0;
}
