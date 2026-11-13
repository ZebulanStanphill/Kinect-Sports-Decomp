extern int fn_82A9CA40(unsigned int a, void *b, int *c);
extern int fn_82A9E7D8(int a, unsigned int b, unsigned int *c);

typedef struct Args_82A9F2C8 {
  unsigned int a;
  unsigned int b;
  unsigned int c;
  unsigned int d;
  unsigned int e;
  unsigned int f;
} Args_82A9F2C8;

void fn_82A9F2C8(int param_1, unsigned int param_2, unsigned int param_3, unsigned int param_4,
                 unsigned int param_5, unsigned int param_6, unsigned int param_7)
{
  int *status;
  int r;
  unsigned int out[4];
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
      fn_82A9CA40(*(unsigned int *)(param_1 + 0x1c), &args, status);
    }
  }
}
