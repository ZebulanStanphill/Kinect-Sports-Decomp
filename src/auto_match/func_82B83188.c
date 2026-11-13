typedef unsigned char bool;
#define true 1


bool fn_82B83188(unsigned int *param_1,int param_2,int param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  unsigned int uVar5;
  unsigned int *puVar6;
  unsigned int uVar7;
  int iVar8;
  
  uVar5 = param_3 + 1;
  uVar7 = *param_1;
  uVar3 = param_2 + 1;
  uVar1 = -1 << (uVar3 & 0x1f);
  uVar2 = (2 << (uVar5 & 0x1f)) - 1;
  if ((~uVar7 & 1) != 0) {
    puVar6 = (unsigned int *)((uVar3 >> 3 & 0x1ffffffc) + uVar7 + 4);
    puVar4 = (unsigned int *)((uVar5 >> 3 & 0x1ffffffc) + uVar7 + 4);
    uVar7 = *puVar6;
    if (uVar3 >> 5 != uVar5 >> 5) {
      if ((uVar7 & uVar1) == uVar1) {
        do {
          puVar6 = puVar6 + 1;
          if (puVar4 <= puVar6) {
            iVar8 = uVar2 - (*puVar4 & uVar2);
            goto code_r0x82b83238;
          }
        } while (*puVar6 == 0xffffffff);
      }
      return true;
    }
  }
  iVar8 = (uVar7 & uVar2 & uVar1) - (uVar2 & uVar1);
code_r0x82b83238:
  return iVar8 != 0;
}

