extern int fn_82A40BA8();
extern int fn_82A411B8();
extern int fn_82A76380();
extern int fn_82A772B8();
extern unsigned int lbl_820AA970;


void fn_82A819E0(unsigned int *param_1)

{
  *param_1 = &lbl_820AA970;
  if ((int *)param_1[2] != (int *)0x0) {
    (*(int (**)())(*(int *)param_1[2] + 0x24))(param_1[2]);
  }
  if (param_1[0xc] != 0) {
    do {
      fn_82A40BA8(param_1 + 4);
      fn_82A76380();
    } while (param_1[0xc] != 0);
  }
  if (param_1[0x16] != 0) {
    do {
      fn_82A40BA8(param_1 + 0xe);
      fn_82A76380();
    } while (param_1[0x16] != 0);
  }
  fn_82A772B8(param_1 + 2);
  fn_82A772B8(param_1 + 3);
  *param_1 = 0;
  fn_82A411B8(param_1 + 0xe);
  fn_82A411B8(param_1 + 4);
  return;
}

