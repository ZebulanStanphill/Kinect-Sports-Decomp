extern void fn_8282D640(int a, int b, void *c, int d);
extern void fn_8282AF30(void);

void fn_8282B450(int param_1)
{
  *(unsigned char *)(param_1 + 0x3eb) = 1;
  fn_8282D640(param_1, param_1 + 0x344, fn_8282AF30, 0);
}
