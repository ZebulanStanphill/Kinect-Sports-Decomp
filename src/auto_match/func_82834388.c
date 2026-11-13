#define true 1
extern int fn_828342A8();


void fn_82834388(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  unsigned int *puVar3;
  int iVar4;
  
  iVar2 = param_2;
  while( true ) {
    iVar4 = (iVar2 + 1) * 2;
    if (param_3 <= iVar4) break;
    iVar1 = (iVar2 + 1) * 0x18 + param_1;
    if (*(unsigned int *)(iVar1 + 4) < *(unsigned int *)(iVar1 + -8)) {
      iVar4 = iVar4 + -1;
    }
    puVar3 = (unsigned int *)(iVar4 * 0xc + param_1);
    iVar1 = iVar2 * 0xc + param_1;
    *(unsigned int *)(iVar2 * 0xc + param_1) = *puVar3;
    *(unsigned int *)(iVar1 + 4) = puVar3[1];
    *(unsigned int *)(iVar1 + 8) = puVar3[2];
    iVar2 = iVar4;
  }
  if (iVar4 == param_3) {
    iVar4 = param_3 * 0xc + param_1;
    iVar1 = iVar2 * 0xc + param_1;
    *(unsigned int *)(iVar2 * 0xc + param_1) = *(unsigned int *)(iVar4 + -0xc);
    iVar2 = param_3 + -1;
    *(unsigned int *)(iVar1 + 4) = *(unsigned int *)(iVar4 + -8);
    *(unsigned int *)(iVar1 + 8) = *(unsigned int *)(iVar4 + -4);
  }
  fn_828342A8(param_1,iVar2,param_2);
  return;
}

