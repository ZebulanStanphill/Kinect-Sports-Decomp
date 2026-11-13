#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int fStack_e8;
extern unsigned int fStack_ec;
extern unsigned int fStack_f0;
extern int fn_82539560();
extern int fn_82F59478();
extern int fn_8306E7F8();
extern int fn_8306E890();
extern int fn_8306EA78();
extern int fn_83075DD0();
extern int fn_83075E30();
extern int fn_83075E40();
extern int fn_83076028();
extern int fn_83076180();
extern int fn_830761D0();
extern int fn_83076238();
extern int fn_83076368();
extern int fn_83076570();
extern int fn_830769C0();
extern int fn_83078598();
extern int fn_83078738();
extern int fn_8307D880();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005718;
extern unsigned int lbl_8201FBC0;
extern unsigned int lbl_8202236C;
extern unsigned int lbl_82079F6C;
extern unsigned int lbl_8207F510;
extern unsigned int lbl_8217EB78;
extern unsigned int lbl_82186E64;
extern unsigned int lbl_82186E6C;
extern unsigned int lbl_82186E74;
extern unsigned int lbl_82196080;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_b0;
extern unsigned int uStack_b8;
extern unsigned int uStack_c0;
extern unsigned int uStack_c8;
extern unsigned int uStack_d0;
extern unsigned int uStack_d8;
extern unsigned int uStack_e0;


void fn_83078890(int param_1,unsigned __int64 param_2)

{
  float fVar1;
  int iVar2;
  unsigned int *puVar3;
  int in_r0;
  unsigned __int64 *puVar4;
  unsigned char uVar5;
  double dVar6;
  unsigned __int64 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  unsigned char in_vs32 [16];
  unsigned char in_vs61 [16];
  unsigned int in_register_00010010;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int in_register_00010014;
  unsigned int uVar13;
  unsigned int uVar14;
  unsigned int in_register_00010018;
  unsigned int uVar15;
  unsigned int uVar16;
  unsigned int in_vr1;
  unsigned int uVar17;
  unsigned int uVar18;
  unsigned int in_register_000103f0;
  unsigned int in_register_000103f4;
  unsigned int in_register_000103f8;
  unsigned int in_vr63;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  unsigned __int64 uStack_e0;
  unsigned __int64 uStack_d8;
  unsigned __int64 uStack_d0;
  unsigned __int64 uStack_c8;
  unsigned __int64 uStack_c0;
  unsigned __int64 uStack_b8;
  unsigned __int64 uStack_b0;
  unsigned char auStack_a0 [16];
  unsigned char auStack_90 [144];
  
  iVar2 = *(int *)(param_1 + 0x58);
  fVar1 = lbl_8217EB78;
  if (iVar2 == 2) {
    fVar1 = lbl_82079F6C;
  }
  dVar8 = (double)fVar1;
  dVar6 = (double)*(float *)(param_1 + 0x54);
  if (((dVar6 <= dVar8) || ((param_2 & 1) != 0)) ||
     (((param_2 & 2) != 0 && (*(char *)(param_1 + 0x5c) == '\0')))) {
    puVar3 = (unsigned int *)(param_1 + 0x120U & 0xfffffff0);
    *puVar3 = in_register_00010010;
    puVar3[1] = in_register_00010014;
    puVar3[2] = in_register_00010018;
    puVar3[3] = in_vr1;
    if (((param_2 & 2) == 0) || (uVar5 = 1, dVar6 <= dVar8)) {
      uVar5 = 0;
    }
    *(unsigned char *)(param_1 + 0x5c) = uVar5;
    goto LAB_83078b6c;
  }
  dVar9 = (double)lbl_821AAD20;
  if (dVar9 <= dVar6) {
    if (iVar2 == 1) {
      dVar6 = (double)fn_82539560(dVar6,(double)lbl_82186E74,(double)lbl_8201FBC0,dVar9,
                                   (double)lbl_82186E6C);
      if (dVar6 <= dVar9) goto LAB_83078b6c;
      uVar7 = fn_8306E890(dVar6,(double)*(float *)(param_1 + 0x188));
      if (*(int *)(param_1 + 0x3c) == 0) {
        fn_83075E30();
      }
      else {
        fn_83078598(&uStack_e0);
        fn_8307D880(&fStack_f0,uStack_e0,uStack_d8,uStack_d0,uStack_c8,uStack_c0,uStack_b8,
                          uStack_b0);
        puVar4 = (unsigned __int64 *)
                 fn_82F59478(-(double)fStack_f0,-(double)fStack_ec,-(double)fStack_e8,auStack_a0);
        fn_830769C0(*puVar4,(unsigned __int64)*(unsigned int *)(puVar4 + 1) << 0x20);
      }
      goto LAB_83078b34;
    }
    if (iVar2 == 2) {
      uVar7 = fn_82539560(dVar6,(double)lbl_82186E74,(double)lbl_8201FBC0,dVar9,
                           (double)lbl_82005718);
      uVar7 = fn_8306E890(uVar7,(double)*(float *)(param_1 + 0x188));
      fn_83075E30();
      puVar3 = (unsigned int *)(param_1 + 0x150U & 0xfffffff0);
      uVar12 = *puVar3;
      uVar14 = puVar3[1];
      uVar16 = puVar3[2];
      uVar18 = puVar3[3];
      fn_83076570(uVar7);
      uVar11 = uVar18;
      uVar13 = uVar16;
      uVar15 = uVar14;
      uVar17 = uVar12;
      if (*(int *)(param_1 + 0x3c) == 0) {
        fn_83075E30();
      }
      else {
        fn_83078598(auStack_90);
        fn_83075E40();
      }
      puVar3 = (unsigned int *)((int)&fStack_f0 + in_r0 & 0xfffffff0);
      *puVar3 = uVar17;
      puVar3[1] = uVar15;
      puVar3[2] = uVar13;
      puVar3[3] = uVar11;
      fn_830761D0();
      fn_83076028();
      puVar3 = (unsigned int *)(param_1 + 0x120U & 0xfffffff0);
      *puVar3 = uVar12;
      puVar3[1] = uVar14;
      puVar3[2] = uVar16;
      puVar3[3] = uVar18;
      goto LAB_83078b6c;
    }
    if (((*(float *)(param_1 + 0x188) <= lbl_82196080) ||
        (*(float *)(param_1 + 0x184) <= lbl_82196080)) || (*(char *)(param_1 + 0x5c) != '\0'))
    goto LAB_83078b6c;
    dVar8 = (double)(*(float *)(param_1 + 0x188) / *(float *)(param_1 + 0x184));
    dVar10 = (double)lbl_82002AE0;
    dVar6 = (double)fn_82539560((double)*(float *)(param_1 + 0x18c),(double)lbl_8207F510,
                                 (double)lbl_8202236C,dVar10,dVar9);
    puVar3 = (unsigned int *)(param_1 + 0x130U & 0xfffffff0);
    uVar11 = *puVar3;
    uVar13 = puVar3[1];
    uVar15 = puVar3[2];
    uVar17 = puVar3[3];
    fn_83076570((double)(float)((double)(float)(dVar6 * dVar8) + dVar10));
    puVar3 = (unsigned int *)(in_r0 + param_1 + 0x120 & 0xfffffff0);
    *puVar3 = uVar11;
    puVar3[1] = uVar13;
    puVar3[2] = uVar15;
    puVar3[3] = uVar17;
    fn_83076180();
  }
  else {
    if (iVar2 == 2) {
      dVar6 = (double)fn_82539560(dVar6,dVar9,dVar8,dVar9,(double)lbl_82002AE0);
      uVar7 = fn_8306E890((double)(float)((double)(float)(dVar6 * dVar6) * dVar6),
                                (double)*(float *)(param_1 + 0x188));
    }
    else {
      uVar7 = fn_82539560(dVar6,dVar9,dVar8,(double)lbl_82186E6C,(double)lbl_82002AE0);
    }
LAB_83078b34:
    puVar3 = (unsigned int *)(in_r0 + param_1 + 0x120 & 0xfffffff0);
    uVar11 = *puVar3;
    uVar13 = puVar3[1];
    uVar15 = puVar3[2];
    uVar17 = puVar3[3];
    fn_83076570(uVar7);
  }
  puVar3 = (unsigned int *)(in_r0 + param_1 + 0x120 & 0xfffffff0);
  *puVar3 = uVar11;
  puVar3[1] = uVar13;
  puVar3[2] = uVar15;
  puVar3[3] = uVar17;
LAB_83078b6c:
  if ((param_2 & 4) == 0) {
    fn_83076368();
    fn_83076238();
    if (*(float *)(param_1 + 0x188) <= lbl_82196080) {
      altv207_13(in_vs32,in_vs61);
      puVar3 = (unsigned int *)(in_r0 + param_1 + 0x120 & 0xfffffff0);
      *puVar3 = in_register_000103f0;
      puVar3[1] = in_register_000103f4;
      puVar3[2] = in_register_000103f8;
      puVar3[3] = in_vr63;
    }
    else {
      dVar6 = (double)fn_8306EA78();
      fVar1 = (float)(dVar6 / (double)*(float *)(param_1 + 0x188));
      if (lbl_82186E64 < fVar1) {
        puVar3 = (unsigned int *)(in_r0 + param_1 + 0x140 & 0xfffffff0);
        uVar11 = *puVar3;
        uVar13 = puVar3[1];
        uVar15 = puVar3[2];
        uVar17 = puVar3[3];
        fn_83076570((double)(lbl_82186E64 / fVar1));
        puVar3 = (unsigned int *)(in_r0 + param_1 + 0x120 & 0xfffffff0);
        *puVar3 = uVar11;
        puVar3[1] = uVar13;
        puVar3[2] = uVar15;
        puVar3[3] = uVar17;
      }
    }
  }
  if (*(char *)(param_1 + 0x169) != '\0') {
    puVar3 = (unsigned int *)(in_r0 + param_1 + 0x120 & 0xfffffff0);
    uVar11 = *puVar3;
    uVar13 = puVar3[1];
    uVar15 = puVar3[2];
    uVar17 = puVar3[3];
    fn_83075DD0(&fStack_f0);
    dVar6 = (double)fn_8306E7F8((double)fStack_f0,(double)*(float *)(param_1 + 0x16c),
                                 (double)*(float *)(param_1 + 0x170));
    fStack_f0 = (float)dVar6;
    dVar6 = (double)fn_8306E7F8((double)fStack_ec,(double)*(float *)(param_1 + 0x174),
                                 (double)*(float *)(param_1 + 0x178));
    fStack_ec = (float)dVar6;
    dVar6 = (double)fn_8306E7F8((double)fStack_e8,(double)*(float *)(param_1 + 0x17c),
                                 (double)*(float *)(param_1 + 0x180));
    fStack_e8 = (float)dVar6;
    fn_830769C0(CONCAT44(fStack_f0,fStack_ec),(unsigned __int64)(unsigned int)fStack_e8 << 0x20);
    puVar3 = (unsigned int *)(in_r0 + param_1 + 0x120 & 0xfffffff0);
    *puVar3 = uVar11;
    puVar3[1] = uVar13;
    puVar3[2] = uVar15;
    puVar3[3] = uVar17;
  }
  fn_83078738(param_1);
  return;
}

