extern int fn_82681728();
extern int fn_826944C8();


int * fn_82749D00(int *param_1,unsigned int *param_2)

{
  int iVar1;
  unsigned int uVar3;
  __int64 lVar2;
  int aiStack_20 [4];
  
  fn_82681728(aiStack_20,(unsigned __int64)*param_2 + 0x254,0xffffffff82012d7c);
  iVar1 = *(int *)(aiStack_20[0] + 8);
  *param_1 = aiStack_20[0];
  uVar3 = iVar1 + 1;
  *(unsigned int *)(aiStack_20[0] + 8) = uVar3;
  lVar2 = (unsigned __int64)uVar3 - 1;
  *(int *)(aiStack_20[0] + 8) = (int)lVar2;
  if (lVar2 == 0) {
    fn_826944C8();
  }
  return param_1;
}

