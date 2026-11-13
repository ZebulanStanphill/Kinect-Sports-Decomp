typedef struct { unsigned __int64 lo, hi; } V16;
extern int fn_8242F4F8();
extern int fn_82432270();
extern int fn_82539560();
extern int fn_82570840();
extern int fn_825709D8();
extern unsigned int lbl_821917A8;
extern unsigned int lbl_82191F78;
extern unsigned int lbl_821962C0;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831E4D40;
extern unsigned int lbl_831E4D44;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern V16 loadVectorLeftIndexed128();


void fn_824300F0(unsigned __int64 param_1,int param_2)

{
  float fVar1;
  float fVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  int in_r0;
  int iVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int *puVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  
  iVar5 = *(int *)(*(int *)(param_2 + 0x240) + 0x174);
  if ((((*(int *)(*(int *)(iVar5 + 0x5c) + 0x1d4) == -1) ||
       (iVar5 = *(int *)(iVar5 + 0x5c),
       iVar5 = *(int *)(*(int *)(iVar5 + 0x1d4) * 4 + *(int *)(iVar5 + 0x1c4)), iVar5 == 0)) ||
      (*(char *)(*(int *)(iVar5 + 0x40) + 8) != '\0')) ||
     (*(int *)(*(int *)(param_2 + 0x244) + 0x68) == 0xd)) {
    fn_82432270(param_1,param_2);
    if (*(int *)(*(int *)(param_2 + 0x244) + 0x38) == 0) {
      puVar8 = (unsigned int *)((unsigned int)(&lbl_821962C0 + in_r0) & 0xfffffff0);
      uVar7 = puVar8[1];
      uVar13 = puVar8[2];
      uVar14 = puVar8[3];
      puVar4 = (unsigned int *)(*(int *)(param_2 + 0x244) + 0xf0U & 0xfffffff0);
      *puVar4 = *puVar8;
      puVar4[1] = uVar7;
      puVar4[2] = uVar13;
      puVar4[3] = uVar14;
      puVar8 = (unsigned int *)((unsigned int)(&lbl_821962C0 + in_r0) & 0xfffffff0);
      uVar7 = puVar8[1];
      uVar13 = puVar8[2];
      uVar14 = puVar8[3];
      puVar4 = (unsigned int *)(*(int *)(param_2 + 0x244) + 0x100U & 0xfffffff0);
      *puVar4 = *puVar8;
      puVar4[1] = uVar7;
      puVar4[2] = uVar13;
      puVar4[3] = uVar14;
      puVar8 = (unsigned int *)((unsigned int)(&lbl_821962C0 + in_r0) & 0xfffffff0);
      uVar7 = puVar8[1];
      uVar13 = puVar8[2];
      uVar14 = puVar8[3];
      puVar4 = (unsigned int *)(*(int *)(param_2 + 0x244) + 0x110U & 0xfffffff0);
      *puVar4 = *puVar8;
      puVar4[1] = uVar7;
      puVar4[2] = uVar13;
      puVar4[3] = uVar14;
      puVar8 = (unsigned int *)((unsigned int)(&lbl_821962C0 + in_r0) & 0xfffffff0);
      uVar7 = *puVar8;
      uVar13 = puVar8[1];
      uVar14 = puVar8[2];
      uVar12 = puVar8[3];
      puVar8 = (unsigned int *)(*(int *)(param_2 + 0x244) + 0x120U & 0xfffffff0);
      *puVar8 = uVar7;
      puVar8[1] = uVar13;
      puVar8[2] = uVar14;
      puVar8[3] = uVar12;
      *(unsigned int *)(*(int *)(param_2 + 0x244) + 0xe0) = 0;
    }
    else {
      puVar8 = (unsigned int *)(*(int *)(param_2 + 0x244) + 0xf0U & 0xfffffff0);
      uVar7 = puVar8[1];
      uVar13 = puVar8[2];
      uVar14 = puVar8[3];
      puVar4 = (unsigned int *)(*(int *)(param_2 + 0x244) + 0x100U & 0xfffffff0);
      *puVar4 = *puVar8;
      puVar4[1] = uVar7;
      puVar4[2] = uVar13;
      puVar4[3] = uVar14;
      puVar8 = (unsigned int *)(*(int *)(param_2 + 0x244) + 0x110U & 0xfffffff0);
      uVar7 = puVar8[1];
      uVar13 = puVar8[2];
      uVar14 = puVar8[3];
      puVar4 = (unsigned int *)(*(int *)(param_2 + 0x244) + 0x120U & 0xfffffff0);
      *puVar4 = *puVar8;
      puVar4[1] = uVar7;
      puVar4[2] = uVar13;
      puVar4[3] = uVar14;
      iVar5 = **(int **)(*(int *)(*(int *)(param_2 + 0x244) + 0x38) + 4);
      uVar7 = in_vr77;
      uVar13 = in_register_000104d8;
      uVar14 = in_register_000104d4;
      uVar12 = in_register_000104d0;
      if (iVar5 != 0) {
        puVar8 = (unsigned int *)(iVar5 + 0x50U & 0xfffffff0);
        uVar7 = puVar8[3];
        uVar13 = puVar8[2];
        uVar14 = puVar8[1];
        uVar12 = *puVar8;
      }
      puVar8 = (unsigned int *)(*(int *)(param_2 + 0x244) + 0xf0U & 0xfffffff0);
      *puVar8 = uVar12;
      puVar8[1] = uVar14;
      puVar8[2] = uVar13;
      puVar8[3] = uVar7;
      iVar5 = (**(int (***)())(**(int **)(*(int *)(param_2 + 0x244) + 0x38) + 0xc))(&uStack_30);
      puVar8 = (unsigned int *)(in_r0 + iVar5 & 0xfffffff0);
      uVar7 = *puVar8;
      uVar13 = puVar8[1];
      uVar14 = puVar8[2];
      uVar12 = puVar8[3];
      puVar8 = (unsigned int *)(*(int *)(param_2 + 0x244) + 0x110U & 0xfffffff0);
      *puVar8 = uVar7;
      puVar8[1] = uVar13;
      puVar8[2] = uVar14;
      puVar8[3] = uVar12;
      if (*(int *)(*(int *)(param_2 + 0x244) + 0xe0) == 0) {
        *(unsigned int *)(*(int *)(param_2 + 0x244) + 0xe0) = 1;
      }
    }
    fn_8242F4F8(param_1,param_2);
    iVar5 = *(int *)(param_2 + 0x244);
    puVar8 = &lbl_821917A8;
    dVar10 = (double)*(float *)(iVar5 + 0x90);
    dVar9 = (double)fn_82539560((double)*(float *)(param_2 + 0x220),(double)lbl_831E4D40,
                                 (double)lbl_831E4D44,(double)ltcg_pool_0_0f,(double)lbl_82191F78);
    dVar11 = (double)lbl_821CA460;
    *(float *)(iVar5 + 0x90) =
         (float)((double)(float)((double)(float)(dVar11 - dVar9) - dVar10) *
                 (double)(float)puVar8[0xb] + dVar10);
    iVar5 = *(int *)(param_2 + 0x244);
    if (*(int *)(*(int *)(param_2 + 0x244) + 0x78) == -1) {
      if (*(int *)(iVar5 + 0x80) != 0) {
        uVar6 = fn_82570840(*(unsigned int *)(*(int *)(param_2 + 0x244) + 0x140),
                                  *(int *)(param_2 + 0x244) + 0x80,1,param_2 + 0x20);
        *(unsigned int *)(*(int *)(param_2 + 0x244) + 0x78) = uVar6;
      }
    }
    else {
      uStack_30 = *(unsigned int *)(iVar5 + 0x84);
      uVar6 = *(unsigned int *)(iVar5 + 0x78);
      uVar3 = *(unsigned int *)(iVar5 + 0x140);
      fVar2 = *(float *)(iVar5 + 0x8c);
      fVar1 = *(float *)(iVar5 + 0x88);
      puVar8 = (unsigned int *)((int)&uStack_30 + in_r0 & 0xfffffff0);
      *puVar8 = in_register_000104d0;
      puVar8[1] = in_register_000104d4;
      puVar8[2] = in_register_000104d8;
      puVar8[3] = in_vr77;
      uStack_2c = uStack_30;
      uStack_28 = uStack_30;
      fn_825709D8((double)fVar1,(double)fVar2,uVar3,uVar6,&uStack_30);
    }
    if (*(int *)(*(int *)(param_2 + 0x244) + 0x74) == -1) {
      if (*(int *)(*(int *)(param_2 + 0x244) + 0x7c) != 0) {
        uVar7 = fn_82570840(*(unsigned int *)(*(int *)(param_2 + 0x244) + 0x140),
                                  *(int *)(param_2 + 0x244) + 0x7c,1,param_2 + 0x20);
        *(unsigned int *)(*(int *)(param_2 + 0x244) + 0x74) = uVar7;
      }
    }
    else {
      iVar5 = *(int *)(param_2 + 0x244);
      loadVectorLeftIndexed128(0xffffffff821ca45c,4);
      uVar6 = *(unsigned int *)(iVar5 + 0x74);
      fVar2 = *(float *)(iVar5 + 0x90);
      uVar3 = *(unsigned int *)(iVar5 + 0x140);
      puVar8 = (unsigned int *)((int)&uStack_30 + in_r0 & 0xfffffff0);
      *puVar8 = uVar7;
      puVar8[1] = uVar13;
      puVar8[2] = uVar14;
      puVar8[3] = uVar12;
      fn_825709D8((double)fVar2,dVar11,uVar3,uVar6,&uStack_30);
    }
  }
  return;
}

