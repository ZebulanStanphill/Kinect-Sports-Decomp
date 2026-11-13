#define CONCAT22(h,l) ((unsigned int)((((unsigned short)(h)) << 16) | ((unsigned short)(l))))
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_100;
extern int fn_8265C940();
extern int fn_82A59558();
extern int fn_82C09A48();
extern int fn_82C09B40();
extern int fn_82C159B8();
extern int fn_82C16D70();
extern int fn_82C1CE58();
extern int fn_82F68CC0();
extern unsigned int iStack0000002c;
extern unsigned int iStack_cc;
extern unsigned int uStack00000026;
extern unsigned int uStack_108;
extern unsigned int uStack_10c;
extern unsigned int uStack_110;
extern unsigned int uStack_114;
extern unsigned int uStack_117;
extern unsigned int uStack_118;
extern unsigned int uStack_119;
extern unsigned int uStack_11a;
extern unsigned int uStack_11b;
extern unsigned int uStack_11c;
extern unsigned int uStack_11d;
extern unsigned int uStack_11e;
extern unsigned int uStack_11f;
extern unsigned int uStack_120;
extern unsigned int uStack_121;
extern unsigned int uStack_122;
extern unsigned int uStack_123;
extern unsigned int uStack_124;
extern unsigned int uStack_125;
extern unsigned int uStack_126;
extern unsigned int uStack_127;
extern unsigned int uStack_128;
extern unsigned int uStack_129;
extern unsigned int uStack_12a;
extern unsigned int uStack_12b;
extern unsigned int uStack_12c;
extern unsigned int uStack_12d;
extern unsigned int uStack_12e;
extern unsigned int uStack_12f;
extern unsigned int uStack_130;
extern unsigned int uStack_13a;
extern unsigned int uStack_13b;
extern unsigned int uStack_13c;
extern unsigned int uStack_13d;
extern unsigned int uStack_13e;
extern unsigned int uStack_13f;
extern unsigned int uStack_140;
extern unsigned int uStack_141;
extern unsigned int uStack_142;
extern unsigned int uStack_143;
extern unsigned int uStack_144;
extern unsigned int uStack_145;
extern unsigned int uStack_146;
extern unsigned int uStack_147;
extern unsigned int uStack_148;
extern unsigned int uStack_149;
extern unsigned int uStack_14a;
extern unsigned int uStack_14b;
extern unsigned int uStack_14c;
extern unsigned int uStack_14d;
extern unsigned int uStack_14e;
extern unsigned int uStack_14f;
extern unsigned int uStack_150;
extern unsigned int uStack_15a;
extern unsigned int uStack_15b;
extern unsigned int uStack_15c;
extern unsigned int uStack_15d;
extern unsigned int uStack_15e;
extern unsigned int uStack_15f;
extern unsigned int uStack_160;
extern unsigned int uStack_161;
extern unsigned int uStack_162;
extern unsigned int uStack_163;
extern unsigned int uStack_164;
extern unsigned int uStack_165;
extern unsigned int uStack_166;
extern unsigned int uStack_167;
extern unsigned int uStack_168;
extern unsigned int uStack_169;
extern unsigned int uStack_16a;
extern unsigned int uStack_16b;
extern unsigned int uStack_16c;
extern unsigned int uStack_16d;
extern unsigned int uStack_16e;
extern unsigned int uStack_16f;
extern unsigned int uStack_170;
extern unsigned int uStack_17d;
extern unsigned int uStack_17e;
extern unsigned int uStack_17f;
extern unsigned int uStack_180;
extern unsigned int uStack_181;
extern unsigned int uStack_182;
extern unsigned int uStack_183;
extern unsigned int uStack_184;
extern unsigned int uStack_185;
extern unsigned int uStack_186;
extern unsigned int uStack_187;
extern unsigned int uStack_188;
extern unsigned int uStack_189;
extern unsigned int uStack_18a;
extern unsigned int uStack_18b;
extern unsigned int uStack_18c;
extern unsigned int uStack_18d;
extern unsigned int uStack_18e;
extern unsigned int uStack_18f;
extern unsigned int uStack_190;
extern unsigned int uStack_19f;
extern unsigned int uStack_1a0;
extern unsigned int uStack_1a1;
extern unsigned int uStack_1a2;
extern unsigned int uStack_1a3;
extern unsigned int uStack_1a4;
extern unsigned int uStack_1a5;
extern unsigned int uStack_1a6;
extern unsigned int uStack_1a7;
extern unsigned int uStack_1a8;
extern unsigned int uStack_1a9;
extern unsigned int uStack_1aa;
extern unsigned int uStack_1ab;
extern unsigned int uStack_1ac;
extern unsigned int uStack_1ad;
extern unsigned int uStack_1ae;
extern unsigned int uStack_1af;
extern unsigned int uStack_1b0;
extern unsigned int uStack_a0;
extern unsigned int uStack_a8;
extern unsigned int uStack_b0;
extern unsigned int uStack_b8;
extern unsigned int uStack_ba;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;
extern unsigned int uStack_c2;
extern unsigned int uStack_c4;
extern unsigned int uStack_c8;
extern unsigned int uStack_ce;
extern unsigned int uStack_d0;
extern unsigned int uStack_d8;
extern unsigned int uStack_dc;
extern unsigned int uStack_e0;
extern unsigned int uStack_e8;
extern unsigned int uStack_f0;
extern unsigned int uStack_f8;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

unsigned __int64 fn_82C0A260(unsigned __int64 param_1,unsigned __int64 param_2,unsigned short param_3,int param_4,
                       unsigned __int64 param_5,unsigned int param_6,unsigned __int64 param_7,short param_8)

{
  short sVar1;
  short *psVar2;
  unsigned int uVar3;
  unsigned __int64 *puVar4;
  unsigned int *puVar5;
  int iVar7;
  int iVar8;
  unsigned __int64 uVar6;
  unsigned int uVar9;
  unsigned __int64 uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  unsigned int uVar15;
  unsigned short uStack00000026;
  int iStack0000002c;
  unsigned char uStack_1b0;
  unsigned char uStack_1af;
  unsigned char uStack_1ae;
  unsigned char uStack_1ad;
  unsigned char uStack_1ac;
  unsigned char uStack_1ab;
  unsigned char uStack_1aa;
  unsigned char uStack_1a9;
  unsigned char uStack_1a8;
  unsigned char uStack_1a7;
  unsigned char uStack_1a6;
  unsigned char uStack_1a5;
  unsigned char uStack_1a4;
  unsigned char uStack_1a3;
  unsigned char uStack_1a2;
  unsigned char uStack_1a1;
  unsigned char uStack_1a0;
  unsigned char uStack_19f;
  unsigned char uStack_190;
  unsigned char uStack_18f;
  unsigned char uStack_18e;
  unsigned char uStack_18d;
  unsigned char uStack_18c;
  unsigned char uStack_18b;
  unsigned char uStack_18a;
  unsigned char uStack_189;
  unsigned char uStack_188;
  unsigned char uStack_187;
  unsigned char uStack_186;
  unsigned char uStack_185;
  unsigned char uStack_184;
  unsigned char uStack_183;
  unsigned char uStack_182;
  unsigned char uStack_181;
  unsigned char uStack_180;
  unsigned char uStack_17f;
  unsigned char uStack_17e;
  unsigned char uStack_17d;
  unsigned char uStack_170;
  unsigned char uStack_16f;
  unsigned char uStack_16e;
  unsigned char uStack_16d;
  unsigned char uStack_16c;
  unsigned char uStack_16b;
  unsigned char uStack_16a;
  unsigned char uStack_169;
  unsigned char uStack_168;
  unsigned char uStack_167;
  unsigned char uStack_166;
  unsigned char uStack_165;
  unsigned char uStack_164;
  unsigned char uStack_163;
  unsigned char uStack_162;
  unsigned char uStack_161;
  unsigned char uStack_160;
  unsigned char uStack_15f;
  unsigned char uStack_15e;
  unsigned char uStack_15d;
  unsigned char uStack_15c;
  unsigned char uStack_15b;
  unsigned char uStack_15a;
  unsigned char uStack_150;
  unsigned char uStack_14f;
  unsigned char uStack_14e;
  unsigned char uStack_14d;
  unsigned char uStack_14c;
  unsigned char uStack_14b;
  unsigned char uStack_14a;
  unsigned char uStack_149;
  unsigned char uStack_148;
  unsigned char uStack_147;
  unsigned char uStack_146;
  unsigned char uStack_145;
  unsigned char uStack_144;
  unsigned char uStack_143;
  unsigned char uStack_142;
  unsigned char uStack_141;
  unsigned char uStack_140;
  unsigned char uStack_13f;
  unsigned char uStack_13e;
  unsigned char uStack_13d;
  unsigned char uStack_13c;
  unsigned char uStack_13b;
  unsigned char uStack_13a;
  unsigned char uStack_130;
  unsigned char uStack_12f;
  unsigned char uStack_12e;
  unsigned char uStack_12d;
  unsigned char uStack_12c;
  unsigned char uStack_12b;
  unsigned char uStack_12a;
  unsigned char uStack_129;
  unsigned char uStack_128;
  unsigned char uStack_127;
  unsigned char uStack_126;
  unsigned char uStack_125;
  unsigned char uStack_124;
  unsigned char uStack_123;
  unsigned char uStack_122;
  unsigned char uStack_121;
  unsigned char uStack_120;
  unsigned char uStack_11f;
  unsigned char uStack_11e;
  unsigned char uStack_11d;
  unsigned char uStack_11c;
  unsigned char uStack_11b;
  unsigned char uStack_11a;
  unsigned char uStack_119;
  unsigned char uStack_118;
  unsigned char uStack_117;
  unsigned int uStack_114;
  unsigned int uStack_110;
  unsigned int uStack_10c;
  unsigned int uStack_108;
  unsigned char auStack_100 [8];
  unsigned __int64 uStack_f8;
  unsigned __int64 uStack_f0;
  unsigned int uStack_e8;
  unsigned int uStack_e0;
  unsigned int uStack_dc;
  unsigned int uStack_d8;
  unsigned short uStack_d0;
  unsigned short uStack_ce;
  int iStack_cc;
  unsigned int uStack_c8;
  unsigned short uStack_c4;
  unsigned short uStack_c2;
  unsigned int uStack_c0;
  unsigned short uStack_bc;
  unsigned short uStack_ba;
  unsigned __int64 uStack_b8;
  unsigned __int64 uStack_b0;
  unsigned __int64 uStack_a8;
  unsigned __int64 uStack_a0;
  
  uStack_110 = 0;
  uStack_108 = 0;
  uStack_10c = 0;
  uStack_114 = 0;
  if ((((param_7 & 0xffffffff) == 0) || (param_8 == 0)) || ((param_1 & 0xffffffff) == 0)) {
    return 2;
  }
  puVar4 = (unsigned __int64 *)param_1;
  *(short *)((int)puVar4 + 0xec) = param_8;
  uStack00000026 = param_3;
  iStack0000002c = param_4;
  iVar7 = fn_82C159B8(param_1,1);
  if (((iVar7 != 0) || (*(int *)(puVar4 + 8) == 0)) ||
     ((*(short *)((int)puVar4 + 0x4c) == 0 ||
      ((*(int *)(puVar4 + 9) == 0 || (*(int *)((int)puVar4 + 0x44) == 0)))))) {
    return 3;
  }
  psVar2 = *(short **)(puVar4 + 0x1d);
  uVar10 = ZEXT48(psVar2);
  uVar14 = uStack_114;
  uVar13 = uStack_10c;
  uVar12 = uStack_108;
  uVar11 = uStack_110;
  if (uVar10 != 0) {
    uStack_13a = 0;
    uStack_17d = 0;
    uStack_146 = 0x65;
    uStack_150 = 0x57;
    uStack_14f = 0x4d;
    uStack_14d = 0x57;
    uStack_14c = 0x4d;
    uStack_14b = 0x41;
    uStack_14e = 0x2f;
    uStack_14a = 0x44;
    uStack_149 = 0x52;
    uStack_148 = 0x43;
    uStack_147 = 0x50;
    uStack_145 = 0x61;
    uStack_144 = 0x6b;
    uStack_143 = 0x52;
    uStack_142 = 0x65;
    uStack_141 = 0x66;
    uStack_140 = 0x65;
    uStack_13f = 0x72;
    uStack_13e = 0x65;
    uStack_13d = 0x6e;
    uStack_13c = 99;
    uStack_13b = 0x65;
    uStack_190 = 0x57;
    uStack_18f = 0x4d;
    uStack_18e = 0x2f;
    uStack_18d = 0x57;
    uStack_18c = 0x4d;
    uStack_18b = 0x41;
    uStack_18a = 0x44;
    uStack_189 = 0x52;
    uStack_188 = 0x43;
    uStack_187 = 0x50;
    uStack_186 = 0x65;
    uStack_185 = 0x61;
    uStack_184 = 0x6b;
    uStack_183 = 0x54;
    uStack_182 = 0x61;
    uStack_181 = 0x72;
    uStack_180 = 0x67;
    uStack_17f = 0x65;
    uStack_17e = 0x74;
    uStack_130 = 0x57;
    uStack_12f = 0x4d;
    uStack_12e = 0x2f;
    uStack_12d = 0x57;
    uStack_12c = 0x4d;
    uStack_12b = 0x41;
    uStack_12a = 0x44;
    uStack_129 = 0x52;
    uStack_128 = 0x43;
    uStack_127 = 0x41;
    uStack_126 = 0x76;
    uStack_125 = 0x65;
    uStack_124 = 0x72;
    uStack_123 = 0x61;
    uStack_122 = 0x67;
    uStack_121 = 0x65;
    uStack_120 = 0x52;
    uStack_11f = 0x65;
    uStack_11e = 0x66;
    uStack_119 = 99;
    uStack_1b0 = 0x46;
    uStack_1ad = 100;
    uStack_1a7 = 0x68;
    uStack_1a1 = 0x73;
    uStack_11d = 0x65;
    uStack_11c = 0x72;
    uStack_11b = 0x65;
    uStack_11a = 0x6e;
    uStack_118 = 0x65;
    uStack_117 = 0;
    uStack_170 = 0x57;
    uStack_16f = 0x4d;
    uStack_16e = 0x2f;
    uStack_16d = 0x57;
    uStack_16c = 0x4d;
    uStack_16b = 0x41;
    uStack_16a = 0x44;
    uStack_169 = 0x52;
    uStack_168 = 0x43;
    uStack_167 = 0x41;
    uStack_166 = 0x76;
    uStack_165 = 0x65;
    uStack_164 = 0x72;
    uStack_163 = 0x61;
    uStack_162 = 0x67;
    uStack_161 = 0x65;
    uStack_160 = 0x54;
    uStack_15f = 0x61;
    uStack_15e = 0x72;
    uStack_15d = 0x67;
    uStack_15c = 0x65;
    uStack_15b = 0x74;
    uStack_15a = 0;
    uStack_1af = 0x6f;
    uStack_1ae = 0x6c;
    uStack_1ac = 0x25;
    uStack_1ab = 0x54;
    uStack_1aa = 0x6f;
    uStack_1a9 = 0x25;
    uStack_1a8 = 0x43;
    uStack_1a6 = 0x61;
    uStack_1a5 = 0x6e;
    uStack_1a4 = 0x6e;
    uStack_1a3 = 0x65;
    uStack_1a2 = 0x6c;
    uStack_1a0 = 0x25;
    uStack_19f = 0;
    uStack_e0 = 0;
    uStack_dc = 0;
    uStack_d8 = 0;
    uStack_b8 = param_2;
    uStack_b0 = uVar10;
    uStack_a8 = param_1;
    uStack_a0 = param_7;
    if (((*psVar2 != 0) && (*(int *)(psVar2 + 2) != 0)) && (*psVar2 != 0)) {
      uVar15 = 0;
      do {
        iVar7 = uVar15 * 0x14;
        sVar1 = *(short *)(iVar7 + *(int *)(*(int *)(puVar4 + 0x1d) + 4) + 2);
        if ((sVar1 == 0) || (sVar1 == *(short *)((int)puVar4 + 0xe4))) {
          iVar8 = iVar7 + *(int *)(*(int *)(puVar4 + 0x1d) + 4);
          iVar8 = fn_82C09A48(&uStack_150,*(unsigned int *)(iVar8 + 0xc),*(unsigned short *)(iVar8 + 4),
                                0);
          if (iVar8 == 0) {
            uVar11 = **(unsigned int **)(*(int *)(*(int *)(puVar4 + 0x1d) + 4) + iVar7 + 0x10);
          }
          else {
            iVar8 = *(int *)(*(int *)(puVar4 + 0x1d) + 4) + iVar7;
            iVar8 = fn_82C09A48(&uStack_130,*(unsigned int *)(iVar8 + 0xc),
                                  *(unsigned short *)(iVar8 + 4),0);
            if (iVar8 == 0) {
              uVar12 = **(unsigned int **)(*(int *)(*(int *)(puVar4 + 0x1d) + 4) + iVar7 + 0x10);
            }
            else {
              iVar8 = *(int *)(*(int *)(puVar4 + 0x1d) + 4) + iVar7;
              iVar8 = fn_82C09A48(&uStack_190,*(unsigned int *)(iVar8 + 0xc),
                                    *(unsigned short *)(iVar8 + 4),0);
              if (iVar8 == 0) {
                uVar13 = **(unsigned int **)(*(int *)(*(int *)(puVar4 + 0x1d) + 4) + iVar7 + 0x10);
              }
              else {
                iVar8 = *(int *)(*(int *)(puVar4 + 0x1d) + 4) + iVar7;
                iVar8 = fn_82C09A48(&uStack_170,*(unsigned int *)(iVar8 + 0xc),
                                      *(unsigned short *)(iVar8 + 4),0);
                if (iVar8 == 0) {
                  uVar14 = **(unsigned int **)(*(int *)(*(int *)(puVar4 + 0x1d) + 4) + iVar7 + 0x10);
                }
                else {
                  iVar8 = *(int *)(*(int *)(puVar4 + 0x1d) + 4) + iVar7;
                  iVar8 = fn_82C09A48(&uStack_1b0,*(unsigned int *)(iVar8 + 0xc),
                                        *(unsigned short *)(iVar8 + 4),&uStack_e0);
                  if (iVar8 == 0) {
                    if ((uStack_e0 & 0xffff) == (unsigned int)*(unsigned short *)((int)puVar4 + 0x4c)) {
                      uVar10 = (__int64)(int)(uStack_dc & 0xffff) *
                               (__int64)(int)(uStack_e0 & 0xffff);
                      uVar6 = fn_8265C940(uVar10 * 4 & 0xfffffffc,0x248c8000);
                      iVar7 = *(int *)(*(int *)(puVar4 + 0x1d) + 4) + iVar7;
                      fn_82C09B40(*(unsigned int *)(iVar7 + 0x10),*(unsigned int *)(iVar7 + 8),uVar6,
                                    uVar10 & 0xffff);
                    }
                  }
                }
              }
            }
          }
        }
        uVar15 = uVar15 + 1 & 0xffff;
      } while (uVar15 < **(unsigned short **)(puVar4 + 0x1d));
    }
  }
  iVar7 = fn_82C16D70(0,0);
  *(int *)(puVar4 + 0x49) = iVar7;
  if (iVar7 == 0) {
    return 1;
  }
  uVar3 = *(unsigned int *)(puVar4 + 9);
  uStack_d0 = *(unsigned short *)((int)puVar4 + 0x3e);
  uStack_ce = *(unsigned short *)((int)puVar4 + 0x4c);
  iStack_cc = *(int *)(puVar4 + 8);
  uStack_c8 = *(unsigned int *)((int)puVar4 + 0x44);
  uStack_c2 = *(unsigned short *)((int)puVar4 + 0x5c);
  uStack_c0 = *(unsigned int *)(puVar4 + 0xc);
  uStack_bc = *(unsigned short *)((int)puVar4 + 0x54);
  uStack_ba = *(unsigned short *)((int)puVar4 + 0x56);
  uStack_f8 = 0;
  puVar5 = (unsigned int *)param_7;
  puVar5[4] = (unsigned int)(*(unsigned short *)((int)puVar4 + 0x5a) >> 3);
  uStack_f0 = 0;
  *puVar5 = *(unsigned int *)(puVar4 + 8);
  uStack_e8 = 0;
  uStack_c4 = (unsigned short)uVar3;
  puVar5[3] = (unsigned int)*(unsigned short *)((int)puVar4 + 0x5c);
  fn_82A59558(&uStack_d0,param_7);
  uVar15 = uStack_e8;
  if ((param_2 & 1) != 0) {
    puVar5[2] = (unsigned int)param_5;
    puVar5[1] = 0;
    uVar10 = param_5 & 0xffffffff;
    while (uVar10 != 0) {
      puVar5[1] = ((unsigned int)param_5 & 1) + puVar5[1];
      param_5 = (param_5 & 0xffffffff) >> 1;
      uVar10 = param_5;
    }
  }
  if ((param_2 & 0x100) != 0) {
    uVar9 = puVar5[1];
    if (2 < uVar9) {
      uVar9 = 2;
    }
    puVar5[1] = uVar9;
    if (uVar9 == 2) {
      puVar5[2] = 3;
    }
  }
  if ((param_2 & 0x40) == 0) {
    if ((param_2 & 0x400) == 0) {
      if ((param_2 & 0x800) != 0) {
        puVar5[4] = 4;
      }
    }
    else {
      puVar5[4] = 3;
    }
  }
  else {
    puVar5[3] = 0x10;
    puVar5[4] = 2;
  }
  uStack_e8 = uStack_e8 & 0xffff;
  if ((param_2 & 2) != 0) {
    uStack_e8 = CONCAT22(uStack00000026,(short)uVar15);
  }
  if ((param_2 & 4) != 0) {
    if (iStack_cc == 32000) {
      if (param_6 == 0) {
        param_6 = 0x5622;
      }
    }
    else if (param_6 == 0) goto LAB_82c0a938;
    *puVar5 = param_6;
  }
LAB_82c0a938:
  if ((param_2 & 0x10) == 0) {
    if ((param_2 & 8) == 0) {
      if ((param_2 & 0x20) != 0) {
        *puVar5 = *puVar5 << 1;
      }
    }
    else {
      *puVar5 = *puVar5 >> 1;
    }
  }
  if ((param_2 & 0x80) != 0) {
    if ((unsigned __int64)*puVar5 == (__int64)(int)(*puVar5 / 0xac44) * 0xac44) {
      *puVar5 = 0xac44;
    }
    if ((unsigned __int64)*puVar5 == (__int64)(int)(*puVar5 / 48000) * 48000) {
      *puVar5 = 48000;
    }
  }
  if ((param_2 & 0x200) != 0) {
    if ((param_2 & 0x40) != 0) {
      return 1;
    }
    if ((param_2 & 0x400) != 0) {
      return 1;
    }
    if ((param_2 & 0x800) != 0) {
      return 1;
    }
    puVar5[5] = 1;
    puVar5[4] = 4;
    puVar5[3] = 0x20;
  }
  uStack_f8 = CONCAT44(uVar11,uVar12);
  uStack_f0 = CONCAT44(uVar13,uVar14);
  uVar10 = fn_82C1CE58(*(unsigned int *)(puVar4 + 0x49),&uStack_d0,param_7,auStack_100,
                           param_1 + 0x24c,0);
  if ((int)uVar10 < 0) {
    return uVar10;
  }
  if ((int)uVar10 != 0) {
    return 1;
  }
  uVar10 = fn_8265C940(0x1c,0x248c8000);
  *(int *)(puVar4 + 0x4d) = (int)uVar10;
  if ((uVar10 & 0xffffffff) != 0) {
    fn_82F68CC0(uVar10,auStack_100,0x1c);
  }
  *(unsigned int *)((int)puVar4 + 0x224) = 0;
  if (*(int *)(puVar4 + 0x45) == 0) {
    if (*(int *)(puVar4 + 0x13) != 0) {
      if (((*(char *)((int)puVar4 + 0x9c) != 'D') || (*(char *)((int)puVar4 + 0x9d) != 'R')) ||
         ((*(char *)((int)puVar4 + 0x9e) != 'M' || (*(char *)((int)puVar4 + 0x9f) != '\0')))) {
        return 0xc;
      }
      *(unsigned int *)((int)puVar4 + 0x224) = 1;
    }
  }
  else if (*(int *)(puVar4 + 0x13) == 0) {
    return 0xd;
  }
  puVar4[6] = puVar4[5];
  if (*(int *)((int)puVar4 + 0x1c) != 0) {
    if (iStack0000002c != 0) {
      *(int *)((int)puVar4 + 0x1c) = *(int *)((int)puVar4 + 0x1c) + -1;
    }
    puVar4[6] = ((unsigned __int64)*(unsigned int *)((int)puVar4 + 0x1c) - 1) *
                (unsigned __int64)*(unsigned int *)((int)puVar4 + 0x14) + puVar4[5];
  }
  if ((puVar4[7] & 0x100000000) != 0) {
    puVar4[6] = -(unsigned __int64)*(unsigned int *)((int)puVar4 + 0x14) - 1;
  }
  *(unsigned int *)(puVar4 + 0x31) = 3;
  *puVar4 = (unsigned __int64)*(unsigned int *)(puVar4 + 2);
  puVar4[1] = (unsigned __int64)*(unsigned int *)(puVar4 + 2);
  if (*(int *)(puVar4 + 0x45) == 0) {
    uVar11 = 0x100;
  }
  else {
    uVar11 = *(unsigned int *)(puVar4 + 3);
  }
  iVar7 = fn_8265C940(uVar11,0x248c8000);
  *(int *)((int)puVar4 + 0x264) = iVar7;
  return -(unsigned __int64)(iVar7 == 0) & 0x11;
}

