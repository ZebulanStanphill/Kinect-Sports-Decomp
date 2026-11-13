extern unsigned int iStack_30;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;


unsigned int fn_82D8D918(int param_1,unsigned int param_2)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  int iStack_30;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  
  uVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x90) - 1;
  uStack_28 = 0;
  uVar2 = 0;
  if (-1 < (__int64)uVar3) {
    lVar4 = (uVar3 & 0x3fffffff) << 2;
    iStack_30 = param_1;
    uStack_2c = param_2;
    do {
      puVar1 = *(unsigned int **)(*(int *)(param_1 + 0x8c) + (int)lVar4);
      if (puVar1 != (unsigned int *)0x0) {
        (**(int (***)())*puVar1)(puVar1,&iStack_30);
      }
      uVar3 = uVar3 - 1;
      lVar4 = lVar4 + -4;
      uVar2 = uStack_28;
    } while (-1 < (__int64)uVar3);
  }
  return uVar2;
}

