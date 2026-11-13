extern unsigned int fn_8268AF70(const char *s, unsigned int len, unsigned int seed);
extern void fn_8272A508(void *a, void *b, unsigned int *c, unsigned int h);

static unsigned int *str_rep(unsigned int *s) { return (unsigned int *)(*s & 0xfffffffc); }
static const char *str_data(unsigned int *s) { return (const char *)(str_rep(s) + 2); }
static unsigned int str_len(unsigned int *s) { return *str_rep(s) & 0x7fffffff; }

void fn_82726018(void *param_1, void *param_2, unsigned int *param_3)
{
  fn_8272A508(param_1, param_2, param_3, fn_8268AF70(str_data(param_3), str_len(param_3), 0x1505));
}
