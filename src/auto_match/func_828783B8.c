extern void fn_82292780(void *a, void *b);

typedef struct {
  unsigned char a;
  char pad[3];
  char sub[0x24];
  float f;
} S;

S *fn_828783B8(S *param_1, S *param_2)
{
  param_1->a = param_2->a;
  fn_82292780(param_1->sub, param_2->sub);
  param_1->f = param_2->f;
  return param_1;
}
