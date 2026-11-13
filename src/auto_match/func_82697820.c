extern int fn_826944C8();
extern int fn_826959C8();
extern int fn_82697248();


void fn_82697820(unsigned char *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int uVar2;
  __int64 lVar1;
  int aiStack_20 [4];
  
  fn_82697248(aiStack_20,param_1,param_2,param_3);
  fn_826959C8(param_1);
  *param_1 = 5;
  *(int *)(param_1 + 4) = aiStack_20[0];
  uVar2 = *(int *)(aiStack_20[0] + 8) + 1;
  *(unsigned int *)(aiStack_20[0] + 8) = uVar2;
  lVar1 = (unsigned __int64)uVar2 - 1;
  *(int *)(aiStack_20[0] + 8) = (int)lVar1;
  if (lVar1 == 0) {
    fn_826944C8();
  }
  return;
}

