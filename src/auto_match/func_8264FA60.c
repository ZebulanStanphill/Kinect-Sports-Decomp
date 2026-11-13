extern int fn_82645110();
extern int fn_82647DE8();
extern int fn_82647E90();
extern int fn_82655D90();


void fn_8264FA60(int param_1)

{
  fn_82647DE8(param_1,*(unsigned int *)(param_1 + 0x5588));
  fn_82655D90(param_1,*(unsigned int *)(param_1 + 0x558c),*(unsigned int *)(param_1 + 0x5590),
                    *(unsigned int *)(param_1 + 0x5598));
  fn_82647E90(param_1,*(unsigned int *)(param_1 + 0x5588),*(unsigned int *)(param_1 + 0x559c));
  fn_82645110(param_1);
  return;
}

