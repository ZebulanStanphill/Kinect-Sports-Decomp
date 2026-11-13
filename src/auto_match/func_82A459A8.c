extern unsigned int lbl_7FEA1804;
extern unsigned int lbl_83219DD0;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82A459A8(void)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  int in_r0;
  int *piVar4;
  unsigned int uVar5;
  int iVar6;
  unsigned int *puVar7;
  __int64 lVar8;
  unsigned char in_vs32 [16];
  unsigned char in_vs42 [16];
  unsigned int in_register_000103f0;
  unsigned int in_register_000103f4;
  unsigned int in_register_000103f8;
  unsigned int in_vr63;
  
  RtlEnterCriticalSection(0xffffffff8315d948);
  enforceInOrderExecutionIO();
  piVar4 = &lbl_83219DD0;
  lVar8 = 0x140;
  do {
    puVar1 = (unsigned int *)*piVar4;
    if (puVar1 != (unsigned int *)0x0) {
      if (((puVar1[1] & 4) != 0) && ((puVar1[1] & 0x20000) == 0)) {
        uVar5 = 0;
        if (*puVar1 != 0) {
          iVar6 = 0;
          do {
            puVar7 = (unsigned int *)(iVar6 + puVar1[2]);
            if ((*puVar7 & 0x300000) != 0) {
              altv207_13(in_vs32,in_vs42);
              puVar3 = (unsigned int *)(in_r0 + (int)puVar7 & 0xfffffff0);
              *puVar3 = in_register_000103f0;
              puVar3[1] = in_register_000103f4;
              puVar3[2] = in_register_000103f8;
              puVar3[3] = in_vr63;
              uVar2 = *puVar7;
              if ((uVar2 >> 0x14 & 1) == 0) {
                puVar7[5] = 0;
                puVar7[0x15] = 0;
                *puVar7 = uVar2 & 0xfffff000;
              }
              if ((uVar2 >> 0x14 & 2) == 0) {
                puVar7[6] = 0;
                puVar7[0x16] = 0;
                puVar7[1] = puVar7[1] & 0xfffff000;
              }
              if ((uVar2 >> 0x14 & 3) == 0) {
                puVar7[4] = puVar7[4] & 0x7fffffff;
              }
            }
            uVar2 = 1 << (*(unsigned short *)(puVar7 + 0x14) & 0x1f);
            *(unsigned int *)(((*(unsigned short *)(puVar7 + 0x14) >> 5) + 0x1ffa8690) * 4) =
                 uVar2 << 0x18 | (uVar2 & 0xff00) << 8 | uVar2 >> 8 & 0xff00 | uVar2 >> 0x18;
            enforceInOrderExecutionIO();
            uVar5 = uVar5 + 1;
            iVar6 = iVar6 + 0x60;
          } while (uVar5 < *puVar1);
        }
        puVar1[1] = puVar1[1] | 0x20000;
      }
    }
    piVar4 = piVar4 + 1;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  lbl_7FEA1804 = 0x3000000;
  enforceInOrderExecutionIO();
  RtlLeaveCriticalSection(0xffffffff8315d948);
  return;
}

