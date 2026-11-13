extern int fn_82F07900();
extern unsigned int lbl_8324DBB0;


short fn_82F1A430(int param_1,unsigned short *param_2,int param_3,__int64 param_4,int param_5,
                   unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  short sVar1;
  unsigned int uVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  __int64 lVar8;
  __int64 lVar9;
  unsigned __int64 uVar10;
  unsigned short uVar11;
  short sVar12;
  __int64 lVar13;
  __int64 lVar14;
  unsigned short *puVar15;
  unsigned __int64 uVar16;
  short asStack_60 [48];
  
  uVar2 = *(unsigned int *)(param_5 + 0x10);
  uVar16 = (unsigned __int64)uVar2;
  sVar12 = 0;
  sVar7 = 0;
  asStack_60[0] = 0;
  lVar14 = 0;
  if (*(int *)(param_1 + 0x594) != 0) {
    param_8 = 5;
    lVar14 = (__int64)((int)(uVar2 << 1) / 5);
  }
  lVar13 = uVar16 - lVar14;
  if ((param_7 & 0xffffffff) == 0) {
    if (1 < (int)param_4) {
      lVar8 = param_4 + -1;
      puVar15 = param_2;
      do {
        puVar15 = puVar15 + 1;
        sVar12 = *(short *)((param_3 - (int)param_2) + (int)puVar15);
        param_8 = (unsigned __int64)sVar12;
        param_7 = (unsigned __int64)((int)sVar12 >> 0x1f);
        lVar9 = (param_8 ^ param_7) - param_7;
        if ((int)lVar9 < (int)lVar13) {
          *puVar15 = 0;
        }
        else {
          sVar7 = sVar7 + 1;
          uVar10 = lVar9 + lVar14;
          trapWord(6,uVar16,0);
          param_8 = uVar16 & ~(((uVar10 & 0x7fffffff) << 1 | (uVar10 & 0xffffffff) >> 0x1f) - 1);
          uVar11 = *(unsigned short *)(&lbl_8324DBB0 + ((int)uVar10 / (int)uVar2) * 2);
          param_7 = (unsigned __int64)uVar11;
          trapWord(5,param_8,0xffff);
          if (sVar12 < 0) {
            uVar11 = -uVar11;
          }
          *puVar15 = uVar11;
        }
        lVar8 = lVar8 + -1;
        asStack_60[0] = sVar7;
      } while (lVar8 != 0);
    }
  }
  else {
    iVar3 = *(int *)(param_5 + 0x14);
    if (1 < (int)param_4) {
      lVar9 = param_4 + -1;
      iVar5 = (int)param_7;
      iVar6 = (int)param_2 - iVar5;
      lVar8 = lVar13;
      uVar10 = param_7;
      do {
        uVar10 = uVar10 + 2;
        psVar4 = (short *)uVar10;
        sVar1 = *(short *)((param_3 - iVar5) + (int)psVar4);
        param_8 = (unsigned __int64)sVar1;
        param_7 = (unsigned __int64)((int)sVar1 >> 0x1f);
        param_7 = (param_8 ^ param_7) - param_7;
        if (0 < *psVar4) {
          lVar8 = (__int64)(int)*psVar4 * (__int64)iVar3 + lVar13;
        }
        if ((int)param_7 < (int)lVar8) {
          *(unsigned short *)(iVar6 + (int)psVar4) = 0;
        }
        else {
          sVar7 = sVar12 + 1;
          param_7 = param_7 + lVar14;
          trapWord(6,uVar16,0);
          param_8 = uVar16 & ~(((param_7 & 0x7fffffff) << 1 | (param_7 & 0xffffffff) >> 0x1f) - 1);
          uVar11 = *(unsigned short *)(&lbl_8324DBB0 + ((int)param_7 / (int)uVar2) * 2);
          param_7 = (unsigned __int64)uVar11;
          trapWord(5,param_8,0xffff);
          if (sVar1 < 0) {
            uVar11 = -uVar11;
          }
          *(unsigned short *)(iVar6 + (int)psVar4) = uVar11;
          sVar12 = sVar7;
        }
        lVar9 = lVar9 + -1;
        asStack_60[0] = sVar7;
      } while (lVar9 != 0);
    }
  }
  if ((int)param_6 != 0) {
    fn_82F07900(param_1,param_2,asStack_60,param_6,param_4,(int)param_6,param_7,param_8);
  }
  return asStack_60[0];
}

