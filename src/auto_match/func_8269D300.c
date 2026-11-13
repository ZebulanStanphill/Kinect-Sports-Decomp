typedef unsigned char bool;
extern int fn_8267C498();
extern int fn_8269CEE0();


bool fn_8269D300(__int64 param_1,int param_2)

{
  int aiStack_20 [2];
  
  fn_8269CEE0(aiStack_20,param_1 + 0xad8);
  if (aiStack_20[0] != 0) {
    *(int *)(aiStack_20[0] + 4) = *(int *)(aiStack_20[0] + 4) + 1;
    fn_8267C498(aiStack_20[0]);
  }
  if (aiStack_20[0] != 0) {
    fn_8267C498(aiStack_20[0]);
  }
  return param_2 == aiStack_20[0];
}

