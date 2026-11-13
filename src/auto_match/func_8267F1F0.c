extern int fn_8267C8D8();
extern int fn_8267CB08();
extern int fn_8267D7C8();
extern int fn_8267D9C0();
extern int fn_8267EC58();
extern int fn_8267ECD0();


unsigned int fn_8267F1F0(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  int aiStack_20 [2];
  
  fn_8267C8D8(param_1 + 0x18);
  if (0 < *(int *)(param_1 + 0x14)) {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
  }
  fn_8267CB08(param_1 + 0x2c);
  aiStack_20[0] = 0;
  fn_8267D7C8(param_1,aiStack_20);
  fn_8267D9C0(param_1 + 0x18);
  iVar2 = aiStack_20[0];
  if (aiStack_20[0] != 0) {
    fn_8267ECD0(aiStack_20[0]);
  }
  uVar1 = *(unsigned int *)(param_1 + 0x14);
  if (iVar2 != 0) {
    fn_8267EC58(iVar2);
  }
  return uVar1;
}

