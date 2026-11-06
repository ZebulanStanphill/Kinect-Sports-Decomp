typedef struct Obj_827663E0 {
  int a;
  int b;
  unsigned int c;
} Obj_827663E0;

extern int lbl_831E7E64;
extern int fn_8267B890(int, int, int *);
extern void fn_8267BE38(int);

void fn_827663E0(Obj_827663E0 *param_1, unsigned int param_2, int param_3)
{
  int n;
  int r;
  int tmp;

  if (param_2 > param_1->c) {
    fn_8267BE38(param_1->a);
    n = param_2 + param_3;
    param_1->c = n;
    if (n != 0) {
      tmp = 2;
      r = fn_8267B890(lbl_831E7E64, n, &tmp);
    } else {
      r = 0;
    }
    param_1->a = r;
  }
  param_1->b = 0;
}
