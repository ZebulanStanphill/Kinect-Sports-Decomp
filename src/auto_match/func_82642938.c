typedef unsigned char bool;
#define true 1
#define false 0


char fn_82642938(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  bool bVar5;
  bool bVar6;
  unsigned int uVar7;
  unsigned int *puVar8;
  unsigned int *puVar9;
  unsigned int uVar10;
  
  if ((((*(unsigned char *)(param_1 + 8) & 7) == 7) || ((*(unsigned int *)(param_1 + 0x14) & 0x40000) != 0)) ||
     ((param_2 != 0 && ((*(unsigned int *)(param_2 + 0x14) & 0x20000) != 0)))) {
    return '\x02';
  }
  uVar3 = *(unsigned int *)(param_1 + 0x14) >> 5 & 0x1f;
  uVar10 = 0;
  puVar8 = (unsigned int *)(param_2 + 0x20);
  uVar4 = *(unsigned int *)(param_2 + 0x14) >> 5 & 0x1f;
  bVar5 = false;
  uVar7 = 0;
  puVar9 = (unsigned int *)((*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x18) + 9) * 4 + param_1);
  bVar6 = false;
  if (uVar4 != 0) {
    do {
      bVar5 = bVar6;
      uVar1 = *puVar8;
      if (uVar3 <= uVar10) {
        return '\0';
      }
      do {
        if ((uVar1 & 0xff) <= (unsigned int)(unsigned char)*puVar9) break;
        uVar10 = uVar10 + 1;
        puVar9 = puVar9 + 1;
      } while (uVar10 < uVar3);
      if (uVar3 <= uVar10) {
        return '\0';
      }
      uVar2 = *puVar9;
      if ((uVar1 & 0xff) < (uVar2 & 0xff)) {
        return '\0';
      }
      if ((uVar1 >> 0xc & ~(uVar2 >> 0xc) & 0xf) != 0) {
        return '\0';
      }
      if (((uVar2 ^ uVar1) & 0xf00) != 0) {
        bVar5 = true;
      }
      uVar7 = uVar7 + 1;
      puVar9 = puVar9 + 1;
      puVar8 = puVar8 + 1;
      uVar10 = uVar10 + 1;
      bVar6 = bVar5;
    } while (uVar7 < uVar4);
  }
  if (uVar10 < uVar3) {
    bVar5 = true;
  }
  return !bVar5 + '\x01';
}

