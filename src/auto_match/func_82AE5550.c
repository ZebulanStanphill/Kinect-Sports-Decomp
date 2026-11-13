void fn_82AE5550(int param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned int *puVar5;
  __int64 lVar4;
  
  puVar5 = (unsigned int *)((param_2 >> 3 & 0x1ffffffc) + param_1);
  puVar3 = (unsigned int *)((param_3 >> 3 & 0x1ffffffc) + param_1);
  uVar1 = -1 << (param_2 & 0x1f);
  uVar2 = (2 << (param_3 & 0x1f)) - 1;
  if (param_2 >> 5 == param_3 >> 5) {
    *puVar5 = uVar2 & uVar1 | *puVar5;
  }
  else {
    *puVar5 = *puVar5 | uVar1;
    if (puVar5 + 1 < puVar3) {
      for (lVar4 = (unsigned __int64)((unsigned int)((int)puVar3 + (-1 - (int)(puVar5 + 1))) >> 2) + 1; lVar4 != 0;
          lVar4 = lVar4 + -1) {
        puVar5 = puVar5 + 1;
        *puVar5 = 0xffffffff;
      }
    }
    *puVar3 = *puVar3 | uVar2;
  }
  return;
}

