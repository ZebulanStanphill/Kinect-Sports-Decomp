extern void fn_82819260(void);
extern void fn_82822F60(char *a, char *b, void (*cb)(void), int d);

void fn_82819350(char *param_1, char *param_2, short param_3)
{
  fn_82822F60(param_1 + 200, param_2 + param_3 * 0x40, fn_82819260, 0);
}
