extern int fn_8267C498();
extern int fn_8269CEE0();


int * fn_82715DE8(int *param_1,__int64 param_2)

{
  int aiStack_20 [4];
  
  fn_8269CEE0(aiStack_20,param_2 + 8);
  if (aiStack_20[0] != 0) {
    *(int *)(aiStack_20[0] + 4) = *(int *)(aiStack_20[0] + 4) + 1;
  }
  *param_1 = aiStack_20[0];
  if (aiStack_20[0] != 0) {
    fn_8267C498();
  }
  return param_1;
}

