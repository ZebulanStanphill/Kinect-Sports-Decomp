extern int fn_8267C498();
extern int fn_8269CEE0();


int fn_826CC300(__int64 param_1)

{
  int aiStack_20 [4];
  
  fn_8269CEE0(aiStack_20,param_1 + 0x30);
  if (aiStack_20[0] != 0) {
    *(int *)(aiStack_20[0] + 4) = *(int *)(aiStack_20[0] + 4) + 1;
    fn_8267C498(aiStack_20[0]);
    fn_8267C498(aiStack_20[0]);
  }
  return aiStack_20[0];
}

