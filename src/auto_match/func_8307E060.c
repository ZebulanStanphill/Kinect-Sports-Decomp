unsigned __int64 fn_8307E060(unsigned int *param_1)

{
  unsigned short uVar1;
  int iVar2;
  unsigned int *puVar3;
  int in_r0;
  unsigned __int64 uVar4;
  unsigned int *puVar5;
  unsigned int uVar6;
  __int64 lVar7;
  int iVar8;
  unsigned int uVar9;
  __int64 lVar10;
  unsigned char in_vs32 [16];
  unsigned char in_vs38 [16];
  unsigned char in_vs39 [16];
  unsigned char in_vs43 [16];
  unsigned int in_register_000103d0;
  unsigned int in_register_000103d4;
  unsigned int in_register_000103d8;
  unsigned int in_vr61;
  unsigned int in_register_000103e0;
  unsigned int in_register_000103e4;
  unsigned int in_register_000103e8;
  unsigned int in_vr62;
  unsigned int in_register_000103f0;
  unsigned int in_register_000103f4;
  unsigned int in_register_000103f8;
  unsigned int in_vr63;
  
  uVar9 = *param_1;
  if (uVar9 != 0) {
    puVar5 = (unsigned int *)param_1[2];
    uVar4 = (unsigned __int64)uVar9;
    do {
      lVar10 = 0;
      if ((*puVar5 >> 0xe & 0x1f00) != 0) {
        lVar7 = ((((unsigned __int64)(*puVar5 >> 0xe) & 0x1f00) - 1 & 0xffffffff) >> 7) + 1;
        do {
          dataCacheBlockFlush(lVar10 + (unsigned __int64)puVar5[0x11]);
          lVar10 = lVar10 + 0x80;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      uVar4 = uVar4 - 1;
      puVar5 = puVar5 + 0x18;
    } while (uVar4 != 0);
  }
  if (((param_1[1] & 0x20000) != 0) && (uVar6 = 0, uVar9 != 0)) {
    iVar8 = 0;
    do {
      uVar6 = uVar6 + 1;
      iVar2 = iVar8 + param_1[2];
      iVar8 = iVar8 + 0x60;
      iVar2 = *(int *)(iVar2 + 0x40);
      altv207_13(in_vs43,in_vs39);
      altv207_13(in_vs43,in_vs38);
      altv207_13(in_vs32,in_vs43);
      puVar3 = (unsigned int *)(in_r0 + iVar2 & 0xfffffff0);
      *puVar3 = in_register_000103d0;
      puVar3[1] = in_register_000103d4;
      puVar3[2] = in_register_000103d8;
      puVar3[3] = in_vr61;
      puVar3 = (unsigned int *)(iVar2 + 0x10U & 0xfffffff0);
      *puVar3 = in_register_000103f0;
      puVar3[1] = in_register_000103f4;
      puVar3[2] = in_register_000103f8;
      puVar3[3] = in_vr63;
      puVar3 = (unsigned int *)(iVar2 + 0x20U & 0xfffffff0);
      *puVar3 = in_register_000103e0;
      puVar3[1] = in_register_000103e4;
      puVar3[2] = in_register_000103e8;
      puVar3[3] = in_vr62;
    } while (uVar6 < *param_1);
  }
  uVar9 = 0;
  if (*param_1 != 0) {
    iVar8 = 0;
    do {
      uVar1 = *(unsigned short *)(iVar8 + param_1[2] + 0x50);
      uVar6 = 1 << (uVar1 & 0x1f);
      *(unsigned int *)(((uVar1 >> 5) + 0x1ffa8650) * 4) =
           uVar6 << 0x18 | (uVar6 & 0xff00) << 8 | uVar6 >> 8 & 0xff00 | uVar6 >> 0x18;
      enforceInOrderExecutionIO();
      uVar9 = uVar9 + 1;
      iVar8 = iVar8 + 0x60;
    } while (uVar9 < *param_1);
  }
  param_1[1] = param_1[1] & 0xfffcffff;
  return 0;
}

