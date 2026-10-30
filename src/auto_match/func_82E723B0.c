typedef struct { int a, b, c, d; } V;
int fn_82E723B0(char *param_1, int *param_2)
{
  V *d = (V *)(param_1 + 0x10);
  V *s = (V *)param_2;
  *d = *s;
  return 0;
}
