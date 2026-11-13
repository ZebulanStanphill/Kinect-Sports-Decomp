typedef unsigned char bool;
#define true 1


bool fn_82AE54C0(int param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  
  puVar2 = (unsigned int *)((param_3 >> 3 & 0x1ffffffc) + param_1);
  puVar4 = (unsigned int *)((param_2 >> 3 & 0x1ffffffc) + param_1);
  uVar1 = -1 << (param_2 & 0x1f);
  uVar3 = (2 << (param_3 & 0x1f)) - 1;
  if (param_2 >> 5 == param_3 >> 5) {
    uVar3 = *puVar4 & uVar3 & uVar1;
  }
  else {
    uVar1 = *puVar4 & uVar1;
    while( true ) {
      if (uVar1 != 0) {
        return true;
      }
      puVar4 = puVar4 + 1;
      if (puVar2 <= puVar4) break;
      uVar1 = *puVar4;
    }
    uVar3 = *puVar2 & uVar3;
  }
  return uVar3 != 0;
}

