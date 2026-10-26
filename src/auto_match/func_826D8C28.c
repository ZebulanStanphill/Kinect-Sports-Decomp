typedef unsigned int uint;
extern uint fn_8268AF70(const char *s, uint len, uint seed);
extern void fn_826DC2D8(void *a, void *b, uint *c, uint h);

static uint *str_rep(uint *s) { return (uint *)(*s & 0xfffffffc); }
static const char *str_data(uint *s) { return (const char *)(str_rep(s) + 2); }
static uint str_len(uint *s) { return *str_rep(s) & 0x7fffffff; }

void fn_826D8C28(void *param_1, void *param_2, uint *param_3)
{
  fn_826DC2D8(param_1, param_2, param_3, fn_8268AF70(str_data(param_3), str_len(param_3), 0x1505));
}
