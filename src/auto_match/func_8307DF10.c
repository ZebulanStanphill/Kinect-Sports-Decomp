extern unsigned int lbl_7FEA1818;
extern unsigned int lbl_7FEA1819;
extern unsigned int lbl_7FEA181A;
extern unsigned int lbl_7FEA181B;


unsigned __int64 fn_8307DF10(unsigned int *param_1)

{
  unsigned int *puVar1;
  int in_r0;
  unsigned int *puVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned int *puVar6;
  unsigned char in_vs32 [16];
  unsigned char in_vs37 [16];
  unsigned char in_vs39 [16];
  unsigned char in_vs42 [16];
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
  
  if ((param_1[1] & 0x20000) == 0) {
    uVar5 = 0;
    if (*param_1 != 0) {
      iVar4 = 0;
      uVar3 = param_1[2];
      do {
        if ((unsigned __int64)*(unsigned short *)(uVar3 + 0x50) ==
            (((unsigned __int64)lbl_7FEA181B << 0x18 | (unsigned __int64)lbl_7FEA181A << 0x10 |
              (unsigned __int64)lbl_7FEA1819 << 8 | (unsigned __int64)lbl_7FEA1818) ^ 0x200)) {
          return 0;
        }
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 0x60;
        uVar3 = iVar4 + param_1[2];
      } while (uVar5 < *param_1);
    }
    uVar5 = 0;
    if (*param_1 != 0) {
      iVar4 = 0;
      do {
        puVar6 = (unsigned int *)(iVar4 + param_1[2]);
        puVar2 = puVar6 + 4;
        altv207_13(in_vs37,in_vs42);
        altv207_13(in_vs37,in_vs39);
        altv207_13(in_vs32,in_vs37);
        puVar1 = (unsigned int *)(in_r0 + (int)puVar6 & 0xfffffff0);
        *puVar1 = in_register_000103d0;
        puVar1[1] = in_register_000103d4;
        puVar1[2] = in_register_000103d8;
        puVar1[3] = in_vr61;
        uVar3 = *puVar6;
        puVar1 = (unsigned int *)(in_r0 + (int)puVar2 & 0xfffffff0);
        *puVar1 = in_register_000103f0;
        puVar1[1] = in_register_000103f4;
        puVar1[2] = in_register_000103f8;
        puVar1[3] = in_vr63;
        puVar1 = (unsigned int *)((unsigned int)(puVar6 + 8) & 0xfffffff0);
        *puVar1 = in_register_000103e0;
        puVar1[1] = in_register_000103e4;
        puVar1[2] = in_register_000103e8;
        puVar1[3] = in_vr62;
        if ((uVar3 >> 0x14 & 1) == 0) {
          puVar6[5] = 0;
          *puVar6 = uVar3 & 0xfffff000;
          *(unsigned int *)(iVar4 + param_1[2] + 0x54) = 0;
        }
        if ((uVar3 >> 0x14 & 2) == 0) {
          puVar6[6] = 0;
          puVar6[1] = puVar6[1] & 0xfffff000;
          *(unsigned int *)(iVar4 + param_1[2] + 0x58) = 0;
        }
        if ((uVar3 >> 0x14 & 3) == 0) {
          *puVar2 = *puVar2 & 0x7fffffff;
        }
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 0x60;
      } while (uVar5 < *param_1);
    }
    param_1[1] = param_1[1] | 0x20000;
  }
  return 1;
}

