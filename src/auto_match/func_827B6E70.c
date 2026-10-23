extern int fn_827B6118();
extern int fn_827B6200();
extern int fn_827B6310();
static void Link(int node, int target) { *(int *)node = target; *(int *)(node + 4) = target; }

void fn_827B6E70(int param_1)
{
  unsigned int i;
  int e;
  fn_827B6118(param_1 + 0x84);
  Link(param_1 + 0x30, param_1 + 0x30);
  Link(param_1 + 0x50, param_1 + 0x3c);
  for (i = 0; i < *(unsigned int *)(param_1 + 0x88); i++) {
    e = *(int *)(param_1 + 0x78) + i * 0x30;
    Link(e + 0x14, e + 8);
  }
  fn_827B6200(param_1 + 0x1c);
  fn_827B6310(param_1 + 100);
  *(int *)(param_1 + 0x38) = 0;
  *(int *)(param_1 + 0x88) = 0;
}
