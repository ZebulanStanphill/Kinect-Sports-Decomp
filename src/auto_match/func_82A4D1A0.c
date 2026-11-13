typedef unsigned char bool;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_82A4D1A0(__int64 param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int *puVar4;
  char in_RESERVE;
  unsigned char in_cr0;
  
  iVar3 = (int)param_1;
  if (*(int *)(iVar3 + 0x44) == 0) {
    do {
      puVar4 = (unsigned int *)(param_1 + 0x40);
      uVar1 = *puVar4;
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(0xffffffffffffffff,0,param_1 + 0x40);
        *puVar4 = uVar2;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    *(unsigned int *)(iVar3 + 0x44) = uVar1;
  }
  puVar4 = *(unsigned int **)(iVar3 + 0x44);
  *puVar4 = *param_2;
  puVar4[1] = param_2[1];
  puVar4[2] = param_2[2];
  *(unsigned int *)(iVar3 + 0x1c) = *param_2;
  *(unsigned int *)(iVar3 + 0x20) = param_2[1];
  *(unsigned int *)(iVar3 + 0x24) = param_2[2];
  return;
}

