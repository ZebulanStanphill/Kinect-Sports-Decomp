extern int fn_822315A0();
extern int fn_82359C18();
extern int fn_828E32A0();


void fn_822511E0(int param_1)

{
  if (*(unsigned int *)(param_1 + 0x7c) != 0) {
    fn_822315A0(*(unsigned int *)(param_1 + 0x7c));
  }
  if (*(unsigned int *)(param_1 + 0x74) != 0) {
    fn_822315A0(*(unsigned int *)(param_1 + 0x74));
  }
  if (*(unsigned int *)(param_1 + 0x6c) != 0) {
    fn_822315A0(*(unsigned int *)(param_1 + 0x6c));
  }
  fn_82359C18(param_1 + 0x50);
  fn_82359C18(param_1 + 0x38);
  fn_828E32A0(param_1);
  return;
}

