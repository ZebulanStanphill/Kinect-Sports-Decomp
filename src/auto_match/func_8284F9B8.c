extern int fn_8284D780();
extern int fn_82850AA0();


void fn_8284F9B8(int param_1,int param_2,unsigned __int64 param_3)

{
  unsigned int aiStack_20 [2];
  
  fn_8284D780(*(unsigned int *)(param_1 + 4),aiStack_20);
  if (aiStack_20[0] != 0) {
    fn_82850AA0(aiStack_20[0],*(unsigned int *)(param_2 + 0x38),param_3);
  }
  return;
}

