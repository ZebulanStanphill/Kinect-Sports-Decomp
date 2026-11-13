extern unsigned int *auStack_7c;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_e0;
extern unsigned int fStack_88;
extern unsigned int fStack_8c;
extern unsigned int fStack_90;
extern unsigned int fStack_94;
extern unsigned int fStack_98;
extern unsigned int fStack_9c;
extern int fn_822315A0();
extern int fn_82250A18();
extern int fn_822ABA88();
extern int fn_822EFBF0();
extern int fn_82365BD8();
extern int fn_823A7198();
extern int fn_823B0CE8();
extern int fn_8288B760();
extern int fn_82F6A544();
extern int fn_82F6A590();
extern unsigned int iStack_78;
extern unsigned int iStack_dc;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_832975B0;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_a0;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;


void fn_822F09C0(unsigned __int64 param_1,double param_2,double param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5)

{
  int *piVar1;
  unsigned int *puVar2;
  int in_r0;
  int iVar4;
  unsigned __int64 uVar3;
  int iVar5;
  int iVar6;
  unsigned int uVar7;
  unsigned int *puVar8;
  unsigned int in_r8;
  double extraout_f1;
  double dVar9;
  double dVar10;
  double dVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  unsigned char auStack_e0 [4];
  int iStack_dc;
  unsigned char auStack_d0 [16];
  unsigned int uStack_c0;
  unsigned int uStack_bc;
  unsigned int uStack_b8;
  unsigned char auStack_b0 [16];
  unsigned int uStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  unsigned int uStack_84;
  unsigned int uStack_80;
  unsigned char auStack_7c [4];
  int iStack_78;
  
  iVar4 = fn_82F6A544();
  if (*(int *)(iVar4 + 0x24) == 0) {
    uVar3 = 0;
  }
  else {
    iVar6 = *(int *)(iVar4 + 0xc);
    dVar11 = (double)ltcg_pool_0_0f;
    dVar10 = (double)lbl_821CA460;
    dVar9 = extraout_f1;
    iVar5 = fn_823B0CE8(extraout_f1,param_2,param_3,dVar11,dVar11,dVar10,auStack_d0,
                              *(int *)(iVar4 + 0x24),param_5);
    puVar8 = (unsigned int *)(in_r0 + iVar5 & 0xfffffff0);
    uVar12 = puVar8[1];
    uVar13 = puVar8[2];
    uVar14 = puVar8[3];
    puVar2 = (unsigned int *)(iVar6 + 0x230U & 0xfffffff0);
    *puVar2 = *puVar8;
    puVar2[1] = uVar12;
    puVar2[2] = uVar13;
    puVar2[3] = uVar14;
    *(unsigned int *)(*(int *)(iVar4 + 0x24) + 0x150) = 1;
    iVar6 = *(int *)(*(int *)(iVar4 + 0x24) + 0xa8);
    if ((iVar6 != 0) && (*(int *)(iVar6 + 0x1d0) != 0)) {
      *(int *)(iVar6 + 0x1d0) = *(int *)(iVar6 + 0x1d0) + -1;
    }
    if (*(int *)(*(int *)(iVar4 + 0xc) + 0x2c) != 0) {
      piVar1 = *(int **)**(unsigned int **)(*(int *)(iVar4 + 0x10) + 8);
      iVar6 = fn_822ABA88(*(unsigned int *)(piVar1[4] * 4 + *piVar1),0);
      puVar8 = (unsigned int *)(iVar6 + 0x80U & 0xfffffff0);
      uVar12 = puVar8[1];
      uVar13 = puVar8[2];
      uVar14 = puVar8[3];
      puVar2 = (unsigned int *)(iVar6 + 0x250U & 0xfffffff0);
      *puVar2 = *puVar8;
      puVar2[1] = uVar12;
      puVar2[2] = uVar13;
      puVar2[3] = uVar14;
    }
    iVar6 = lbl_832975B0;
    if (lbl_832975B0 == 0) {
      iVar6 = fn_82250A18();
    }
    if ((*(char *)(iVar6 + 4) != '\0') &&
       (iVar6 = *(int *)(*(int *)(iVar4 + 0x10) + 0x84), iVar6 != 0)) {
      if (*(int *)(*(int *)(iVar4 + 0xc) + 0x168) == 0) {
        uVar7 = *(unsigned int *)(*(int *)(iVar4 + 0xc) + 0x16c);
      }
      else {
        uVar7 = fn_8288B760();
        uVar7 = uVar7 & 0xff;
      }
      if (uVar7 != 0) {
        uVar7 = *(unsigned int *)(iVar4 + 0x24);
        uStack_bc = *(unsigned int *)(*(int *)(iVar4 + 0xc) + 0x2c);
        uStack_c0 = *(unsigned int *)(*(int *)(iVar4 + 0xc) + 0x28);
        puVar8 = (unsigned int *)(uVar7 + 0x10 & 0xfffffff0);
        uVar12 = puVar8[1];
        uVar13 = puVar8[2];
        uVar14 = puVar8[3];
        puVar2 = (unsigned int *)((unsigned int)(auStack_b0 + in_r0) & 0xfffffff0);
        *puVar2 = *puVar8;
        puVar2[1] = uVar12;
        puVar2[2] = uVar13;
        puVar2[3] = uVar14;
        fStack_9c = (float)dVar9;
        uStack_b8 = 1;
        fStack_98 = (float)param_2;
        uStack_a0 = (unsigned int)param_5;
        fStack_94 = (float)param_3;
        uStack_84 = 0;
        fStack_90 = (float)dVar11;
        fStack_8c = (float)dVar11;
        fStack_88 = (float)dVar10;
        uStack_80 = in_r8;
        fn_82365BD8(auStack_7c,(unsigned __int64)uVar7 + 0x2b4);
        puVar8 = (unsigned int *)fn_822EFBF0(auStack_e0,iVar6);
        fn_823A7198(*puVar8,&uStack_c0);
        if (iStack_dc != 0) {
          fn_822315A0();
        }
        if (iStack_78 != 0) {
          fn_822315A0();
        }
      }
    }
    uVar3 = 1;
  }
  fn_82F6A590(uVar3);
  return;
}

