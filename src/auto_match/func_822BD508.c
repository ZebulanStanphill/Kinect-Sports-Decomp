extern unsigned int ___7bad_alloc_stdext__6B_;
extern unsigned int fn_822B8560;
extern unsigned int lbl_821ACD18;
extern unsigned int lbl_821ACD28;
extern unsigned int lbl_821ACD38;
extern unsigned int lbl_821ACD60;
extern unsigned int lbl_821ACDA4;
extern unsigned int lbl_83265A28;

/* WARNING: Inlined function: __savegprlr_24 */
/* WARNING: Inlined function: __savevmx_116 */
/* WARNING: Inlined function: __restvmx_116 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

__int64 fn_822BD508(__int64 param_1,int param_2)

{
  unsigned int uVar1;
  unsigned __int64 in_r0;
  unsigned int *puVar4;
  unsigned __int64 uVar2;
  unsigned int *puVar5;
  unsigned __int64 uVar3;
  int iVar6;
  __int64 lVar7;
  __int64 lVar8;
  unsigned char *puVar9;
  __int64 lVar10;
  __int64 lVar11;
  double dVar12;
  double dVar13;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  int (**pcStack_180)();
  unsigned int uStack_174;
  unsigned char *puStack_170;
  unsigned int uStack_16c;
  unsigned char auStack_168 [4];
  int iStack_164;
  unsigned char auStack_160 [4];
  int iStack_15c;
  unsigned char auStack_158 [4];
  int iStack_154;
  int (**pcStack_150)();
  unsigned int uStack_14c;
  unsigned int *puStack_148;
  unsigned char auStack_140 [16];
  unsigned int *puStack_130;
  
  fn_822B54F8();
  puVar4 = (unsigned int *)param_1;
  *puVar4 = &lbl_821ACD38;
  uVar2 = fn_8251F720(param_2 + 100,0);
  memcpy(param_1 + 0x1a0,uVar2,0x78);
  fn_8251FA58(uVar2);
  puVar5 = (unsigned int *)(param_2 + 0x84);
  lVar7 = param_1 + 0x214;
  lVar11 = 5;
  do {
    puVar5 = puVar5 + 1;
    lVar7 = lVar7 + 4;
    *(unsigned int *)lVar7 = *puVar5;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  puVar5 = (unsigned int *)fn_8251F720(param_2 + 0x4c,0);
  puVar4[0x8b] = *puVar5;
  puVar4[0x8c] = puVar5[1];
  puVar4[0x8d] = puVar5[2];
  puVar4[0x8e] = puVar5[3];
  fn_8251FA58();
  puVar5 = (unsigned int *)fn_8251F720(param_2 + 0x50,0);
  puVar4[0x8f] = *puVar5;
  puVar4[0x90] = puVar5[1];
  puVar4[0x91] = puVar5[2];
  puVar4[0x92] = puVar5[3];
  fn_8251FA58();
  puVar4[0x93] = *(unsigned int *)(param_2 + 0x5c);
  dVar13 = 0.0;
  lVar8 = param_1 + 0x1e4;
  lVar11 = param_1 + 0x1d8;
  lVar7 = param_1 + 0x1cc;
  lVar10 = param_1 + 0x1f0;
  puVar4[0x94] = *(unsigned int *)(param_2 + 0x74);
  puVar4[0x95] = *(unsigned int *)(param_2 + 0x68);
  puVar4[0x96] = *(unsigned int *)(param_2 + 0x78);
  puVar4[0x97] = *(unsigned int *)(param_2 + 0x7c);
  puVar4[0x98] = *(unsigned int *)(param_2 + 0x80);
  uVar1 = *(unsigned int *)(param_2 + 0x84);
  puVar4[0x9b] = 0;
  puVar4[0x99] = uVar1;
  puVar4[0x9a] = 0;
  puVar4[0x9c] = 0;
  puVar4[0x9d] = &lbl_821ACD60;
  puVar4[0x9e] = puVar4;
  puVar4[0x9f] = 0;
  puVar4[0xa0] = 0;
  puVar4[0xa1] = 0;
  puVar4[0xa2] = 0;
  puVar4[0xa3] = 0;
  puVar4[0xa4] = 0;
  puVar4[0xa5] = 0;
  loadVectorRightIndexed128(0xc,lVar8);
  loadVectorRightIndexed128(0xc,lVar11);
  loadVectorRightIndexed128(0xc,lVar7);
  loadVectorRightIndexed128(0xc,lVar10);
  loadVectorLeftIndexed128(in_r0,lVar10);
  loadVectorLeftIndexed128(in_r0,lVar8);
  loadVectorLeftIndexed128(in_r0,lVar11);
  loadVectorLeftIndexed128(in_r0,lVar7);
  uVar3 = fn_8251F720(param_2 + 0x60,0,uVar1,0xffffffff821acd60,lVar7,lVar11,lVar8,lVar10);
  fn_82321E18(param_1 + 0x2a0,uVar3);
  if ((uVar3 & 0xffffffff) != 0) {
    fn_8251FA58(uVar3);
  }
  puVar4[0x13b] = (float)dVar13;
  puVar4[0x13c] = (float)dVar13;
  puVar4[0x141] = (int)(param_1 + 0x1a0);
  puVar4[0x13d] = 1;
  puVar4[0x13e] = 0;
  puVar4[0x13f] = 1;
  puVar4[0x140] = 0;
  dVar12 = 1.0;
  puVar4[0x138] = 0x3f800000;
  puVar4[0x139] = 0x3f800000;
  puVar4[0x13a] = 0x3f800000;
  puVar4[0x142] = 0;
  puVar4[0x143] = 0;
  puVar4[0x144] = 0;
  puVar4[0x146] = 0;
  puVar4[0x147] = 0;
  puVar4[0x148] = 0;
  puVar4[0x14a] = 0;
  puVar4[0x14b] = 0;
  puVar4[0x14c] = 0;
  puVar4[0x14e] = 0;
  puVar4[0x14f] = 0;
  puVar4[0x150] = 0;
  puVar4[0x152] = 0;
  puVar4[0x153] = 0;
  puVar4[0x154] = 0;
  puVar4[0x156] = 0;
  puVar4[0x157] = 0;
  puVar4[0x158] = 0;
  puVar4[0x15a] = 0;
  puVar4[0x15b] = 0;
  puVar4[0x15c] = 0;
  puVar4[0x15e] = 0;
  puVar4[0x15f] = 0;
  puVar4[0x160] = 0;
  puVar4[0x162] = 0;
  puVar4[0x163] = 0;
  puVar4[0x164] = 0;
  puVar4[0x166] = 0;
  puVar4[0x167] = 0;
  puVar4[0x168] = 0;
  puVar4[0x16a] = 0;
  puVar4[0x16b] = 0;
  puVar4[0x16c] = 0;
  puVar4[0x16d] = 0;
  puStack_130 = (unsigned int *)fn_8265C9E0(0x14);
  if (puStack_130 != (unsigned int *)0x0) {
    *puStack_130 = &lbl_821ACDA4;
    puStack_130[1] = pcStack_180;
    puStack_130[2] = puVar4 + 0x142;
    puStack_130[3] = puVar4;
    puStack_130[4] = uStack_174;
    uVar3 = fn_8251F720(param_2 + 0x54,0);
    fn_8232AE78(param_1 + 0x5c0,uVar3,auStack_140);
    if ((uVar3 & 0xffffffff) != 0) {
      fn_8251FA58(uVar3);
    }
    fn_82359C18(auStack_140);
    puVar4[0x1d0] = (float)dVar13;
    puVar5 = (unsigned int *)((unsigned int)(puVar4 + 0x1cc) & 0xfffffff0);
    *puVar5 = in_register_000104d0;
    puVar5[1] = in_register_000104d4;
    puVar5[2] = in_register_000104d8;
    puVar5[3] = in_vr77;
    puVar4[0x1d2] = 0;
    puVar4[0x1d3] = 0;
    puVar4[0x1d4] = 0;
    puVar4[0x1dc] = 0;
    puVar4[0x1dd] = 0;
    puVar4[0x1de] = 0;
    puVar4[0x1df] = 0;
    puVar4[0x1e0] = 0;
    puVar4[0x1e1] = 0;
    puVar4[0x1e5] = (float)dVar12;
    puVar4[0x1e3] = 0;
    puVar4[0x1e6] = (float)dVar13;
    puVar4[0x1e4] = 0;
    puVar4[0x1e7] = (float)dVar13;
    puVar4[0x1e8] = 0;
    puVar4[0x1f2] = (float)dVar13;
    puVar4[0x1e9] = 0;
    puVar4[499] = (float)dVar13;
    puVar4[0x1ea] = 0;
    puVar4[0x1eb] = 0;
    puVar4[0x1ec] = 0;
    puVar4[0x1ed] = 0;
    puVar4[0x1ee] = 0;
    puVar4[0x1ef] = 0;
    puVar4[0x1f0] = 0;
    puVar4[0x1f1] = 0;
    puVar4[0x1e2] = 1;
    puVar4[500] = 1;
    puVar4[0x1f5] = 0;
    puVar4[0x1f6] = 0;
    puVar4[0x1f7] = 0;
    puVar4[0x1f8] = 0;
    puVar4[0x1f9] = 0;
    puVar4[0x1fa] = 0;
    puVar4[0x1fb] = 0;
    uVar1 = puVar4[0x46];
    if (*(int *)(param_2 + 0x70) != 0) {
      uVar3 = fn_8251F720(param_2 + 0x70,0);
      pcStack_150 = pcStack_180;
      uStack_14c = uVar1;
      puStack_148 = puVar4;
      uVar2 = fn_822C1CA8(auStack_168,&pcStack_150,*(unsigned int *)(puVar4[5] + 0x8c0),uVar3);
      fn_823F2E20(param_1 + 0x778,uVar2);
      if (iStack_164 != 0) {
        fn_822315A0();
      }
      if ((uVar3 & 0xffffffff) != 0) {
        fn_8251FA58(uVar3);
      }
    }
    if (*(int *)(param_2 + 0x58) != 0) {
      uVar3 = fn_8251F720(param_2 + 0x58,0);
      pcStack_150 = fn_822B8560;
      uStack_14c = uVar1;
      puStack_148 = puVar4;
      uVar2 = fn_822C1CA8(auStack_160,&pcStack_150,*(unsigned int *)(puVar4[5] + 0x8c0),uVar3);
      fn_823F2E20(param_1 + 0x780,uVar2);
      if (iStack_15c != 0) {
        fn_822315A0();
      }
      if ((uVar3 & 0xffffffff) != 0) {
        fn_8251FA58(uVar3);
      }
    }
    if (*(int *)(param_2 + 0x6c) != 0) {
      uVar3 = fn_8251F720(param_2 + 0x6c,0);
      pcStack_150 = pcStack_180;
      uStack_14c = uVar1;
      puStack_148 = puVar4;
      uVar2 = fn_822C1CA8(auStack_158,&pcStack_150,*(unsigned int *)(puVar4[5] + 0x8c0),uVar3);
      fn_823F2E20(param_1 + 0x770,uVar2);
      if (iStack_154 != 0) {
        fn_822315A0();
      }
      if ((uVar3 & 0xffffffff) != 0) {
        fn_8251FA58(uVar3);
      }
    }
    fn_8252CAF8(puVar4[5],1,puVar4[0xb] + 1 & 0xff);
    *(unsigned int *)(puVar4[0x46] + 0x2f4) = 1;
    iVar6 = fn_822B6788(param_1);
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    if (iVar6 == 1) {
      puVar9 = &lbl_821ACD18;
    }
    else {
      puVar9 = &lbl_821ACD28;
    }
    fn_822CCD18(puVar4[6],0xffffffff821acbd0,
                *(unsigned int *)
                 (puVar9 + (int)((float)((double)(float)(lbl_83265A28 & 0x7fffff | 0x3f800000) -
                                        dVar12) * -4.0) * -4));
    return param_1;
  }
  uStack_16c = 0;
  puStack_170 = &___7bad_alloc_stdext__6B_;
  lVar7 = __Raise_exception_stdext__QBAXXZ(&puStack_170);
  return lVar7;
}
