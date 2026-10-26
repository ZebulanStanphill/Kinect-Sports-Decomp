typedef struct { unsigned int v[4]; } Q16;

int fn_82E5C778(char *self, Q16 *out)
{
  if (*(void **)(self + 0xc) == 0) {
    return 0xc00d36b6;
  }
  if (out == 0) {
    return 0x80070057;
  }
  *out = *(Q16 *)(self + 0x48);
  return 0;
}
