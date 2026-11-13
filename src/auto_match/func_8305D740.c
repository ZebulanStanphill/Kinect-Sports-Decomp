extern int fn_82810208();
extern int fn_8305F7A0();
extern int fn_83060570();

typedef struct {
  char pad[0x28];
  int a28;
  int *a2c;
  int n30;
} S;

void fn_8305D740(S *param_1,unsigned __int64 param_2)
{
  int i;
  unsigned char buf [16];

  for (i = 0; i < param_1->n30; i++) {
    fn_82810208(fn_8305F7A0(param_1->a28, param_1->a2c[i]), param_2, buf);
    param_1->a2c[i] = fn_83060570(param_1->a28, buf);
  }
}
