typedef unsigned char bool;


void fn_8227F7B8(int param_1,int param_2)

{
  bool bVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  
  uVar2 = *(unsigned int *)(param_1 + 0x6c);
  bVar1 = (~uVar2 & 1) == 0;
  if (param_2 == 0) {
    if (bVar1) goto LAB_8227f7e4;
    uVar2 = uVar2 | 1;
  }
  else {
    if (!bVar1) goto LAB_8227f7e4;
    uVar2 = uVar2 & 0xfffffffe;
  }
  *(unsigned int *)(param_1 + 0x6c) = uVar2;
LAB_8227f7e4:
  if ((((~(unsigned __int64)*(unsigned int *)(param_1 + 0x6c) & 0xffffffff) >> 1 & 1) == 0) ||
     (uVar3 = 1, (~(unsigned __int64)*(unsigned int *)(param_1 + 0x6c) & 1) == 0)) {
    uVar3 = 0;
  }
  *(unsigned int *)(*(int *)(param_1 + 0x70) + 0x34) = uVar3;
  return;
}

