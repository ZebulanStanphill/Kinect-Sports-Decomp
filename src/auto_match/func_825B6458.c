typedef unsigned char bool;
extern unsigned int *auStack_d0;
extern int fn_8251CA00();
extern int fn_825269D0();
extern int fn_82530948();
extern int fn_82531118();
extern int fn_825315E0();
extern int fn_82540870();
extern int fn_82540B48();
extern int fn_82545E20();
extern int fn_82545F78();
extern int fn_825460F0();
extern int fn_825463B0();
extern int fn_82560218();
extern int fn_82580138();
extern unsigned int lbl_831D44F0;
extern unsigned int lbl_8320A898;
extern unsigned int lbl_8327F8A8;
extern unsigned int lbl_832960A4;
extern unsigned int lbl_8329618C;
extern unsigned int lbl_83296890;
extern unsigned int lbl_832968A0;
extern unsigned int lbl_832968A4;
extern unsigned int lbl_832968A8;
extern unsigned int lbl_832968B0;
extern unsigned int lbl_832968B4;
extern unsigned int lbl_832968B8;
extern unsigned int lbl_832968C0;
extern unsigned int lbl_832968C4;
extern unsigned int lbl_832968C8;
extern unsigned int lbl_832968D0;
extern unsigned int lbl_832968D8;
extern unsigned int lbl_832968E0;
extern unsigned int lbl_832968E4;
extern unsigned int lbl_832968E8;
extern unsigned int lbl_832968EC;
extern unsigned int lbl_832968F0;
extern unsigned int lbl_832968F4;
extern unsigned int lbl_832968F8;
extern unsigned int lbl_832968FC;
extern unsigned int lbl_83296900;
extern unsigned int lbl_83296904;
extern unsigned int lbl_83296908;
extern unsigned int lbl_8329690C;
extern unsigned int lbl_83296950;
extern unsigned int lbl_83296954;
extern unsigned int lbl_83296958;
extern unsigned int lbl_83296AE0;
extern unsigned int lbl_83296BB8;
extern unsigned int lbl_83296C00;
extern unsigned int lbl_83296C80;
extern unsigned int uRam832968ac;
extern unsigned int uRam832968bc;
extern unsigned int uRam832968cc;
extern unsigned int uRam8329695c;


void fn_825B6458(void)

{
  bool bVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  int iVar12;
  unsigned __int64 in_r0;
  unsigned __int64 uVar13;
  int iVar14;
  int *piVar15;
  unsigned int uVar16;
  __int64 lVar17;
  int *piVar18;
  unsigned char *puVar19;
  unsigned char *puVar20;
  unsigned int uVar21;
  unsigned int uVar22;
  unsigned int uVar23;
  unsigned int uVar24;
  unsigned int uVar25;
  unsigned int uVar26;
  unsigned int uVar27;
  unsigned int uVar28;
  unsigned int uVar29;
  unsigned int uVar30;
  unsigned int uVar31;
  unsigned int uVar32;
  unsigned int uVar33;
  unsigned int uVar34;
  unsigned int uVar35;
  unsigned int uVar36;
  unsigned int uVar37;
  unsigned int uVar38;
  unsigned int uVar39;
  unsigned int uVar40;
  unsigned int uVar41;
  unsigned int uVar42;
  unsigned int uVar43;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  unsigned char auStack_d0 [208];
  
  if (lbl_8329618C == 0) {
    uVar16 = 0;
  }
  else {
    uVar16 = *(unsigned int *)(lbl_8329618C + 4);
  }
  uVar13 = 0x30;
  if ((lbl_831D44F0 == 0) || (lbl_832960A4 != 0)) {
    uVar13 = 0x3f;
  }
  fn_82545E20(uVar13,0);
  fn_825269D0(0x1c,uVar16);
  lVar17 = 0;
  puVar19 = auStack_d0;
  piVar18 = &lbl_83296C80;
  do {
    iVar14 = fn_82560218(uVar16,lVar17);
    if (iVar14 != 0) {
      lbl_83296BB8 = 1;
      fn_825315E0(lbl_8320A898);
      uVar4 = lbl_8320A898;
      fn_82530948(lbl_8320A898);
      fn_825315E0(uVar4);
      fn_82531118();
      piVar15 = piVar18 + -0x28;
      if (*piVar18 == 0) {
        piVar15 = (int *)&lbl_832968D0;
      }
      uVar13 = fn_82540B48(lbl_8327F8A8,piVar15);
      piVar15 = piVar18 + -0x18;
      if (*piVar18 == 0) {
        piVar15 = (int *)&lbl_83296890;
      }
      fn_82540870(uVar13,piVar15);
      fn_8251CA00(0,lVar17);
      uVar4 = lbl_8320A898;
      fn_82530948(lbl_8320A898);
      fn_825315E0(uVar4);
      fn_82531118();
      uVar41 = lbl_8329690C;
      uVar42 = lbl_83296908;
      uVar43 = lbl_83296904;
      uVar7 = lbl_83296900;
      uVar6 = lbl_832968FC;
      uVar5 = lbl_832968F8;
      uVar4 = lbl_832968F4;
      *(unsigned int *)(puVar19 + -0x20) = (((unsigned __int64)(lbl_832968D0) >> 0) & 0xFFFFFFFF);
      *(unsigned int *)(puVar19 + -0x1c) = (((unsigned __int64)(lbl_832968D0) >> 32) & 0xFFFFFFFF);
      *(unsigned int *)(puVar19 + -0x18) = (((unsigned __int64)(lbl_832968D8) >> 0) & 0xFFFFFFFF);
      *(unsigned int *)(puVar19 + -0x14) = (((unsigned __int64)(lbl_832968D8) >> 32) & 0xFFFFFFFF);
      *(unsigned int *)(puVar19 + -0x10) = lbl_832968E0;
      *(unsigned int *)(puVar19 + -0xc) = lbl_832968E4;
      *(unsigned int *)(puVar19 + -8) = lbl_832968E8;
      *(unsigned int *)(puVar19 + -4) = lbl_832968EC;
      puVar2 = (unsigned int *)((unsigned int)(puVar19 + (int)in_r0) & 0xfffffff0);
      *puVar2 = lbl_832968F0;
      puVar2[1] = uVar4;
      puVar2[2] = uVar5;
      puVar2[3] = uVar6;
      *(unsigned int *)(puVar19 + 0x10) = uVar7;
      *(unsigned int *)(puVar19 + 0x14) = uVar43;
      *(unsigned int *)(puVar19 + 0x18) = uVar42;
      *(unsigned int *)(puVar19 + 0x1c) = uVar41;
    }
    piVar18 = piVar18 + 0x2c;
    lVar17 = lVar17 + 1;
    puVar19 = puVar19 + 0x40;
  } while ((int)piVar18 < -0x7cd69220);
  fn_82545F78();
  fn_825460F0(uVar16);
  lVar17 = 0;
  do {
    iVar14 = fn_82560218(uVar16,lVar17);
    if (iVar14 != 0) {
      fn_8251CA00(1,lVar17);
    }
    lVar17 = lVar17 + 1;
  } while ((int)lVar17 < 2);
  lVar17 = 0;
  do {
    iVar14 = fn_82560218(uVar16,lVar17);
    if (iVar14 != 0) {
      fn_8251CA00(2,lVar17);
    }
    lVar17 = lVar17 + 1;
  } while ((int)lVar17 < 2);
  lVar17 = 0;
  puVar19 = auStack_d0;
  puVar20 = &lbl_83296C00;
  do {
    iVar14 = fn_82560218(uVar16,lVar17);
    if (iVar14 != 0) {
      fn_8251CA00(3,lVar17);
      iVar12 = lbl_83296AE0;
      uVar11 = uRam832968cc;
      uVar10 = lbl_832968C8;
      uVar9 = lbl_832968C4;
      uVar8 = lbl_832968C0;
      uVar40 = uRam832968bc;
      uVar41 = lbl_832968B8;
      uVar42 = lbl_832968B4;
      uVar43 = lbl_832968B0;
      uVar7 = uRam832968ac;
      uVar6 = lbl_832968A8;
      uVar5 = lbl_832968A4;
      uVar4 = lbl_832968A0;
      iVar14 = (int)in_r0;
      puVar2 = (unsigned int *)((unsigned int)(puVar19 + iVar14) & 0xfffffff0);
      uVar37 = puVar2[1];
      uVar38 = puVar2[2];
      uVar39 = puVar2[3];
      uVar33 = *(unsigned int *)(puVar19 + -0x20);
      uVar34 = *(unsigned int *)(puVar19 + -0x1c);
      uVar35 = *(unsigned int *)(puVar19 + -0x18);
      uVar36 = *(unsigned int *)(puVar19 + -0x14);
      uVar29 = *(unsigned int *)(puVar19 + -0x10);
      uVar30 = *(unsigned int *)(puVar19 + -0xc);
      uVar31 = *(unsigned int *)(puVar19 + -8);
      uVar32 = *(unsigned int *)(puVar19 + -4);
      uVar25 = *(unsigned int *)(puVar19 + 0x10);
      uVar26 = *(unsigned int *)(puVar19 + 0x14);
      uVar27 = *(unsigned int *)(puVar19 + 0x18);
      uVar28 = *(unsigned int *)(puVar19 + 0x1c);
      puVar3 = (unsigned int *)((int)&lbl_83296890 + iVar14 & 0xfffffff0);
      uVar21 = *puVar3;
      uVar22 = puVar3[1];
      uVar23 = puVar3[2];
      uVar24 = puVar3[3];
      bVar1 = lbl_83296AE0 != 0;
      puVar3 = (unsigned int *)((unsigned int)(puVar20 + iVar14) & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar37;
      puVar3[2] = uVar38;
      puVar3[3] = uVar39;
      *(unsigned int *)(puVar20 + -0x20) = uVar33;
      *(unsigned int *)(puVar20 + -0x1c) = uVar34;
      *(unsigned int *)(puVar20 + -0x18) = uVar35;
      *(unsigned int *)(puVar20 + -0x14) = uVar36;
      *(unsigned int *)(puVar20 + -0x10) = uVar29;
      *(unsigned int *)(puVar20 + -0xc) = uVar30;
      *(unsigned int *)(puVar20 + -8) = uVar31;
      *(unsigned int *)(puVar20 + -4) = uVar32;
      *(unsigned int *)(puVar20 + 0x10) = uVar25;
      *(unsigned int *)(puVar20 + 0x14) = uVar26;
      *(unsigned int *)(puVar20 + 0x18) = uVar27;
      *(unsigned int *)(puVar20 + 0x1c) = uVar28;
      *(unsigned int *)(puVar20 + 0x20) = uVar21;
      *(unsigned int *)(puVar20 + 0x24) = uVar22;
      *(unsigned int *)(puVar20 + 0x28) = uVar23;
      *(unsigned int *)(puVar20 + 0x2c) = uVar24;
      *(unsigned int *)(puVar20 + 0x30) = uVar4;
      *(unsigned int *)(puVar20 + 0x34) = uVar5;
      *(unsigned int *)(puVar20 + 0x38) = uVar6;
      *(unsigned int *)(puVar20 + 0x3c) = uVar7;
      *(unsigned int *)(puVar20 + 0x40) = uVar43;
      *(unsigned int *)(puVar20 + 0x44) = uVar42;
      *(unsigned int *)(puVar20 + 0x48) = uVar41;
      *(unsigned int *)(puVar20 + 0x4c) = uVar40;
      *(unsigned int *)(puVar20 + 0x50) = uVar8;
      *(unsigned int *)(puVar20 + 0x54) = uVar9;
      *(unsigned int *)(puVar20 + 0x58) = uVar10;
      *(unsigned int *)(puVar20 + 0x5c) = uVar11;
      uVar7 = uRam8329695c;
      uVar6 = lbl_83296958;
      uVar5 = lbl_83296954;
      uVar4 = lbl_83296950;
      uVar43 = in_vr77;
      uVar42 = in_register_000104d8;
      uVar41 = in_register_000104d4;
      uVar40 = in_register_000104d0;
      if (bVar1) {
        puVar2 = (unsigned int *)(iVar12 + 0x10U & 0xfffffff0);
        uVar43 = puVar2[3];
        uVar42 = puVar2[2];
        uVar41 = puVar2[1];
        uVar40 = *puVar2;
      }
      *(unsigned int *)(puVar20 + 0x80) = 1;
      *(unsigned int *)(puVar20 + 0x60) = uVar40;
      *(unsigned int *)(puVar20 + 100) = uVar41;
      *(unsigned int *)(puVar20 + 0x68) = uVar42;
      *(unsigned int *)(puVar20 + 0x6c) = uVar43;
      *(unsigned int *)(puVar20 + 0x70) = uVar4;
      *(unsigned int *)(puVar20 + 0x74) = uVar5;
      *(unsigned int *)(puVar20 + 0x78) = uVar6;
      *(unsigned int *)(puVar20 + 0x7c) = uVar7;
    }
    puVar20 = puVar20 + 0xb0;
    lVar17 = lVar17 + 1;
    puVar19 = puVar19 + 0x40;
  } while ((int)puVar20 < -0x7cd692a0);
  fn_825463B0();
  fn_8251CA00(4,0);
  fn_8251CA00(5,0);
  fn_82580138();
  return;
}

