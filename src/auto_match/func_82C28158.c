extern int fn_82C10B28();
extern int fn_82C279A8();
extern int fn_82C27D50();
extern int fn_82C27E48();


void fn_82C28158(int param_1)

{
  unsigned int aiStack_20 [4];
  
  aiStack_20[0] = *(unsigned int *)(param_1 + 0x2c);
  fn_82C279A8();
  fn_82C27E48(param_1);
  fn_82C27D50(param_1,1);
  if (*(unsigned int *)(aiStack_20[0] + 0x10) != 0) {
    fn_82C10B28(*(unsigned int *)(aiStack_20[0] + 0x48),0x1d,aiStack_20[0] + 0x10);
  }
  if (aiStack_20[0] != 0) {
    fn_82C10B28(*(unsigned int *)(aiStack_20[0] + 0x48),0x1d,aiStack_20);
  }
  return;
}

