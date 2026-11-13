void fn_8264D380(int param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
  unsigned int uVar1;
  unsigned int *puVar3;
  __int64 lVar2;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int uVar6;
  __int64 lVar7;
  
  uVar6 = param_3 >> 5;
  uVar1 = param_2 >> 5;
  puVar3 = (unsigned int *)((uVar6 + 8) * 4 + param_1);
  puVar5 = (unsigned int *)((uVar1 + 8) * 4 + param_1);
  if (param_4 == 0) {
    if (uVar1 == uVar6) {
      uVar6 = *puVar5 & ~(0xffffffffU >> (param_2 & 0x1f) & ~(0xffffffffU >> (param_3 & 0x1f)));
    }
    else {
      *puVar5 = *puVar5 & ~(0xffffffffU >> (param_2 & 0x1f));
      puVar4 = puVar5 + 1;
      if (puVar4 < puVar3) {
        lVar2 = (unsigned __int64)((unsigned int)((int)puVar3 + (-1 - (int)puVar4)) >> 2) + 1;
        for (lVar7 = lVar2; lVar7 != 0; lVar7 = lVar7 + -1) {
          puVar5 = puVar5 + 1;
          *puVar5 = 0;
        }
        puVar4 = puVar4 + (int)lVar2;
      }
      puVar5 = puVar4;
      uVar6 = 0xffffffffU >> (param_3 & 0x1f) & *puVar5;
    }
  }
  else if (uVar1 == uVar6) {
    uVar6 = 0xffffffffU >> (param_2 & 0x1f) & ~(0xffffffffU >> (param_3 & 0x1f)) | *puVar5;
  }
  else {
    *puVar5 = 0xffffffffU >> (param_2 & 0x1f) | *puVar5;
    puVar4 = puVar5 + 1;
    if (puVar4 < puVar3) {
      lVar2 = (unsigned __int64)((unsigned int)((int)puVar3 + (-1 - (int)puVar4)) >> 2) + 1;
      for (lVar7 = lVar2; lVar7 != 0; lVar7 = lVar7 + -1) {
        puVar5 = puVar5 + 1;
        *puVar5 = 0xffffffff;
      }
      puVar4 = puVar4 + (int)lVar2;
    }
    puVar5 = puVar4;
    uVar6 = *puVar5 | ~(0xffffffffU >> (param_3 & 0x1f));
  }
  *puVar5 = uVar6;
  return;
}

