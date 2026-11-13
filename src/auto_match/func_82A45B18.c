void fn_82A45B18(unsigned int *param_1)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  int in_r0;
  unsigned int uVar4;
  int iVar5;
  __int64 lVar6;
  __int64 lVar7;
  unsigned int *puVar8;
  unsigned char in_vs32 [16];
  unsigned char in_vs35 [16];
  unsigned char in_vs43 [16];
  unsigned char in_vs62 [16];
  unsigned int in_register_000103f0;
  unsigned int in_register_000103f4;
  unsigned int in_register_000103f8;
  unsigned int in_vr63;
  
  RtlEnterCriticalSection(0xffffffff8315d948);
  uVar4 = 0;
  if (*param_1 != 0) {
    iVar5 = 0;
    do {
      puVar8 = (unsigned int *)(param_1[2] + iVar5);
      uVar1 = puVar8[0x10];
      if ((*puVar8 & 0x300000) != 0) {
        uVar3 = *puVar8 >> 0xe;
        lVar6 = 0;
        if ((uVar3 & 0x1f00) != 0) {
          lVar7 = ((((unsigned __int64)uVar3 & 0x1f00) - 1 & 0xffffffff) >> 7) + 1;
          do {
            dataCacheBlockFlush(lVar6 + (unsigned __int64)puVar8[0x11]);
            lVar6 = lVar6 + 0x80;
            lVar7 = lVar7 + -1;
          } while (lVar7 != 0);
        }
        if (puVar8[0xc] != 0) {
          altv207_13(in_vs32,in_vs43);
          puVar2 = (unsigned int *)(in_r0 + uVar1 & 0xfffffff0);
          *puVar2 = in_register_000103f0;
          puVar2[1] = in_register_000103f4;
          puVar2[2] = in_register_000103f8;
          puVar2[3] = in_vr63;
          puVar8[0xc] = 0;
        }
        if (puVar8[0xd] != 0) {
          altv207_13(in_vs43,in_vs62);
          puVar2 = (unsigned int *)(uVar1 + 0x10 & 0xfffffff0);
          *puVar2 = in_register_000103f0;
          puVar2[1] = in_register_000103f4;
          puVar2[2] = in_register_000103f8;
          puVar2[3] = in_vr63;
          puVar8[0xd] = 0;
        }
        if (puVar8[0xe] != 0) {
          altv207_13(in_vs43,in_vs35);
          puVar2 = (unsigned int *)(uVar1 + 0x20 & 0xfffffff0);
          *puVar2 = in_register_000103f0;
          puVar2[1] = in_register_000103f4;
          puVar2[2] = in_register_000103f8;
          puVar2[3] = in_vr63;
          puVar8[0xe] = 0;
        }
      }
      uVar1 = 1 << (*(unsigned short *)(puVar8 + 0x14) & 0x1f);
      *(unsigned int *)(((*(unsigned short *)(puVar8 + 0x14) >> 5) + 0x1ffa8650) * 4) =
           uVar1 << 0x18 | (uVar1 & 0xff00) << 8 | uVar1 >> 8 & 0xff00 | uVar1 >> 0x18;
      enforceInOrderExecutionIO();
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 0x60;
    } while (uVar4 < *param_1);
  }
  param_1[1] = param_1[1] & 0xfffdffff;
  RtlLeaveCriticalSection(0xffffffff8315d948);
  return;
}

