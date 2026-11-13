typedef unsigned char bool;
#define true 1
extern int fn_82F68CC0();


void fn_82551ED8(int param_1,int param_2,int param_3,int param_4)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  int iVar5;
  bool bVar6;
  
  iVar3 = param_2;
  while( true ) {
    iVar5 = (iVar3 + 1) * 2;
    if (param_3 <= iVar5) break;
    iVar2 = (iVar3 + 1) * 0x30 + param_1;
    uVar4 = *(unsigned int *)(iVar2 + 0x10);
    uVar1 = *(unsigned int *)(iVar2 + -8);
    if (uVar4 == uVar1) {
      bVar6 = *(unsigned int *)(iVar2 + -4) <= *(unsigned int *)(iVar2 + 0x14);
      uVar1 = *(unsigned int *)(iVar2 + -4) ^ *(unsigned int *)(iVar2 + 0x14);
    }
    else {
      bVar6 = uVar1 <= uVar4;
      uVar1 = uVar1 ^ uVar4;
    }
    if ((((~(unsigned __int64)uVar1 & 0xffffffff) >> 0x1f) + (unsigned __int64)bVar6 & 1) != 0) {
      iVar5 = iVar5 + -1;
    }
    fn_82F68CC0(iVar3 * 0x18 + param_1,iVar5 * 0x18 + param_1,0x18);
    iVar3 = iVar5;
  }
  if (iVar5 == param_3) {
    fn_82F68CC0(iVar3 * 0x18 + param_1,param_3 * 0x18 + param_1 + -0x18,0x18);
    iVar3 = param_3 + -1;
  }
  while( true ) {
    uVar4 = iVar3 - 1;
    iVar5 = ((int)uVar4 >> 1) + (unsigned int)((int)uVar4 < 0 && (uVar4 & 1) != 0);
    if (iVar3 <= param_2) break;
    uVar4 = *(unsigned int *)(param_4 + 0x10);
    iVar2 = iVar5 * 0x18 + param_1;
    uVar1 = *(unsigned int *)(iVar2 + 0x10);
    if (uVar1 == uVar4) {
      bVar6 = *(unsigned int *)(param_4 + 0x14) <= *(unsigned int *)(iVar2 + 0x14);
      uVar4 = *(unsigned int *)(param_4 + 0x14) ^ *(unsigned int *)(iVar2 + 0x14);
    }
    else {
      bVar6 = uVar4 <= uVar1;
      uVar4 = uVar4 ^ uVar1;
    }
    if ((((~(unsigned __int64)uVar4 & 0xffffffff) >> 0x1f) + (unsigned __int64)bVar6 & 1) == 0) break;
    fn_82F68CC0(iVar3 * 0x18 + param_1,iVar2,0x18);
    iVar3 = iVar5;
  }
  fn_82F68CC0(iVar3 * 0x18 + param_1,param_4,0x18);
  return;
}

