extern int fn_8265C990();
extern int fn_82F2CB10();
extern int fn_82F2CBD0();


void fn_82EDB418(int param_1)

{
  if (*(unsigned int *)(param_1 + 0x160) != 0) {
    fn_8265C990(*(unsigned int *)(param_1 + 0x160),0x248c8000);
    *(unsigned int *)(param_1 + 0x160) = 0;
  }
  if (*(unsigned int *)(param_1 + 0x164) != 0) {
    fn_8265C990(*(unsigned int *)(param_1 + 0x164),0x248c8000);
    *(unsigned int *)(param_1 + 0x164) = 0;
  }
  if (*(unsigned int *)(param_1 + 4) != 0) {
    fn_8265C990(*(unsigned int *)(param_1 + 4),0x248c8000);
    *(unsigned int *)(param_1 + 4) = 0;
  }
  fn_82F2CB10(param_1 + 0xcc);
  fn_82F2CBD0(param_1 + 0x40);
  return;
}

