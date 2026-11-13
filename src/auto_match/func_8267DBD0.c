extern int fn_8267C4F0();
extern int fn_8267D560();
extern int fn_8267D5B0();
extern int fn_8267D7C8();
extern int fn_8267EC58();
extern int fn_8267ECD0();


void fn_8267DBD0(__int64 param_1)

{
  int iVar1;
  int aiStack_20 [2];
  
  aiStack_20[0] = 0;
  fn_8267D7C8(param_1,aiStack_20);
  fn_8267D560(param_1 + 0x18,0xfffffffffffffffe);
  fn_8267D5B0(param_1 + 0x18,2);
  fn_8267C4F0(param_1);
  iVar1 = aiStack_20[0];
  if (aiStack_20[0] != 0) {
    fn_8267ECD0(aiStack_20[0]);
    fn_8267EC58(iVar1);
  }
  return;
}

