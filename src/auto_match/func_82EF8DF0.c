extern int fn_82EF8B10();
extern unsigned int iStack0000001c;
extern unsigned int iStack0000002c;
extern unsigned int uStack0000003c;


unsigned __int64 fn_82EF8DF0(int param_1,int param_2,int param_3,int param_4,int param_5,unsigned int param_6)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned char *pbVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  unsigned char *pbVar12;
  unsigned char *pbVar13;
  unsigned int uVar14;
  int iVar15;
  unsigned char *pbVar16;
  unsigned __int64 uVar17;
  unsigned __int64 uVar18;
  unsigned __int64 uVar19;
  unsigned __int64 uVar20;
  unsigned __int64 uVar21;
  unsigned __int64 uVar22;
  unsigned __int64 uVar23;
  unsigned __int64 uVar24;
  unsigned __int64 uVar25;
  unsigned __int64 uVar26;
  unsigned __int64 uVar27;
  unsigned __int64 uVar28;
  unsigned __int64 uVar29;
  unsigned __int64 uVar30;
  unsigned __int64 uVar31;
  unsigned __int64 uVar32;
  unsigned __int64 uVar33;
  unsigned __int64 uVar34;
  unsigned __int64 uVar35;
  unsigned __int64 uVar36;
  unsigned __int64 uVar37;
  unsigned __int64 uVar38;
  int iVar39;
  int iVar40;
  unsigned __int64 uVar41;
  int iStack0000001c;
  int iStack0000002c;
  unsigned int uStack0000003c;
  
  if (param_5 == 8) {
    uVar14 = param_6 * 0xe;
    iVar15 = ((int)uVar14 >> 6) + (unsigned int)((int)uVar14 < 0 && (uVar14 & 0x3f) != 0);
    iVar39 = param_6 + iVar15 * -3;
    uVar41 = 0;
    iVar40 = 4;
    pbVar16 = (unsigned char *)(param_1 + 0xe);
    pbVar12 = (unsigned char *)(param_3 + 0xe);
    pbVar13 = (unsigned char *)(param_2 * 4 + param_1 + 0xe);
    pbVar9 = (unsigned char *)(param_4 * 4 + param_3 + 0xe);
    do {
      iVar40 = iVar40 + -1;
      uVar2 = (unsigned __int64)((int)((unsigned __int64)pbVar16[-0xe] - (unsigned __int64)pbVar12[-0xe]) >> 0x1f);
      uVar28 = (unsigned __int64)((int)((unsigned __int64)pbVar16[-0xd] - (unsigned __int64)pbVar12[-0xd]) >> 0x1f);
      uVar24 = (unsigned __int64)((int)((unsigned __int64)pbVar16[-0xc] - (unsigned __int64)pbVar12[-0xc]) >> 0x1f);
      uVar21 = (unsigned __int64)((int)((unsigned __int64)pbVar16[-0xb] - (unsigned __int64)pbVar12[-0xb]) >> 0x1f);
      uVar18 = (unsigned __int64)((int)((unsigned __int64)pbVar16[-10] - (unsigned __int64)pbVar12[-10]) >> 0x1f);
      uVar25 = (unsigned __int64)((int)((unsigned __int64)pbVar16[-9] - (unsigned __int64)pbVar12[-9]) >> 0x1f);
      uVar34 = (unsigned __int64)((int)((unsigned __int64)pbVar16[-8] - (unsigned __int64)pbVar12[-8]) >> 0x1f);
      uVar29 = (unsigned __int64)((int)((unsigned __int64)pbVar16[-7] - (unsigned __int64)pbVar12[-7]) >> 0x1f);
      uVar4 = (unsigned __int64)((int)((unsigned __int64)pbVar16[-6] - (unsigned __int64)pbVar12[-6]) >> 0x1f);
      uVar35 = (unsigned __int64)((int)((unsigned __int64)pbVar16[-5] - (unsigned __int64)pbVar12[-5]) >> 0x1f);
      uVar5 = (unsigned __int64)((int)((unsigned __int64)pbVar16[-4] - (unsigned __int64)pbVar12[-4]) >> 0x1f);
      uVar6 = (unsigned __int64)((int)((unsigned __int64)pbVar16[-3] - (unsigned __int64)pbVar12[-3]) >> 0x1f);
      uVar1 = (unsigned __int64)((int)((unsigned __int64)pbVar16[-2] - (unsigned __int64)pbVar12[-2]) >> 0x1f);
      uVar26 = (unsigned __int64)((int)((unsigned __int64)pbVar16[-1] - (unsigned __int64)pbVar12[-1]) >> 0x1f);
      uVar22 = (unsigned __int64)((int)((unsigned __int64)pbVar16[1] - (unsigned __int64)pbVar12[1]) >> 0x1f);
      uVar19 = (unsigned __int64)((int)((unsigned __int64)pbVar13[-0xe] - (unsigned __int64)pbVar9[-0xe]) >> 0x1f);
      uVar17 = (unsigned __int64)((int)((unsigned __int64)pbVar13[-0xd] - (unsigned __int64)pbVar9[-0xd]) >> 0x1f);
      uVar30 = (unsigned __int64)((int)((unsigned __int64)pbVar13[-0xc] - (unsigned __int64)pbVar9[-0xc]) >> 0x1f);
      uVar36 = (unsigned __int64)((int)((unsigned __int64)pbVar13[-0xb] - (unsigned __int64)pbVar9[-0xb]) >> 0x1f);
      uVar31 = (unsigned __int64)((int)((unsigned __int64)pbVar13[-10] - (unsigned __int64)pbVar9[-10]) >> 0x1f);
      uVar7 = (unsigned __int64)((int)((unsigned __int64)pbVar13[-9] - (unsigned __int64)pbVar9[-9]) >> 0x1f);
      uVar32 = (unsigned __int64)((int)((unsigned __int64)pbVar13[-8] - (unsigned __int64)pbVar9[-8]) >> 0x1f);
      uVar3 = (unsigned __int64)((int)((unsigned __int64)pbVar13[-7] - (unsigned __int64)pbVar9[-7]) >> 0x1f);
      uVar37 = (unsigned __int64)((int)((unsigned __int64)pbVar13[-6] - (unsigned __int64)pbVar9[-6]) >> 0x1f);
      uVar27 = (unsigned __int64)((int)((unsigned __int64)pbVar13[-5] - (unsigned __int64)pbVar9[-5]) >> 0x1f);
      uVar23 = (unsigned __int64)((int)((unsigned __int64)pbVar13[-4] - (unsigned __int64)pbVar9[-4]) >> 0x1f);
      uVar20 = (unsigned __int64)((int)((unsigned __int64)pbVar13[-3] - (unsigned __int64)pbVar9[-3]) >> 0x1f);
      uVar8 = (unsigned __int64)((int)((unsigned __int64)pbVar13[-2] - (unsigned __int64)pbVar9[-2]) >> 0x1f);
      uVar33 = (unsigned __int64)((int)((unsigned __int64)pbVar13[-1] - (unsigned __int64)pbVar9[-1]) >> 0x1f);
      uVar10 = (unsigned __int64)((int)((unsigned __int64)pbVar13[1] - (unsigned __int64)pbVar9[1]) >> 0x1f);
      uVar38 = (unsigned __int64)((int)((unsigned __int64)*pbVar16 - (unsigned __int64)*pbVar12) >> 0x1f);
      uVar11 = (unsigned __int64)((int)((unsigned __int64)*pbVar13 - (unsigned __int64)*pbVar9) >> 0x1f);
      uVar41 = (((unsigned __int64)pbVar16[-0xe] - (unsigned __int64)pbVar12[-0xe] ^ uVar2) - uVar2) +
               (((unsigned __int64)pbVar16[-0xd] - (unsigned __int64)pbVar12[-0xd] ^ uVar28) - uVar28) +
               (((unsigned __int64)pbVar16[-0xc] - (unsigned __int64)pbVar12[-0xc] ^ uVar24) - uVar24) +
               (((unsigned __int64)pbVar16[-0xb] - (unsigned __int64)pbVar12[-0xb] ^ uVar21) - uVar21) +
               (((unsigned __int64)pbVar16[-10] - (unsigned __int64)pbVar12[-10] ^ uVar18) - uVar18) +
               (((unsigned __int64)pbVar16[-9] - (unsigned __int64)pbVar12[-9] ^ uVar25) - uVar25) +
               (((unsigned __int64)pbVar16[-8] - (unsigned __int64)pbVar12[-8] ^ uVar34) - uVar34) +
               (((unsigned __int64)pbVar16[-7] - (unsigned __int64)pbVar12[-7] ^ uVar29) - uVar29) +
               (((unsigned __int64)pbVar16[-6] - (unsigned __int64)pbVar12[-6] ^ uVar4) - uVar4) +
               (((unsigned __int64)pbVar16[-5] - (unsigned __int64)pbVar12[-5] ^ uVar35) - uVar35) +
               (((unsigned __int64)pbVar16[-4] - (unsigned __int64)pbVar12[-4] ^ uVar5) - uVar5) +
               (((unsigned __int64)pbVar16[-3] - (unsigned __int64)pbVar12[-3] ^ uVar6) - uVar6) +
               (((unsigned __int64)pbVar16[-2] - (unsigned __int64)pbVar12[-2] ^ uVar1) - uVar1) +
               (((unsigned __int64)pbVar16[-1] - (unsigned __int64)pbVar12[-1] ^ uVar26) - uVar26) +
               (((unsigned __int64)pbVar16[1] - (unsigned __int64)pbVar12[1] ^ uVar22) - uVar22) +
               (((unsigned __int64)pbVar13[-0xe] - (unsigned __int64)pbVar9[-0xe] ^ uVar19) - uVar19) +
               (((unsigned __int64)pbVar13[-0xd] - (unsigned __int64)pbVar9[-0xd] ^ uVar17) - uVar17) +
               (((unsigned __int64)pbVar13[-0xc] - (unsigned __int64)pbVar9[-0xc] ^ uVar30) - uVar30) +
               (((unsigned __int64)pbVar13[-0xb] - (unsigned __int64)pbVar9[-0xb] ^ uVar36) - uVar36) +
               (((unsigned __int64)pbVar13[-10] - (unsigned __int64)pbVar9[-10] ^ uVar31) - uVar31) +
               (((unsigned __int64)pbVar13[-9] - (unsigned __int64)pbVar9[-9] ^ uVar7) - uVar7) +
               (((unsigned __int64)pbVar13[-8] - (unsigned __int64)pbVar9[-8] ^ uVar32) - uVar32) +
               (((unsigned __int64)pbVar13[-7] - (unsigned __int64)pbVar9[-7] ^ uVar3) - uVar3) +
               (((unsigned __int64)pbVar13[-6] - (unsigned __int64)pbVar9[-6] ^ uVar37) - uVar37) +
               (((unsigned __int64)pbVar13[-5] - (unsigned __int64)pbVar9[-5] ^ uVar27) - uVar27) +
               (((unsigned __int64)pbVar13[-4] - (unsigned __int64)pbVar9[-4] ^ uVar23) - uVar23) +
               (((unsigned __int64)pbVar13[-3] - (unsigned __int64)pbVar9[-3] ^ uVar20) - uVar20) +
               (((unsigned __int64)pbVar13[-2] - (unsigned __int64)pbVar9[-2] ^ uVar8) - uVar8) +
               (((unsigned __int64)pbVar13[-1] - (unsigned __int64)pbVar9[-1] ^ uVar33) - uVar33) +
               (((unsigned __int64)pbVar13[1] - (unsigned __int64)pbVar9[1] ^ uVar10) - uVar10) +
               (((unsigned __int64)*pbVar16 - (unsigned __int64)*pbVar12 ^ uVar38) - uVar38) +
               (((unsigned __int64)*pbVar13 - (unsigned __int64)*pbVar9 ^ uVar11) - uVar11) + uVar41;
      if (iVar39 <= (int)uVar41) {
        return (unsigned __int64)param_6;
      }
      pbVar16 = pbVar16 + param_2;
      pbVar13 = pbVar13 + param_2;
      iVar39 = iVar39 + iVar15;
      pbVar12 = pbVar12 + param_4;
      pbVar9 = pbVar9 + param_4;
    } while (iVar40 != 0);
  }
  else {
    iStack0000001c = param_2;
    iStack0000002c = param_4;
    uStack0000003c = param_6;
    uVar41 = fn_82EF8B10();
  }
  return uVar41;
}

