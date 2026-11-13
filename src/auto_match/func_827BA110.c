void fn_827BA110(int param_1)
{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  unsigned int uVar5;
  short *psVar6;
  short *psVar7;

  for (uVar3 = 0; uVar3 < *(unsigned int *)(param_1 + 4); uVar3++) {
      puVar4 = (unsigned int *)(*(int *)((uVar3 >> 2 & 0x3ffffffc) + *(int *)(param_1 + 0x10)) +
                       (uVar3 & 0xf) * 8);
      uVar1 = puVar4[1];
      if (2 < uVar1) {
        uVar2 = *puVar4;
        uVar5 = (uVar2 + uVar1) - 1;
        psVar7 = (short *)(*(int *)((uVar2 >> 4 & 0xffffffc) + *(int *)(param_1 + 0x20)) +
                          (uVar2 & 0x3f) * 4);
        psVar6 = (short *)(*(int *)((uVar5 >> 4 & 0xffffffc) + *(int *)(param_1 + 0x20)) +
                          (uVar5 * 4 & 0xfc));
        if ((*psVar7 == *psVar6) && (psVar7[1] == psVar6[1])) {
          puVar4[1] = uVar1 - 1;
        }
      }
  }
}
