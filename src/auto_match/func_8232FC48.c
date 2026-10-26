extern void fn_822315A0(void *p);
extern void fn_82359C18(void *p);
extern unsigned int lbl_821AF1C8;
extern unsigned int lbl_821B0928;

void fn_8232FC48(void **param_1)
{
  *param_1 = &lbl_821B0928;
  fn_82359C18(param_1 + 0x10);
  if (param_1[0xd] != 0) {
    fn_822315A0(param_1[0xd]);
  }
  if (param_1[6] != 0) {
    fn_822315A0(param_1[6]);
  }
  *param_1 = &lbl_821AF1C8;
}
