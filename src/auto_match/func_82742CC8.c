extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_e0;
extern unsigned int *auStack_f0;
extern unsigned int fStack_bc;
extern unsigned int fStack_c0;
extern unsigned int fStack_c4;
extern unsigned int fStack_c8;
extern unsigned int fStack_cc;
extern unsigned int fStack_d0;
extern int fn_8267B890();
extern int fn_826824B0();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_826957D0();
extern int fn_82695FA0();
extern int fn_82696330();
extern int fn_82696958();
extern int fn_82696BC8();
extern int fn_82697EB8();
extern int fn_826A66F8();
extern int fn_82741A50();
extern int fn_827437A0();
extern int fn_82743808();
extern int fn_82744378();


void fn_82742CC8(int param_1)

{
  unsigned int uVar1;
  char cVar5;
  unsigned __int64 uVar2;
  int iVar3;
  int iVar4;
  float *pfVar6;
  unsigned __int64 uVar7;
  unsigned char *puVar8;
  __int64 lVar9;
  unsigned char auStack_f0 [8];
  double dStack_e8;
  unsigned char auStack_e0 [8];
  double dStack_d8;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  unsigned char auStack_b0 [16];
  unsigned char auStack_a0 [16];
  unsigned char auStack_90 [8];
  double dStack_88;
  unsigned char auStack_80 [8];
  double dStack_78;
  unsigned char auStack_70 [8];
  double dStack_68;
  unsigned char auStack_60 [8];
  double dStack_58;
  unsigned char auStack_50 [16];
  unsigned char auStack_40 [16];
  unsigned char auStack_30 [48];
  
  cVar5 = fn_82695468(param_1,0xf);
  if (cVar5 == '\0') {
    fn_826954C0(param_1,0xffffffff8200ef08,0,0);
  }
  else {
    uVar7 = (unsigned __int64)*(unsigned int *)(param_1 + 8) - 0x10;
    if ((unsigned __int64)*(unsigned int *)(param_1 + 8) == 0) {
      uVar7 = 0;
    }
    if (((uVar7 & 0xffffffff) != 0) && (0 < *(int *)(param_1 + 0x1c))) {
      uVar1 = *(unsigned int *)(param_1 + 0x18);
      uVar2 = fn_826957D0(param_1,0);
      iVar3 = fn_82696958(uVar2,uVar1);
      if ((iVar3 != 0) &&
         (iVar4 = (**(int (***)())(*(int *)(iVar3 + 0x10) + 8))(iVar3 + 0x10), iVar4 == 0x10)) {
        fn_82741A50(&fStack_d0,uVar7,*(unsigned int *)(param_1 + 0x18));
        puVar8 = auStack_60;
        lVar9 = 2;
        do {
          puVar8 = puVar8 + 0x10;
          *puVar8 = 0;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        fn_827437A0(iVar3,(unsigned __int64)*(unsigned int *)(param_1 + 0x18) + 0x78,auStack_50);
        uVar7 = fn_8267B890(*(unsigned int *)(*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x288)
                                  ,0x30,0);
        if ((uVar7 & 0xffffffff) == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = fn_82744378(uVar7,*(unsigned int *)(param_1 + 0x18));
        }
        pfVar6 = &fStack_c0;
        lVar9 = 2;
        do {
          pfVar6 = pfVar6 + 4;
          *(unsigned char *)pfVar6 = 0;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        dStack_e8 = (double)fStack_d0;
        auStack_f0[0] = 3;
        fn_826A66F8(auStack_f0,*(unsigned int *)(param_1 + 0x18),auStack_50);
        dStack_d8 = (double)fStack_cc;
        auStack_e0[0] = 3;
        fn_826A66F8(auStack_e0,*(unsigned int *)(param_1 + 0x18),auStack_40);
        dStack_68 = (double)fStack_c8;
        auStack_70[0] = 3;
        fn_82695FA0(auStack_b0,auStack_70);
        fn_82696330(auStack_70);
        fn_82697EB8(auStack_b0,*(unsigned int *)(param_1 + 0x18),auStack_f0);
        fn_82697EB8(auStack_b0,*(unsigned int *)(param_1 + 0x18),auStack_e0);
        dStack_78 = (double)fStack_c4;
        auStack_80[0] = 3;
        fn_82695FA0(auStack_f0,auStack_80);
        fn_82696330(auStack_80);
        fn_826A66F8(auStack_f0,*(unsigned int *)(param_1 + 0x18),auStack_50);
        dStack_88 = (double)fStack_c0;
        auStack_90[0] = 3;
        fn_82695FA0(auStack_e0,auStack_90);
        fn_82696330(auStack_90);
        fn_826A66F8(auStack_e0,*(unsigned int *)(param_1 + 0x18),auStack_40);
        dStack_58 = (double)fStack_bc;
        auStack_60[0] = 3;
        fn_82695FA0(auStack_a0,auStack_60);
        fn_82696330(auStack_60);
        fn_82697EB8(auStack_a0,*(unsigned int *)(param_1 + 0x18),auStack_f0);
        fn_82697EB8(auStack_a0,*(unsigned int *)(param_1 + 0x18),auStack_e0);
        fn_82743808(uVar7,(unsigned __int64)*(unsigned int *)(param_1 + 0x18) + 0x78,auStack_b0);
        fn_82696BC8(*(unsigned int *)(param_1 + 4),uVar7);
        fn_82696330(auStack_e0);
        fn_82696330(auStack_f0);
        puVar8 = auStack_90;
        lVar9 = 1;
        do {
          puVar8 = puVar8 + -0x10;
          fn_82696330(puVar8);
          lVar9 = lVar9 + -1;
        } while (-1 < lVar9);
        if ((uVar7 & 0xffffffff) != 0) {
          fn_826824B0(uVar7);
        }
        puVar8 = auStack_30;
        lVar9 = 1;
        do {
          puVar8 = puVar8 + -0x10;
          fn_82696330(puVar8);
          lVar9 = lVar9 + -1;
        } while (-1 < lVar9);
      }
    }
  }
  return;
}

