extern unsigned int iStack_30;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;


void fn_82D8D988(int param_1,unsigned int param_2,unsigned char param_3)

{
  int *piVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  int iStack_30;
  unsigned int uStack_2c;
  unsigned char uStack_28;
  
  uVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x90) - 1;
  if (-1 < (__int64)uVar2) {
    lVar3 = (uVar2 & 0x3fffffff) << 2;
    iStack_30 = param_1;
    uStack_2c = param_2;
    uStack_28 = param_3;
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0x8c) + (int)lVar3);
      if (piVar1 != (int *)0x0) {
        (**(int (***)())(*piVar1 + 4))(piVar1,&iStack_30);
      }
      uVar2 = uVar2 - 1;
      lVar3 = lVar3 + -4;
    } while (-1 < (__int64)uVar2);
  }
  return;
}

