#define true 1
extern int fn_82270B70();
extern int fn_82F64988();


void fn_8226FEA8(int param_1,unsigned __int64 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  
  iVar1 = fn_82270B70();
  puVar4 = *(unsigned int **)(iVar1 + 0xa8);
  puVar3 = (unsigned int *)*puVar4;
  while( true ) {
    if (puVar4 == puVar3) {
      return;
    }
    puVar4 = (unsigned int *)puVar4[1];
    if (param_1 == 0) {
      iVar2 = puVar4[0x42d];
    }
    else {
      iVar2 = param_1 - puVar4[2];
    }
    if (iVar2 == 0) break;
    puVar3 = (unsigned int *)**(unsigned int **)(iVar1 + 0xa8);
  }
  puVar3 = puVar4 + 0xd;
  if (param_3 == 0) {
    puVar3 = puVar4 + 0x20d;
  }
  fn_82F64988(puVar3,0x400,param_2);
  *(unsigned int *)(iVar1 + 0x94) = 1;
  return;
}

