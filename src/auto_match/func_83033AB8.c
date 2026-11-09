extern void fn_83032B08(unsigned int key);
extern unsigned int *fn_83033EA8(int map, unsigned int *key);
extern unsigned int fn_830341D0(int map, unsigned int *key, int count);

int fn_83033AB8(int param_1, unsigned int param_2)
{
  unsigned int *puVar1;
  unsigned int key[2];

  key[0] = param_2;
  if (param_2 != 0) {
    fn_83032B08(param_2);
  }
  puVar1 = fn_83033EA8(param_1 + 0x88, key);
  if (puVar1 != 0) {
    *puVar1 = *puVar1 + 1;
  }
  else {
    key[0] = param_2;
    if (param_2 != 0) {
      fn_83032B08(param_2);
    }
    if (fn_830341D0(param_1 + 0x88, key, 1) == 0) {
      return 2;
    }
  }
  return 1;
}
