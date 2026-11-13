extern unsigned int *auStack_190;
extern unsigned int *auStack_1a0;
extern unsigned int *auStack_1f0;
extern unsigned int *auStack_240;
extern unsigned int *auStack_290;
extern unsigned int *auStack_2e0;
extern unsigned int *auStack_300;
extern unsigned int *auStack_328;
extern unsigned int *auStack_330;
extern unsigned int *auStack_338;
extern unsigned int *auStack_340;
extern unsigned int *auStack_370;
extern unsigned int *auStack_3ac;
extern int fn_82CE5410();
extern int fn_83085320();
extern int fn_830853E8();
extern int fn_830855B0();
extern int fn_83085A80();
extern int fn_83085AB0();
extern int fn_83086A30();
extern int fn_83086D50();
extern unsigned int iStack_318;
extern unsigned int lbl_8323B310;
extern unsigned int uRam8323b314;
extern unsigned int uRam8323b318;
extern unsigned int uRam8323b31c;
extern unsigned int uStack_1d8;
extern unsigned int uStack_228;
extern unsigned int uStack_278;
extern unsigned int uStack_2c8;
extern unsigned int uStack_37c;
extern unsigned int uStack_380;
extern unsigned int uStack_384;
extern unsigned int uStack_386;
extern unsigned int uStack_388;
extern unsigned int uStack_38c;
extern unsigned int uStack_38e;
extern unsigned int uStack_390;
extern unsigned int uStack_39c;
extern unsigned int uStack_3a0;
extern unsigned int uStack_3b0;


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_83085678(int *param_1,int *param_2)

{
  int (**pcVar1)();
  unsigned int *puVar2;
  int *piVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned __int64 in_r0;
  int iVar11;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  int iVar12;
  int iVar13;
  int iVar14;
  unsigned int uVar15;
  unsigned int uVar16;
  unsigned char **ppuVar17;
  int iVar18;
  unsigned char *puVar19;
  unsigned char *puVar20;
  unsigned char *puVar21;
  unsigned int uStack_3b0;
  unsigned int auStack_3ac [3];
  struct { unsigned int first; unsigned int second; } stack_pair_3a0;

  unsigned short uStack_390;
  unsigned short uStack_38e;
  unsigned short uStack_38c;
  unsigned short uStack_388;
  unsigned short uStack_386;
  unsigned short uStack_384;
  unsigned int uStack_380;
  unsigned int uStack_37c;
  unsigned int auStack_370 [4];
  int aiStack_360 [4];
  int aiStack_350 [4];
  unsigned char auStack_340 [8];
  unsigned char auStack_338 [8];
  unsigned char auStack_330 [8];
  unsigned char auStack_328 [8];
  unsigned int *puStack_320;
  unsigned char *puStack_31c;
  int iStack_318;
  unsigned char *puStack_314;
  unsigned char *puStack_310;
  unsigned char auStack_300 [16];
  unsigned char *puStack_2f0;
  unsigned char auStack_2e0 [16];
  unsigned char *apuStack_2d0 [2];
  unsigned int uStack_2c8;
  unsigned char auStack_290 [16];
  unsigned char *puStack_280;
  unsigned int uStack_278;
  unsigned char auStack_240 [16];
  unsigned char *puStack_230;
  unsigned int uStack_228;
  unsigned char auStack_1f0 [16];
  unsigned char *puStack_1e0;
  unsigned int uStack_1d8;
  unsigned char auStack_1a0 [16];
  unsigned char auStack_190 [400];
  
  iVar13 = *param_2;
  uStack_3b0 = (**(int (***)())(*param_1 + 0xc))();
  iVar18 = 0;
  if (uStack_3b0 == 0) {
    uVar8 = 0;
LAB_830856e4:
    uVar15 = 0x80000000;
  }
  else {
    iVar11 = fn_82CE5410();
    uVar8 = (**(int (***)())(**(int **)(iVar11 + 0x10) + 0xc))
                      (*(int **)(iVar11 + 0x10),&uStack_3b0,0x10);
    uVar15 = uStack_3b0;
    if (uStack_3b0 == 0) goto LAB_830856e4;
  }
  auStack_3ac[0] = (**(int (***)())(*param_1 + 0xc))(param_1);
  if (auStack_3ac[0] == 0) {
    uVar9 = 0;
  }
  else {
    iVar11 = fn_82CE5410();
    uVar9 = (**(int (***)())(**(int **)(iVar11 + 0x10) + 0xc))
                      (*(int **)(iVar11 + 0x10),auStack_3ac,0x10);
    uVar16 = auStack_3ac[0];
    if (auStack_3ac[0] != 0) goto LAB_83085740;
  }
  uVar16 = 0x80000000;
LAB_83085740:
  stack_pair_3a0.first = (unsigned int)uVar8;
  stack_pair_3a0.second = (unsigned int)uVar9;
  uVar10 = (**(int (***)())(*param_1 + 0xc))(param_1);
  fn_830855B0(param_1,0,uVar10,uVar8);
  uStack_38c = 0;
  uStack_38e = 0;
  uStack_390 = 0;
  uStack_384 = 0xffff;
  uStack_386 = 0xffff;
  uStack_388 = 0xffff;
  iVar12 = (**(int (***)())(*param_1 + 0xc))(param_1);
  uVar7 = uRam8323b31c;
  uVar6 = uRam8323b318;
  uVar5 = uRam8323b314;
  uVar4 = lbl_8323B310;
  iVar11 = param_2[1];
  if (iVar12 < 8) {
    iVar13 = param_2[6];
    iVar18 = param_2[7];
    iVar12 = *param_2;
    uVar10 = (**(int (***)())(*param_1 + 0xc))(param_1);
    fn_83085320(&stack_pair_3a0.first,iVar12,iVar18,iVar11,uVar10,iVar13,param_2 + 3);
  }
  else {
    pcVar1 = *(int (***)())(*param_1 + 0xc);
    uStack_2c8 = 0xffffffff;
    iVar12 = (int)in_r0;
    puVar2 = (unsigned int *)((unsigned int)(auStack_290 + iVar12) & 0xfffffff0);
    *puVar2 = lbl_8323B310;
    puVar2[1] = uVar5;
    puVar2[2] = uVar6;
    puVar2[3] = uVar7;
    uStack_278 = 0xffffffff;
    puVar2 = (unsigned int *)((unsigned int)(auStack_240 + iVar12) & 0xfffffff0);
    *puVar2 = uVar4;
    puVar2[1] = uVar5;
    puVar2[2] = uVar6;
    puVar2[3] = uVar7;
    uStack_228 = 0xffffffff;
    apuStack_2d0[0] = auStack_340;
    puVar2 = (unsigned int *)((unsigned int)(auStack_1f0 + iVar12) & 0xfffffff0);
    *puVar2 = uVar4;
    puVar2[1] = uVar5;
    puVar2[2] = uVar6;
    puVar2[3] = uVar7;
    puStack_280 = auStack_338;
    puStack_230 = auStack_330;
    uStack_1d8 = 0xffffffff;
    puStack_1e0 = auStack_328;
    puVar2 = (unsigned int *)((unsigned int)(auStack_1a0 + iVar12) & 0xfffffff0);
    *puVar2 = uVar4;
    puVar2[1] = uVar5;
    puVar2[2] = uVar6;
    puVar2[3] = uVar7;
    uVar10 = (*pcVar1)(param_1);
    fn_83086D50(&stack_pair_3a0.first,iVar13,iVar11,uVar10,apuStack_2d0,aiStack_360,&uStack_390);
    auStack_370[3] = param_2[6];
    iVar11 = 8;
    ppuVar17 = apuStack_2d0;
    auStack_370[0] =
         ((int)auStack_370[3] >> 2) + (unsigned int)((int)auStack_370[3] < 0 && (auStack_370[3] & 3) != 0);
    auStack_370[3] = auStack_370[3] + auStack_370[0] * -3;
    auStack_370[1] = auStack_370[0];
    auStack_370[2] = auStack_370[0];
    do {
      uVar7 = uRam8323b31c;
      uVar6 = uRam8323b318;
      uVar5 = uRam8323b314;
      uVar4 = lbl_8323B310;
      puStack_31c = ppuVar17[1];
      puStack_314 = ppuVar17[3];
      puStack_310 = ppuVar17[4];
      puVar19 = ppuVar17[9];
      puVar20 = ppuVar17[10];
      puVar21 = ppuVar17[0xb];
      iStack_318 = param_2[1];
      puStack_320 = &uStack_380;
      uStack_380 = *(unsigned int *)*ppuVar17;
      uStack_37c = *(unsigned int *)((int)*ppuVar17 + 4);
      piVar3 = (int *)((unsigned int)(auStack_300 + (int)in_r0) & 0xfffffff0);
      *piVar3 = (int)ppuVar17[8];
      piVar3[1] = (int)puVar19;
      piVar3[2] = (int)puVar20;
      piVar3[3] = (int)puVar21;
      puVar2 = (unsigned int *)((unsigned int)(auStack_2e0 + (int)in_r0) & 0xfffffff0);
      *puVar2 = uVar4;
      puVar2[1] = uVar5;
      puVar2[2] = uVar6;
      puVar2[3] = uVar7;
      fn_83085A80(auStack_190);
      auStack_3ac[1] = 1;
      iVar12 = param_2[7];
      puStack_2f0 = auStack_190;
      auStack_3ac[2] = iVar11 * 8 + iVar13;
      iVar14 = (*(unsigned int *)((int)auStack_370 + iVar18) & 1) + *(int *)((int)aiStack_360 + iVar18) +
               *(unsigned int *)((int)auStack_370 + iVar18);
      *(int *)((int)aiStack_360 + iVar18) = iVar14;
      iVar11 = iVar14 + iVar11;
      iVar12 = fn_83086A30(&puStack_320,auStack_3ac + 2,iVar12,auStack_3ac + 1);
      *(int *)((int)aiStack_350 + iVar18) = iVar12 + 2;
      fn_83085AB0(auStack_190);
      iVar18 = iVar18 + 4;
      ppuVar17 = ppuVar17 + 0x14;
    } while (iVar18 < 0x10);
    uVar10 = (**(int (***)())(*param_1 + 0xc))(param_1);
    fn_830853E8(param_2,uVar10,aiStack_350,aiStack_360);
  }
  iVar13 = fn_82CE5410();
  if ((uVar16 & 0x80000000) == 0) {
    (**(int (***)())(**(int **)(iVar13 + 0x10) + 0x10))
              (*(int **)(iVar13 + 0x10),uVar9,uVar16 & 0x3fffffff,0x10);
  }
  iVar13 = fn_82CE5410();
  if ((uVar15 & 0x80000000) == 0) {
    (**(int (***)())(**(int **)(iVar13 + 0x10) + 0x10))
              (*(int **)(iVar13 + 0x10),uVar8,uVar15 & 0x3fffffff,0x10);
  }
  return;
}

