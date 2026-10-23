typedef struct { int a, b, c, d; } E;
typedef struct { int x; unsigned int n; E e[1]; } H;
extern int fn_8267BE38();

void fn_82686488(H **param_1)
{
  unsigned int i;
  unsigned int n;
  if (*param_1 != 0) {
    n = (*param_1)->n;
    for (i = 0; i <= n; i++) {
      if ((*param_1)->e[i].a != -2) {
        (*param_1)->e[i].a = -2;
      }
    }
    fn_8267BE38(*param_1);
    *param_1 = 0;
  }
}
