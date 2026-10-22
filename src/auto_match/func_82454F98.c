typedef struct {
  int f0;
  int a;
  int b;
  int c;
  int d;
  int flag;
} Data;

extern int fn_8251F720();
extern void fn_8251FA58();

void fn_82454F98(Data **param_1, int param_2)
{
  unsigned int p;
  int v;

  (*param_1)->flag = 1;
  p = fn_8251F720(param_2, 0);
  v = fn_8251F720(p, 0);
  (*param_1)->a = v;
  v = fn_8251F720(p + 4, 0);
  (*param_1)->b = v;
  v = fn_8251F720(p + 8, 0);
  (*param_1)->c = v;
  v = fn_8251F720(p + 12, 0);
  (*param_1)->d = v;
  if (p != 0) {
    fn_8251FA58(p);
  }
}
