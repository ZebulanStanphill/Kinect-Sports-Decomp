extern unsigned int *auStack_68;
extern unsigned int *auStack_6c;
extern int fn_82BDDE08();
extern int fn_82BDE5A8();
extern int fn_82BE0220();
extern int fn_82BE02D0();
extern int fn_82BE09B8();
extern unsigned int iStack_74;
extern unsigned int uRam831724e4;
extern unsigned int uRam831724e8;
extern unsigned int uRam831724ec;
extern unsigned int uRam831724f0;
extern unsigned int uStack_70;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;


unsigned __int64
fn_82BDE7C0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,__int64 param_5)

{
  int *piVar1;
  int iVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  unsigned int uVar7;
  __int64 lVar8;
  __int64 lVar9;
  unsigned __int64 uVar10;
  unsigned int uVar11;
  unsigned short uVar12;
  __int64 lVar13;
  short sVar14;
  unsigned short uVar15;
  int *piVar16;
  unsigned __int64 *puVar17;
  unsigned int uVar18;
  unsigned __int64 uVar19;
  unsigned int *puVar20;
  unsigned int *puVar21;
  int iVar22;
  unsigned __int64 uVar23;
  unsigned int *puVar24;
  unsigned int uStack_90;
  unsigned int uStack_8c;
  unsigned int uStack_88;
  unsigned int uStack_84;
  unsigned int uStack_80;
  unsigned int uStack_7c;
  unsigned int uStack_78;
  int iStack_74;
  unsigned int uStack_70;
  unsigned char auStack_6c [4];
  unsigned char auStack_68 [104];
  
  uVar3 = fn_82BE0220(param_2,auStack_68,&uStack_8c,&uStack_88,&uStack_78,&uStack_80,
                            &uStack_7c,auStack_6c);
  if (((int)uVar3 == 0) &&
     (uVar3 = fn_82BE02D0(param_2,param_3,&uStack_90,&iStack_74,&uStack_84), uVar5 = uStack_90,
     (int)uVar3 == 0)) {
    puVar21 = (unsigned int *)(param_1 + 0x140);
    lVar4 = fn_82BDDE08(uStack_90,param_4,param_1 + 0x100,puVar21,param_1,uStack_7c);
    lVar4 = ((((unsigned __int64)uStack_84 - (unsigned __int64)uStack_8c) - (unsigned __int64)uStack_88) -
            (unsigned __int64)uStack_80) - lVar4;
    fn_82BE09B8(uVar5,lVar4,param_1,param_1 + 0x40,param_1 + 0x80);
    uVar19 = (unsigned __int64)uStack_90;
    if (0 < (int)uStack_90) {
      piVar16 = (int *)(param_1 + -4);
      lVar13 = ((uVar19 - 1 & 0xffffffff) >> 1) + 1;
      do {
        piVar1 = piVar16 + 2;
        piVar16[1] = piVar16[1] + 0x18;
        piVar16 = piVar16 + 2;
        *piVar16 = *piVar1 + 0x18;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    puVar20 = (unsigned int *)(param_1 + 0x180);
    puVar17 = (unsigned __int64 *)(param_1 + 0x178);
    lVar13 = 7;
    do {
      puVar17 = puVar17 + 1;
      *puVar17 = 0;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    puVar24 = (unsigned int *)(param_1 + 0x1c0);
    fn_82BDE5A8(uVar19,uStack_78,lVar4,param_4,param_1,param_1 + 0x40,param_1 + 0x80,&uStack_70);
    lVar4 = 0x10 - (unsigned __int64)uStack_8c;
    *(unsigned int *)((int)((uVar19 + 0x40 & 0xffffffff) << 2) + param_1) = uStack_88;
    uVar5 = 0;
    *(unsigned int *)((int)((uVar19 + 0x50 & 0xffffffff) << 2) + param_1) = uStack_70;
    uVar10 = 0;
    uVar6 = 0;
    sVar14 = (short)(iStack_74 << ((unsigned int)lVar4 & 0x3f));
    if (-1 < (int)uStack_90) {
      lVar8 = uVar19 + 1;
      lVar13 = param_5 + -2;
      do {
        uVar18 = *puVar21;
        lVar9 = (unsigned __int64)puVar21[-0x10] - lVar4;
        uVar7 = (unsigned int)lVar9;
        if (lVar9 < 0) {
          lVar4 = lVar4 - (unsigned __int64)puVar21[-0x10];
          sVar14 = (short)(uVar18 << (-uVar7 & 0x3f)) + sVar14;
        }
        else {
          uVar15 = (short)(uVar18 >> (uVar7 & 0x3f)) + sVar14;
          lVar13 = lVar13 + 2;
          *(unsigned short *)lVar13 = uVar15;
          uVar11 = (unsigned int)uVar10;
          uVar10 = -(unsigned __int64)(uVar10 != 0xe) & uVar10 + 1;
          uVar5 = (unsigned int)uVar15 << (uVar11 & 0x3f) ^ uVar5;
          sVar14 = (short)(uVar18 << (0x10 - uVar7 & 0x3f));
          uVar6 = uVar6 + 1;
          lVar4 = 0x10 - lVar9;
        }
        puVar21 = puVar21 + 1;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    iVar22 = 0;
    if (0 < (int)uStack_90) {
      do {
        lVar13 = (uVar6 & 0xfffffff) << 4;
        if ((int)uStack_84 <= (int)lVar13) break;
        uVar18 = *puVar20;
        uVar23 = (unsigned __int64)uVar18;
        uVar19 = 0x20;
        if ((int)uVar18 < 0x21) {
          uVar19 = uVar23;
        }
        uVar7 = *puVar24;
        if (0 < (int)uVar18) {
          lVar8 = (uVar6 & 0x7fffffff) * 2 + param_5 + -2;
          puVar21 = puVar24;
          do {
            if ((int)uStack_84 <= (int)lVar13) break;
            uVar18 = (unsigned int)lVar4;
            if ((int)uVar19 < (int)uVar18) {
              lVar4 = lVar4 - uVar19;
              sVar14 = (short)((uVar7 >> (0x20U - (int)uVar19 & 0x3f)) << ((unsigned int)lVar4 & 0x3f)) +
                       sVar14;
LAB_82bdea9c:
              uVar23 = uVar23 - 0x20;
              puVar21 = puVar21 + 1;
              uVar7 = *puVar21;
              uVar19 = 0x20;
              if ((int)uVar23 < 0x21) {
                uVar19 = uVar23;
              }
            }
            else {
              uVar19 = uVar19 - lVar4;
              uVar15 = (short)(uVar7 >> (0x20 - uVar18 & 0x3f)) + sVar14;
              uVar7 = uVar7 << (uVar18 & 0x3f);
              uVar6 = uVar6 + 1;
              lVar8 = lVar8 + 2;
              *(unsigned short *)lVar8 = uVar15;
              lVar13 = lVar13 + 0x10;
              uVar5 = (unsigned int)uVar15 << ((unsigned int)uVar10 & 0x3f) ^ uVar5;
              sVar14 = 0;
              lVar4 = 0x10;
              uVar10 = -(unsigned __int64)(uVar10 != 0xe) & uVar10 + 1;
              if ((int)uVar19 == 0) goto LAB_82bdea9c;
            }
          } while (0 < (int)uVar23);
        }
        iVar22 = iVar22 + 1;
        puVar24 = puVar24 + 4;
        puVar20 = puVar20 + 1;
      } while (iVar22 < (int)uStack_90);
    }
    lVar13 = (uVar6 & 0xfffffff) << 4;
    if ((int)lVar13 < (int)uStack_84) {
      lVar8 = (uVar6 & 0x7fffffff) * 2 + param_5 + -2;
      do {
        uVar15 = (short)(0xffff >> (0x10U - (int)lVar4 & 0x3f)) + sVar14;
        lVar13 = lVar13 + 0x10;
        uVar6 = uVar6 + 1;
        lVar8 = lVar8 + 2;
        *(unsigned short *)lVar8 = uVar15;
        sVar14 = 0;
        uVar5 = (unsigned int)uVar15 << ((unsigned int)uVar10 & 0x3f) ^ uVar5;
        lVar4 = 0x10;
        uVar10 = -(unsigned __int64)(uVar10 != 0xe) & uVar10 + 1;
      } while ((int)lVar13 < (int)uStack_84);
    }
    if (0 < (int)uStack_80) {
      iVar2 = (int)((uVar6 - 1 & 0xffffffff) << 1);
      iVar22 = (int)param_5;
      uVar15 = *(unsigned short *)(iVar2 + iVar22);
      lVar4 = uVar10 - 1;
      uVar12 = (unsigned short)(-1 << (uStack_80 & 0x3f)) & uVar15;
      *(unsigned short *)(iVar2 + iVar22) = uVar12;
      if (lVar4 < 0) {
        lVar4 = 0xe;
      }
      uVar5 = (unsigned int)(uVar15 ^ uVar12) << ((unsigned int)lVar4 & 0x3f) ^ uVar5;
      iVar2 = (int)((uVar6 - 1 & 0xffffffff) << 1);
      uVar11 = (int)uVar5 >> 0xf ^ uVar5 & 0x7fff;
      uVar5 = (int)(uRam831724e4 & uVar11) >> 8 ^ uRam831724e4 & uVar11;
      uVar5 = (int)uVar5 >> 4 ^ uVar5;
      uVar5 = (int)uVar5 >> 2 ^ uVar5;
      uVar18 = (int)(uRam831724e8 & uVar11) >> 8 ^ uRam831724e8 & uVar11;
      uVar18 = (int)uVar18 >> 4 ^ uVar18;
      uVar18 = (int)uVar18 >> 2 ^ uVar18;
      uVar7 = (int)(uRam831724ec & uVar11) >> 8 ^ uRam831724ec & uVar11;
      uVar7 = (int)uVar7 >> 4 ^ uVar7;
      uVar7 = (int)uVar7 >> 2 ^ uVar7;
      uVar11 = (int)(uRam831724f0 & uVar11) >> 8 ^ uRam831724f0 & uVar11;
      uVar11 = (int)uVar11 >> 4 ^ uVar11;
      uVar11 = (int)uVar11 >> 2 ^ uVar11;
      *(unsigned short *)(iVar2 + iVar22) =
           (short)(1 << (uStack_80 & 0x3f)) - 1U &
           (((unsigned short)((int)uVar11 >> 1) ^ (unsigned short)uVar11) & 1) +
           ((((unsigned short)((int)uVar7 >> 1) ^ (unsigned short)uVar7) & 1) +
           ((((unsigned short)((int)uVar18 >> 1) ^ (unsigned short)uVar18) & 1) +
           (((unsigned short)((int)uVar5 >> 1) ^ (unsigned short)uVar5) & 1) * 2) * 2) * 2 |
           *(unsigned short *)(iVar2 + iVar22);
    }
    uVar3 = 0;
  }
  return uVar3;
}

