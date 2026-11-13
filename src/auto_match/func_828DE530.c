extern unsigned int *auStack_110;
extern unsigned int *auStack_130;
extern unsigned int *auStack_150;
extern unsigned int *auStack_1e8;
extern unsigned int *auStack_200;
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_f0;
extern int fn_82237920();
extern int fn_8223B728();
extern int fn_8223CD08();
extern int fn_8223CF38();
extern int fn_8223FDB8();
extern int fn_82240158();
extern int fn_822403C8();
extern int fn_82517B60();
extern int fn_82520AC8();
extern int fn_8265CA20();
extern int fn_828B7940();
extern int fn_828B92A0();
extern int fn_828B94E0();
extern int fn_828BBFC0();
extern int fn_828BC448();
extern int fn_828C2938();
extern int fn_828C2A50();
extern int fn_82F62528();
extern int fn_82F62680();
extern int fn_82F626D0();
extern int fn_82F62F60();
extern unsigned int lbl_82020F30;
extern unsigned int lbl_82020F40;
extern unsigned int lbl_8202115C;
extern unsigned int lbl_820211D4;
extern unsigned int lbl_82021284;
extern unsigned int lbl_821AA8E0;
extern unsigned int uStack_100;
extern unsigned int uStack_11c;
extern unsigned int uStack_120;
extern unsigned int uStack_13c;
extern unsigned int uStack_140;
extern unsigned int uStack_1ac;
extern unsigned int uStack_1b0;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;
extern unsigned int uStack_dc;
extern unsigned int uStack_e0;
extern unsigned int uStack_fc;


/* WARNING: Type propagation algorithm not settling */

unsigned __int64 fn_828DE530(unsigned __int64 param_1,int param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned int *puVar10;
  unsigned char auStack_200 [16];
  unsigned char **appuStack_1f0 [2];
  unsigned char auStack_1e8 [12];
  unsigned int *puStack_1dc;
  unsigned int *puStack_1d8;
  unsigned int *puStack_1cc;
  unsigned int *puStack_1c8;
  unsigned int *puStack_1bc;
  unsigned int *puStack_1b8;
  unsigned int *puStack_1b4;
  unsigned int uStack_1b0;
  unsigned int uStack_1ac;
  unsigned char **appuStack_1a0 [20];
  unsigned int auStack_150 [4];
  unsigned int uStack_140;
  unsigned int uStack_13c;
  unsigned int auStack_130 [4];
  unsigned int uStack_120;
  unsigned int uStack_11c;
  unsigned int auStack_110 [4];
  unsigned int uStack_100;
  unsigned int uStack_fc;
  unsigned int auStack_f0 [4];
  unsigned int uStack_e0;
  unsigned int uStack_dc;
  unsigned int auStack_d0 [4];
  unsigned int uStack_c0;
  unsigned int uStack_bc;
  unsigned int auStack_b0 [4];
  unsigned int uStack_a0;
  unsigned int uStack_9c;
  unsigned int auStack_90 [4];
  unsigned int uStack_80;
  unsigned int uStack_7c;
  
  appuStack_1a0[0] = &lbl_82020F40;
  appuStack_1f0[0] = (unsigned char **)&lbl_821AA8E0;
  fn_8223CD08(appuStack_1a0,appuStack_1f0 + 1,0);
  *(unsigned char ***)((int)appuStack_1f0 + (int)appuStack_1f0[0][1]) = &lbl_82021284;
  fn_8223CF38(appuStack_1f0 + 1,2);
  fn_82240158(appuStack_1f0,0xffffffff820270b8);
  if (*(char *)(param_2 + 0xcc) == '\0') {
    fn_82240158(appuStack_1f0,0xffffffff82026fd8);
  }
  else {
    uVar5 = fn_828B94E0(auStack_b0,param_2 + 0xa8,0);
    uVar6 = fn_828B92A0(auStack_90,param_2 + 0x98,0);
    uVar7 = fn_828B7940(auStack_f0,param_2 + 0x90,0);
    uVar1 = *(unsigned int *)(param_2 + 0x8c);
    uVar2 = *(unsigned int *)(param_2 + 0x88);
    uVar9 = *(unsigned __int64 *)(param_2 + 0x80);
    uVar8 = fn_82240158(appuStack_1f0,0xffffffff82027020);
    uVar8 = fn_82237920(uVar8,uVar9);
    uVar8 = fn_82240158(uVar8,0xffffffff82027004);
    uVar8 = fn_82520AC8(uVar8,uVar2);
    uVar8 = fn_82240158(uVar8,0xffffffff82026fec);
    uVar8 = fn_82520AC8(uVar8,uVar1);
    uVar8 = fn_82240158(uVar8,0xffffffff820270ac);
    uVar7 = fn_8223B728(uVar8,uVar7);
    uVar7 = fn_82240158(uVar7,0xffffffff820270a0);
    uVar6 = fn_8223B728(uVar7,uVar6);
    uVar6 = fn_82240158(uVar6,0xffffffff82027094);
    uVar5 = fn_8223B728(uVar6,uVar5);
    uVar5 = fn_82240158(uVar5,0xffffffff82027084);
    fn_82517B60(uVar5,10);
    fn_8223FDB8(uVar5);
    if (0xf < uStack_dc) {
      fn_8265CA20(auStack_f0[0]);
    }
    uStack_e0 = 0;
    uStack_dc = 0xf;
    auStack_f0[0] = auStack_f0[0] & 0xffffff;
    if (0xf < uStack_7c) {
      fn_8265CA20(auStack_90[0]);
    }
    uStack_7c = 0xf;
    uStack_80 = 0;
    auStack_90[0] = auStack_90[0] & 0xffffff;
    if (0xf < uStack_9c) {
      fn_8265CA20(auStack_b0[0]);
    }
    puVar10 = *(unsigned int **)(param_2 + 0xd0);
    uStack_9c = 0xf;
    uStack_a0 = 0;
    auStack_b0[0] = auStack_b0[0] & 0xffffff;
    if (puVar10 != *(unsigned int **)(param_2 + 0xd4)) {
      do {
        uVar1 = *puVar10;
        uVar5 = fn_828C2938(auStack_130,puVar10[2],param_3);
        uVar6 = fn_828C2A50(auStack_150,uVar1,param_3);
        uVar7 = fn_82240158(appuStack_1f0,0xffffffff82025324);
        uVar6 = fn_8223B728(uVar7,uVar6);
        uVar6 = fn_82240158(uVar6,0xffffffff82196fac);
        uVar5 = fn_8223B728(uVar6,uVar5);
        uVar5 = fn_82240158(uVar5,0xffffffff821c27b4);
        fn_82517B60(uVar5,10);
        fn_8223FDB8(uVar5);
        if (0xf < uStack_13c) {
          fn_8265CA20(auStack_150[0]);
        }
        uStack_13c = 0xf;
        uStack_140 = 0;
        auStack_150[0] = auStack_150[0] & 0xffffff;
        if (0xf < uStack_11c) {
          fn_8265CA20(auStack_130[0]);
        }
        puVar10 = puVar10 + 4;
        uStack_11c = 0xf;
        uStack_120 = 0;
        auStack_130[0] = auStack_130[0] & 0xffffff;
      } while (puVar10 != *(unsigned int **)(param_2 + 0xd4));
    }
    uVar5 = fn_82240158(appuStack_1f0,0xffffffff82027074);
    fn_82517B60(uVar5,10);
    fn_8223FDB8(uVar5);
    puVar10 = *(unsigned int **)(param_2 + 0xe0);
    if (puVar10 != *(unsigned int **)(param_2 + 0xe4)) {
      do {
        uVar1 = *puVar10;
        uVar5 = fn_828BBFC0(auStack_d0,puVar10[2],param_3);
        uVar6 = fn_828BC448(auStack_110,uVar1,param_3);
        uVar7 = fn_82240158(appuStack_1f0,0xffffffff82025324);
        uVar6 = fn_8223B728(uVar7,uVar6);
        uVar6 = fn_82240158(uVar6,0xffffffff82196fac);
        uVar5 = fn_8223B728(uVar6,uVar5);
        uVar5 = fn_82240158(uVar5,0xffffffff821c27b4);
        fn_82517B60(uVar5,10);
        fn_8223FDB8(uVar5);
        if (0xf < uStack_fc) {
          fn_8265CA20(auStack_110[0]);
        }
        uStack_fc = 0xf;
        uStack_100 = 0;
        auStack_110[0] = auStack_110[0] & 0xffffff;
        if (0xf < uStack_bc) {
          fn_8265CA20(auStack_d0[0]);
        }
        puVar10 = puVar10 + 4;
        uStack_bc = 0xf;
        uStack_c0 = 0;
        auStack_d0[0] = auStack_d0[0] & 0xffffff;
      } while (puVar10 != *(unsigned int **)(param_2 + 0xe4));
    }
  }
  fn_822403C8(param_1,appuStack_1f0 + 1);
  *(unsigned char ***)((int)appuStack_1f0 + (int)appuStack_1f0[0][1]) = &lbl_82021284;
  appuStack_1f0[1] = &lbl_820211D4;
  if ((uStack_1ac & 1) != 0) {
    fn_8265CA20(*puStack_1dc);
  }
  *puStack_1dc = 0;
  *puStack_1cc = 0;
  *puStack_1bc = 0;
  *puStack_1d8 = 0;
  *puStack_1c8 = 0;
  *puStack_1b8 = 0;
  uStack_1ac = uStack_1ac & 0xfffffffe;
  uStack_1b0 = 0;
  appuStack_1f0[1] = &lbl_8202115C;
  if (puStack_1b4 != (unsigned int *)0x0) {
    uVar3 = *puStack_1b4;
    if (uVar3 != 0) {
      fn_82F62680(auStack_200,0);
      iVar4 = *(int *)(uVar3 + 4);
      if ((iVar4 != 0) && (iVar4 != -1)) {
        *(int *)(uVar3 + 4) = iVar4 + -1;
      }
      puVar10 = (unsigned int *)(-(unsigned int)(*(int *)(uVar3 + 4) == 0) & uVar3);
      fn_82F626D0(auStack_200);
      if (puVar10 != (unsigned int *)0x0) {
        (**(int (***)())*puVar10)(puVar10,1);
      }
    }
    fn_8265CA20(puStack_1b4);
  }
  fn_82F62528(auStack_1e8);
  *(unsigned char ***)((int)appuStack_1f0 + (int)appuStack_1f0[0][1]) = &lbl_82020F40;
  appuStack_1a0[0] = &lbl_82020F30;
  fn_82F62F60(appuStack_1a0);
  return param_1;
}

