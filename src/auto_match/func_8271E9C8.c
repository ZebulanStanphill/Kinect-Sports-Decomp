extern int fn_8267C498();
extern int fn_82681838();
extern int fn_826959C8();
extern int fn_8269F500();
extern int fn_826A7398();
extern int fn_82711FA8();


void fn_8271E9C8(int param_1)

{
  unsigned char *puVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  int aiStack_20 [2];
  
  puVar1 = *(unsigned char **)(param_1 + 4);
  fn_826959C8(puVar1);
  *puVar1 = 1;
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar2 = fn_826A7398();
    fn_82711FA8(aiStack_20,uVar2);
    if (aiStack_20[0] != 0) {
      uVar3 = (unsigned __int64)*(unsigned int *)(aiStack_20[0] + 0x80);
      if (*(unsigned int *)(aiStack_20[0] + 0x80) == 0) {
        uVar3 = fn_8269F500(aiStack_20[0]);
      }
      fn_82681838(*(unsigned int *)(param_1 + 4),uVar3 + 0xc);
      fn_8267C498(aiStack_20[0]);
    }
  }
  return;
}

