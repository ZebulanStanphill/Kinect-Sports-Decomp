extern int fn_82243568();
extern int fn_8236D750();
extern int fn_82897600();
extern int fn_82897B18();
extern int fn_82898220();

static void Init_828A9550(int sub, int owner, int data)
{
  fn_82897600(owner, sub, fn_82897B18(data));
  *(int *)(sub + 0x28) = *(int *)(owner + 0xc);
  fn_82898220(sub, owner, data, *(int *)(owner + 4));
}

static void Init2_828A9550(int sub, int owner, int data)
{
  int v;
  Init_828A9550(sub, owner, data);
  v = fn_8236D750(data);
  fn_82243568(sub + 4, 0, v, 0);
}

void fn_828A9550(int param_1)
{
  int base;

  base = *(int *)(param_1 + 0x10);
  Init_828A9550(param_1 + 0x48, param_1, base + 0x34);
  Init_828A9550(param_1 + 0x9c, param_1, base + 0x8c);
  Init2_828A9550(param_1 + 0xf0, param_1, base + 0xe4);
  Init2_828A9550(param_1 + 0x144, param_1, base + 0x144);
  Init2_828A9550(param_1 + 0x198, param_1, base + 0x19c);
  Init2_828A9550(param_1 + 0x1ec, param_1, base + 500);
  Init2_828A9550(param_1 + 0x240, param_1, base + 0x24c);
  Init2_828A9550(param_1 + 0x294, param_1, base + 0x2a4);
}
