__int64 fn_82EF8918(int param_1,int param_2,int param_3,int param_4,__int64 param_5)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char *pbVar3;
  unsigned char *pbVar4;
  unsigned char *pbVar5;
  unsigned char *pbVar6;
  unsigned char *pbVar7;
  unsigned char *pbVar8;
  unsigned char *pbVar9;
  unsigned char *pbVar10;
  unsigned char *pbVar11;
  unsigned char *pbVar12;
  unsigned char *pbVar13;
  unsigned char *pbVar14;
  unsigned char *pbVar15;
  unsigned char *pbVar16;
  unsigned char *pbVar17;
  unsigned char *pbVar18;
  unsigned char *pbVar19;
  unsigned char *pbVar20;
  unsigned char *pbVar21;
  unsigned char *pbVar22;
  unsigned char *pbVar23;
  unsigned char *pbVar24;
  unsigned char *pbVar25;
  unsigned char *pbVar26;
  unsigned char *pbVar27;
  unsigned char *pbVar28;
  unsigned char *pbVar29;
  unsigned char *pbVar30;
  unsigned char *pbVar31;
  unsigned char *pbVar32;
  __int64 lVar33;
  unsigned __int64 uVar34;
  unsigned __int64 uVar35;
  unsigned char *pbVar36;
  unsigned char *pbVar37;
  unsigned __int64 uVar38;
  unsigned __int64 uVar39;
  unsigned __int64 uVar40;
  unsigned __int64 uVar41;
  unsigned __int64 uVar42;
  unsigned __int64 uVar43;
  unsigned __int64 uVar44;
  unsigned __int64 uVar45;
  unsigned __int64 uVar46;
  unsigned __int64 uVar47;
  unsigned __int64 uVar48;
  unsigned __int64 uVar49;
  unsigned __int64 uVar50;
  unsigned __int64 uVar51;
  
  lVar33 = 0;
  if (0 < (int)param_5) {
    pbVar36 = (unsigned char *)(param_3 + 0xe);
    pbVar37 = (unsigned char *)(param_1 + 0xe);
    do {
      pbVar3 = pbVar36 + -0xe;
      pbVar4 = pbVar37 + -0xe;
      pbVar5 = pbVar36 + -0xd;
      pbVar6 = pbVar37 + -0xd;
      pbVar7 = pbVar37 + -0xc;
      pbVar8 = pbVar36 + -0xc;
      uVar49 = (unsigned __int64)((int)((unsigned __int64)*pbVar4 - (unsigned __int64)*pbVar3) >> 0x1f);
      pbVar9 = pbVar36 + -0xb;
      uVar43 = (unsigned __int64)((int)((unsigned __int64)*pbVar6 - (unsigned __int64)*pbVar5) >> 0x1f);
      pbVar10 = pbVar37 + -0xb;
      pbVar11 = pbVar36 + -10;
      pbVar12 = pbVar37 + -10;
      pbVar13 = pbVar36 + -9;
      uVar40 = (unsigned __int64)((int)((unsigned __int64)*pbVar7 - (unsigned __int64)*pbVar8) >> 0x1f);
      pbVar14 = pbVar37 + -9;
      pbVar15 = pbVar37 + -8;
      pbVar16 = pbVar36 + -8;
      pbVar17 = pbVar37 + -7;
      pbVar18 = pbVar36 + -7;
      uVar39 = (unsigned __int64)((int)((unsigned __int64)*pbVar10 - (unsigned __int64)*pbVar9) >> 0x1f);
      pbVar19 = pbVar37 + -6;
      pbVar20 = pbVar36 + -6;
      pbVar21 = pbVar37 + -5;
      pbVar22 = pbVar36 + -5;
      pbVar23 = pbVar37 + -4;
      uVar38 = (unsigned __int64)((int)((unsigned __int64)*pbVar12 - (unsigned __int64)*pbVar11) >> 0x1f);
      pbVar24 = pbVar36 + -4;
      pbVar25 = pbVar37 + -3;
      pbVar26 = pbVar36 + -3;
      uVar41 = (unsigned __int64)((int)((unsigned __int64)*pbVar14 - (unsigned __int64)*pbVar13) >> 0x1f);
      uVar45 = (unsigned __int64)((int)((unsigned __int64)*pbVar15 - (unsigned __int64)*pbVar16) >> 0x1f);
      uVar44 = (unsigned __int64)((int)((unsigned __int64)*pbVar17 - (unsigned __int64)*pbVar18) >> 0x1f);
      uVar50 = (unsigned __int64)((int)((unsigned __int64)*pbVar19 - (unsigned __int64)*pbVar20) >> 0x1f);
      uVar46 = (unsigned __int64)((int)((unsigned __int64)*pbVar21 - (unsigned __int64)*pbVar22) >> 0x1f);
      uVar34 = (unsigned __int64)((int)((unsigned __int64)*pbVar23 - (unsigned __int64)*pbVar24) >> 0x1f);
      uVar35 = (unsigned __int64)((int)((unsigned __int64)*pbVar25 - (unsigned __int64)*pbVar26) >> 0x1f);
      pbVar27 = pbVar37 + -2;
      pbVar28 = pbVar36 + -2;
      pbVar29 = pbVar37 + -1;
      pbVar30 = pbVar36 + -1;
      pbVar31 = pbVar37 + 1;
      uVar47 = (unsigned __int64)((int)((unsigned __int64)*pbVar27 - (unsigned __int64)*pbVar28) >> 0x1f);
      pbVar32 = pbVar36 + 1;
      bVar1 = *pbVar36;
      bVar2 = *pbVar37;
      uVar42 = (unsigned __int64)((int)((unsigned __int64)*pbVar29 - (unsigned __int64)*pbVar30) >> 0x1f);
      uVar48 = (unsigned __int64)((int)((unsigned __int64)*pbVar31 - (unsigned __int64)*pbVar32) >> 0x1f);
      uVar51 = (unsigned __int64)((int)((unsigned __int64)bVar2 - (unsigned __int64)bVar1) >> 0x1f);
      pbVar37 = pbVar37 + param_2;
      pbVar36 = pbVar36 + param_4;
      lVar33 = (((unsigned __int64)*pbVar4 - (unsigned __int64)*pbVar3 ^ uVar49) - uVar49) +
               (((unsigned __int64)*pbVar6 - (unsigned __int64)*pbVar5 ^ uVar43) - uVar43) +
               (((unsigned __int64)*pbVar7 - (unsigned __int64)*pbVar8 ^ uVar40) - uVar40) +
               (((unsigned __int64)*pbVar10 - (unsigned __int64)*pbVar9 ^ uVar39) - uVar39) +
               (((unsigned __int64)*pbVar12 - (unsigned __int64)*pbVar11 ^ uVar38) - uVar38) +
               (((unsigned __int64)*pbVar14 - (unsigned __int64)*pbVar13 ^ uVar41) - uVar41) +
               (((unsigned __int64)*pbVar15 - (unsigned __int64)*pbVar16 ^ uVar45) - uVar45) +
               (((unsigned __int64)*pbVar17 - (unsigned __int64)*pbVar18 ^ uVar44) - uVar44) +
               (((unsigned __int64)*pbVar19 - (unsigned __int64)*pbVar20 ^ uVar50) - uVar50) +
               (((unsigned __int64)*pbVar21 - (unsigned __int64)*pbVar22 ^ uVar46) - uVar46) +
               (((unsigned __int64)*pbVar23 - (unsigned __int64)*pbVar24 ^ uVar34) - uVar34) +
               (((unsigned __int64)*pbVar25 - (unsigned __int64)*pbVar26 ^ uVar35) - uVar35) +
               (((unsigned __int64)*pbVar27 - (unsigned __int64)*pbVar28 ^ uVar47) - uVar47) +
               (((unsigned __int64)*pbVar29 - (unsigned __int64)*pbVar30 ^ uVar42) - uVar42) +
               (((unsigned __int64)*pbVar31 - (unsigned __int64)*pbVar32 ^ uVar48) - uVar48) +
               (((unsigned __int64)bVar2 - (unsigned __int64)bVar1 ^ uVar51) - uVar51) + lVar33;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  return lVar33;
}

