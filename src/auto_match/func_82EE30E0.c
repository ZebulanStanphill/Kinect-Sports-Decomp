typedef struct { int v[4]; } Q16;

int fn_82EE30E0(int param_1, Q16 *param_2)
{
  if (*(void **)(param_1 + 0xc) == 0) {
    return 0xc00d36b6;
  }
  *(Q16 *)(param_1 + 0x174) = *param_2;
  return 0;
}
