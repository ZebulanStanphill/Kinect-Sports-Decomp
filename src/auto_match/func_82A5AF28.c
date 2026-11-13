#define true 1
extern unsigned int *auStack_40;
extern int fn_82A59C80();
extern int fn_82A5ADB0();
extern int fn_82A68878();
extern int fn_82A76548();


void fn_82A5AF28(int param_1)

{
  int (**pcVar2)();
  unsigned __int64 uVar1;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  unsigned int auStack_40 [4];
  
  pcVar2 = (int (**)())fn_82A68878();
  (*pcVar2)(0xffffffffffffffff,0);
  uVar5 = *(unsigned int *)(param_1 + 0x68);
  trapDoubleWordImmediate(6,(unsigned __int64)uVar5,0);
  uVar4 = ((unsigned __int64)(uVar5 >> 1) + (unsigned __int64)*(unsigned int *)(param_1 + 100) * 1000) / (unsigned __int64)uVar5
          & 0xffffffff;
  while( true ) {
    auStack_40[0] = 0;
    uVar1 = fn_82A76548(*(unsigned int *)(param_1 + 0x78),auStack_40);
    for (uVar5 = 0; (-1 < (int)uVar1 && (uVar5 < auStack_40[0])); uVar5 = uVar5 + 1) {
      uVar1 = fn_82A5ADB0(param_1);
    }
    if (*(int *)(param_1 + 0x7c) != 0) {
      uVar4 = 0xffffffffffffffff;
    }
    if ((int)uVar1 < 0) break;
    iVar3 = fn_82A59C80(param_1,uVar4);
    if (iVar3 == 0) {
      return;
    }
  }
  *(unsigned int *)(param_1 + 0x80) = 0;
  (**(int (***)())(**(int **)(param_1 + 0x6c) + 8))(*(int **)(param_1 + 0x6c),uVar1);
  return;
}

