extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
extern unsigned int fStack_78;
extern unsigned int fStack_7c;
extern unsigned int fStack_88;
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_822F5B38();
extern int fn_823AF8F8();
extern int fn_823F2E20();
extern int fn_82539560();
extern int fn_82F622E0();
extern int fn_82F6A53C();
extern int fn_82F6A588();
extern unsigned int iStack_9c;
extern unsigned int lbl_82192734;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831CCDEC;
extern unsigned int lbl_831CCDF0;
extern unsigned int lbl_831CCDF4;
extern unsigned int lbl_831CCDF8;
extern unsigned int lbl_831CCDFC;
extern unsigned int lbl_831CCE00;
extern unsigned int lbl_831CCE04;
extern unsigned int lbl_831CCE08;
extern unsigned int lbl_831CCE4C;


void fn_822F58E0(unsigned __int64 param_1,unsigned __int64 param_2)

{
  float fVar1;
  unsigned int *puVar2;
  int iVar3;
  unsigned int *puVar4;
  unsigned int uVar5;
  int iVar6;
  unsigned int *puVar7;
  unsigned __int64 in_r0;
  int iVar10;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  char cVar11;
  int iVar12;
  unsigned int *puVar13;
  unsigned __int64 uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  unsigned int uVar27;
  unsigned int uVar28;
  unsigned int uVar29;
  unsigned char auStack_a0 [4];
  int iStack_9c;
  float afStack_90 [2];
  float fStack_88;
  unsigned char auStack_80 [4];
  float fStack_7c;
  float fStack_78;
  
  iVar10 = fn_82F6A53C();
  iVar6 = (int)param_2;
  if ((*(int *)(iVar6 + 0x1a0) == 0) || (*(int *)(iVar6 + 400) == 0)) {
    uVar9 = fn_823AF8F8(auStack_a0,param_2);
    fn_823F2E20((int *)(iVar10 + 0x28),uVar9);
    if (iStack_9c != 0) {
      fn_822315A0();
    }
    puVar2 = *(unsigned int **)(iVar10 + 0x28);
    iVar3 = puVar2[1];
    puVar4 = (unsigned int *)*puVar2;
    puVar13 = (unsigned int *)0x0;
    iVar12 = 0;
    if ((iVar3 != 0) && (cVar11 = fn_8223AAC0(iVar3), cVar11 != '\0')) {
      puVar13 = puVar4;
      iVar12 = iVar3;
    }
    uVar8 = (unsigned __int64)*puVar13;
    if (uVar8 != puVar13[1]) {
      dVar21 = (double)lbl_82192734;
      if ((int)(puVar13[1] - *puVar13) >> 5 == 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F622E0(0xffffffff821ae698);
      }
      fVar1 = lbl_831CCDF0;
      if (*(int *)(iVar6 + 0x184) != 0) {
        fVar1 = lbl_831CCDF4;
      }
      dVar22 = (double)fVar1;
      fVar1 = lbl_831CCDFC;
      if (*(int *)(iVar6 + 0x184) != 0) {
        fVar1 = lbl_831CCE00;
      }
      dVar23 = (double)fVar1;
      uVar5 = puVar13[1];
      dVar26 = (double)ltcg_pool_0_0f;
      dVar25 = (double)lbl_821CA460;
      dVar24 = dVar21;
      for (uVar14 = (unsigned __int64)*puVar13; (uVar14 & 0xffffffff) != (unsigned __int64)uVar5;
          uVar14 = uVar14 + 0x20) {
        iVar3 = (int)in_r0;
        puVar2 = (unsigned int *)(iVar3 + (int)uVar14 & 0xfffffff0);
        uVar27 = puVar2[1];
        uVar28 = puVar2[2];
        uVar29 = puVar2[3];
        iVar6 = *(int *)(*(int *)(iVar10 + 0xc) + 0x2c);
        puVar7 = (unsigned int *)((int)afStack_90 + iVar3 & 0xfffffff0);
        *puVar7 = *puVar2;
        puVar7[1] = uVar27;
        puVar7[2] = uVar28;
        puVar7[3] = uVar29;
        if (iVar6 == 0) {
          afStack_90[0] = (float)((double)afStack_90[0] * dVar21);
          fStack_88 = (float)((double)fStack_88 * dVar21);
        }
        dVar15 = (double)lbl_831CCDF8;
        puVar2 = (unsigned int *)((int)afStack_90 + iVar3 & 0xfffffff0);
        uVar27 = puVar2[1];
        uVar28 = puVar2[2];
        uVar29 = puVar2[3];
        puVar7 = (unsigned int *)((unsigned int)(auStack_80 + iVar3) & 0xfffffff0);
        *puVar7 = *puVar2;
        puVar7[1] = uVar27;
        puVar7[2] = uVar28;
        puVar7[3] = uVar29;
        dVar18 = (double)fStack_7c;
        dVar15 = (double)fn_82539560(dVar18,dVar15,dVar23,dVar26,dVar25);
        dVar18 = (double)fn_82539560(dVar18,(double)lbl_831CCDEC,dVar22);
        dVar20 = (double)(float)(dVar15 * dVar18);
        dVar15 = (double)fn_822F5B38(iVar10);
        dVar16 = (double)fStack_78;
        dVar18 = (double)(float)(dVar16 - dVar15);
        dVar19 = (double)lbl_831CCE08;
        dVar17 = (double)lbl_831CCE04;
        dVar15 = (double)fn_82539560(dVar18,-dVar17,-dVar19,dVar26,dVar25);
        dVar18 = (double)fn_82539560(dVar18,dVar17,dVar19);
        dVar15 = (double)(float)((double)(float)(dVar15 * dVar18) * dVar20);
        if ((dVar24 < dVar15) && ((double)lbl_831CCE4C < dVar16)) {
          uVar8 = uVar14;
          dVar24 = dVar15;
        }
      }
      if (dVar26 <= dVar24) {
        if (iVar12 != 0) {
          fn_822315A0(iVar12);
        }
        goto LAB_822f5b28;
      }
    }
    if (iVar12 != 0) {
      fn_822315A0(iVar12);
    }
  }
  uVar8 = 0;
LAB_822f5b28:
  fn_82F6A588(uVar8);
  return;
}

