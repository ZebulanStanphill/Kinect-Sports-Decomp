typedef struct S_83075DD0 {
  unsigned __int64 q[8];
} S_83075DD0;

extern void fn_8307D470(S_83075DD0 *s);
extern void fn_8307D880(void *p, S_83075DD0 s);

void *fn_83075DD0(void *param_1)
{
  S_83075DD0 s;
  fn_8307D470(&s);
  fn_8307D880(param_1, s);
  return param_1;
}
