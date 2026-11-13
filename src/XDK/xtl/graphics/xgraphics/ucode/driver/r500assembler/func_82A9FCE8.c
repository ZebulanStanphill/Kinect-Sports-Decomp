extern int fn_82A9FBB0();


void fn_82A9FCE8(__int64 param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  
  uVar2 = *(unsigned int *)(param_2 + 0xc);
  uVar1 = *(unsigned int *)(param_2 + 8);
  if (uVar2 == 0) {
    uVar2 = 1;
  }
  uVar3 = 0;
  if (uVar2 != 0) {
    do {
      fn_82A9FBB0(param_1 + 0x28,uVar3 + uVar1);
      uVar3 = uVar3 + 1;
    } while ((uVar3 & 0xffffffff) < (unsigned __int64)uVar2);
  }
  return;
}

