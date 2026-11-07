typedef unsigned int undefined4;

extern int fn_82A9CA40(undefined4 a, void *b, int *c);
extern int fn_82A9E7D8(int a, undefined4 b, undefined4 *c);

typedef struct Args_82A9F2C8 {
  undefined4 a;
  undefined4 b;
  undefined4 c;
  undefined4 d;
  undefined4 e;
  undefined4 f;
} Args_82A9F2C8;

void fn_82A9F2C8(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4,
                 undefined4 param_5, undefined4 param_6, undefined4 param_7)
{
  int *status;
  int r;
  undefined4 out[4];
  Args_82A9F2C8 args;

  status = (int *)(param_1 + 0x90);
  if (*status >= 0) {
    r = fn_82A9E7D8(param_1, param_4, out);
    *status = r;
    if (r >= 0) {
      args.a = param_2;
      args.b = param_3;
      args.c = out[0];
      args.d = param_5;
      args.e = param_6;
      args.f = param_7;
      fn_82A9CA40(*(undefined4 *)(param_1 + 0x1c), &args, status);
    }
  }
}
