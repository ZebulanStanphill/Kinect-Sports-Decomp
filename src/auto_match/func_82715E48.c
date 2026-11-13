extern int fn_8267C498();
extern int fn_8269CEE0();


int * fn_82715E48(int *param_1)

{
  int aiStack_20 [4];
  
  fn_8269CEE0(aiStack_20);
  if (aiStack_20[0] != 0) {
    *(int *)(aiStack_20[0] + 4) = *(int *)(aiStack_20[0] + 4) + 1;
  }
  *param_1 = aiStack_20[0];
  if (aiStack_20[0] != 0) {
    fn_8267C498();
  }
  return param_1;
}

