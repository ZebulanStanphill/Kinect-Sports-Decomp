typedef int (*code)();
typedef unsigned char (*bcode)();
extern int fn_8304FC90();

struct Flags { unsigned a : 4; unsigned b : 1; unsigned rest : 27; };
struct Flags2 { int a : 4; int b : 1; int rest : 27; };

int fn_830507C8(int *param_1)
{
  unsigned char t = ((struct Flags *)(param_1 + 0x1d))->b; if (t == 0) {
    (*(code *)(param_1[0x1e] + 4))(param_1 + 0x1e);
  }
  if ((*(bcode *)(*param_1 + 4))(param_1)) {
    fn_8304FC90(param_1);
    return 1;
  }
  return 0;
}
