extern int fn_82693078();


void fn_826931A8(int param_1,unsigned int param_2,int param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int lVar3;
  int lVar4;
  
  uVar1 = param_2 >> 0x14;
  uVar2 = ((param_2 + param_3) - 1 & 0xffffffff) >> 0x14;
  if (uVar1 <= uVar2) {
    lVar4 = (uVar2 - uVar1) + 1;
    lVar3 = uVar1 * 8 + param_1 + 4;
    do {
      fn_82693078(lVar3,*(unsigned int *)param_1);
      lVar4 = lVar4 + -1;
      lVar3 = lVar3 + 8;
    } while (lVar4 != 0);
  }
  return;
}

