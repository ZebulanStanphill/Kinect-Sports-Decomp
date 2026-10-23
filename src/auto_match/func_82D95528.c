extern int fn_82CE4040();
extern int fn_82CE4118();
extern int fn_82D82D60();
extern int fn_82D88D00();

typedef struct {
  int pad[2];
  int owner;
  int pad2[3];
  unsigned int res;
} M;

void fn_82D95528(M *param_1, int param_2)
{
  if (param_1->res != 0) {
    if (param_1->owner != 0) {
      fn_82D88D00(param_1->owner, param_1, param_1->res);
    }
    fn_82CE4118(param_1->res);
    param_1->res = 0;
  }
  param_1->res = param_2;
  fn_82CE4040(param_2);
  if (param_1->owner != 0) {
    fn_82D82D60(param_1->owner, param_1, param_1->res);
  }
}
