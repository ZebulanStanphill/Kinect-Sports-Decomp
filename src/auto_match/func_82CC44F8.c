void fn_82CC44F8(int param_1,int param_2,int param_3,int param_4,int param_5,short param_6,
                  unsigned int param_7,unsigned int param_8)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  unsigned char bVar4;
  unsigned char bVar5;
  unsigned char bVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  unsigned int uVar10;
  int iVar11;
  __int64 lVar12;
  short *psVar13;
  int iVar14;
  unsigned __int64 uVar15;
  unsigned char *pbVar16;
  int iVar17;
  unsigned int in_stack_00000054;
  short sStack_c2;
  short asStack_c0 [96];
  
  iVar9 = 4 << (param_8 & 0x3f);
  uVar10 = 1 << ((unsigned int)LZCOUNT(in_stack_00000054) >> 5 & param_8) + 2;
  uVar15 = (unsigned __int64)uVar10;
  if (((param_8 == 0) || (param_8 == 1)) || (param_8 == 2)) {
    iVar11 = 8 - (param_7 & 0xff);
    asStack_c0[iVar9] = 0;
    if (0 < (int)uVar10) {
      do {
        iVar17 = 0;
        if (0 < iVar9) {
          psVar13 = &sStack_c2;
          iVar14 = (iVar9 - 1U >> 2) + 1;
          pbVar16 = (unsigned char *)(param_1 + 1);
          iVar17 = iVar14 * 4;
          do {
            bVar1 = *pbVar16;
            bVar2 = pbVar16[1];
            bVar3 = pbVar16[2];
            bVar4 = pbVar16[param_2];
            bVar5 = pbVar16[param_2 + 1];
            bVar6 = pbVar16[param_2 + 2];
            psVar13[1] = ((unsigned short)pbVar16[param_2 + -1] - (unsigned short)pbVar16[-1]) * param_6 +
                         (unsigned short)pbVar16[-1] * 4;
            psVar13[2] = ((unsigned short)bVar4 - (unsigned short)bVar1) * param_6 + (unsigned short)bVar1 * 4;
            psVar13[3] = ((unsigned short)bVar5 - (unsigned short)bVar2) * param_6 + (unsigned short)bVar2 * 4;
            pbVar16 = pbVar16 + 4;
            psVar13 = psVar13 + 4;
            *psVar13 = ((unsigned short)bVar6 - (unsigned short)bVar3) * param_6 + (unsigned short)bVar3 * 4;
            iVar14 = iVar14 + -1;
          } while (iVar14 != 0);
        }
        iVar14 = 0;
        asStack_c0[iVar17] =
             ((unsigned short)*(unsigned char *)(iVar17 + param_1 + param_2) - (unsigned short)*(unsigned char *)(iVar17 + param_1)) *
             param_6 + (unsigned short)*(unsigned char *)(iVar17 + param_1) * 4;
        if (0 < iVar9) {
          psVar13 = asStack_c0 + 1;
          lVar12 = (unsigned __int64)(iVar9 - 1U >> 1) + 1;
          do {
            sVar7 = *psVar13;
            sVar8 = psVar13[1];
            *(char *)(iVar14 + param_3) =
                 (char)(((int)sVar7 - (int)psVar13[-1]) * param_5 + psVar13[-1] * 4 + iVar11 >> 4);
            psVar13 = psVar13 + 2;
            *(char *)(param_3 + 1 + iVar14) =
                 (char)(((int)sVar8 - (int)sVar7) * param_5 + sVar7 * 4 + iVar11 >> 4);
            iVar14 = iVar14 + 2;
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
        }
        uVar15 = uVar15 - 1;
        param_1 = param_1 + param_2;
        param_3 = param_3 + param_4;
      } while (uVar15 != 0);
    }
  }
  return;
}

