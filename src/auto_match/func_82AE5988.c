#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))


__int64 fn_82AE5988(int param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int uVar6;
  __int64 lVar5;
  
  puVar4 = (unsigned int *)((param_2 >> 3 & 0x1ffffffc) + param_1);
  puVar3 = (unsigned int *)((param_3 >> 3 & 0x1ffffffc) + param_1);
  uVar6 = (2 << (param_3 & 0x1f)) - 1;
  uVar2 = -1 << (param_2 & 0x1f);
  if (param_2 >> 5 == param_3 >> 5) {
    uVar6 = uVar2 & uVar6;
    uVar2 = uVar6;
  }
  uVar6 = *puVar3 & uVar6;
  if (uVar6 == 0) {
    do {
      puVar3 = puVar3 + -1;
      if (puVar3 <= puVar4) {
        uVar6 = *puVar4 & uVar2;
        if (uVar6 == 0) {
          return -1;
        }
        uVar1 = CONCAT44(param_2,param_2);
        goto code_r0x82ae5a18;
      }
    } while (*puVar3 == 0);
    lVar5 = (((unsigned __int64)(unsigned int)((int)puVar3 - (int)puVar4 >> 2) & 0x7ffffff) * 0x20 +
            ((unsigned __int64)param_2 & 0xffffffe0)) - LZCOUNT(*puVar3);
  }
  else {
    uVar1 = CONCAT44(param_3,param_3);
code_r0x82ae5a18:
    lVar5 = (uVar1 & 0xffffffe0) - LZCOUNT(uVar6);
  }
  return lVar5 + 0x1f;
}

