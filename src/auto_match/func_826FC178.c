extern int fn_8267C498();
extern int fn_8269CEE0();


unsigned __int64 fn_826FC178(int param_1)

{
  int iVar1;
  unsigned __int64 uVar2;
  int aiStack_30 [4];
  
  fn_8269CEE0(aiStack_30,param_1);
  iVar1 = aiStack_30[0];
  if (aiStack_30[0] != 0) {
    *(int *)(aiStack_30[0] + 4) = *(int *)(aiStack_30[0] + 4) + 1;
    fn_8267C498(aiStack_30[0]);
  }
  fn_8269CEE0(aiStack_30,param_1 + 4);
  if (aiStack_30[0] != 0) {
    *(int *)(aiStack_30[0] + 4) = *(int *)(aiStack_30[0] + 4) + 1;
    fn_8267C498(aiStack_30[0]);
  }
  if (((iVar1 == aiStack_30[0]) && ((iVar1 != 0 || ((*(unsigned char *)(param_1 + 0x20) & 0x80) != 0)))) &&
     ((aiStack_30[0] != 0 || ((*(unsigned char *)(param_1 + 0x20) & 0x40) != 0)))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  if (aiStack_30[0] != 0) {
    fn_8267C498(aiStack_30[0]);
  }
  if (iVar1 != 0) {
    fn_8267C498(iVar1);
  }
  return uVar2;
}

