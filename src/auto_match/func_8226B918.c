extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_e0;
extern int fn_8265CA60();
extern int fn_8280ACD8();
extern int fn_8280CED8();
extern int fn_8280D140();
extern int fn_8280D160();
extern int fn_8280D180();
extern int fn_8280DD50();
extern int fn_8280DF98();
extern int sprintf();
extern int fn_82F691F0();
extern unsigned int lbl_821954C8;
extern unsigned int lbl_82195648;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


void fn_8226B918(int param_1,int param_2)

{
  int *piVar1;
  int (**pcVar2)();
  unsigned int *puVar3;
  unsigned __int64 in_r0;
  unsigned __int64 uVar4;
  __int64 lVar5;
  unsigned __int64 uVar6;
  int iVar7;
  unsigned int uVar8;
  int iVar9;
  int iVar10;
  __int64 lVar11;
  int iVar12;
  double dVar13;
  double dVar14;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  unsigned char auStack_e0 [16];
  unsigned char auStack_d0 [16];
  unsigned char auStack_c0 [16];
  unsigned char auStack_b0 [32];
  unsigned char auStack_90 [144];
  
  uVar4 = (**(int (***)())**(unsigned int **)(param_2 + 0x1b4))();
  *(int *)(param_1 + 0x50) = (int)uVar4;
  lVar5 = (uVar4 & 0x3fffffff) << 2;
  if (0x3fffffff < (uVar4 & 0xffffffff)) {
    lVar5 = -1;
  }
  uVar6 = fn_8265CA60(lVar5);
  *(int *)(param_1 + 0x58) = (int)uVar6;
  fn_82F691F0(uVar6,0xffffffffffffffff,*(int *)(param_1 + 0x50) << 2);
  lVar5 = 0;
  *(unsigned int *)(param_1 + 0x48) = 0xffffffff;
  *(unsigned int *)(param_1 + 0x4c) = 0xffffffff;
  do {
    lVar11 = 0;
    do {
      sprintf(auStack_b0,0xffffffff821a7e88,lVar11,lVar5);
      piVar1 = *(int **)(*(int *)(param_1 + 4) + 0x1b4);
      iVar7 = (**(int (***)())(*piVar1 + 0x10))(piVar1,auStack_b0);
      if (-1 < iVar7) {
        if (*(int *)(param_1 + 0x4c) < (int)lVar5) {
          *(int *)(param_1 + 0x4c) = (int)lVar5;
        }
        if (*(int *)(param_1 + 0x48) < (int)lVar11) {
          *(int *)(param_1 + 0x48) = (int)lVar11;
        }
      }
      lVar11 = lVar11 + 1;
    } while ((int)lVar11 < 0x4b);
    lVar5 = lVar5 + 1;
  } while ((int)lVar5 < 0x4b);
  iVar9 = *(int *)(param_1 + 0x4c) + 1;
  iVar7 = *(int *)(param_1 + 0x48) + 1;
  *(int *)(param_1 + 0x4c) = iVar9;
  lVar5 = (__int64)iVar7 * (__int64)iVar9;
  *(int *)(param_1 + 0x48) = iVar7;
  *(int *)(param_1 + 0x44) = (int)lVar5;
  if (lVar5 == 0) {
    *(unsigned int *)(param_1 + 0x44) = 1;
  }
  lVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 0x44) * 0xf0;
  if (0x1111111 < (unsigned __int64)*(unsigned int *)(param_1 + 0x44)) {
    lVar5 = -1;
  }
  uVar8 = fn_8265CA60(lVar5);
  iVar7 = 0;
  *(unsigned int *)(param_1 + 0x40) = uVar8;
  dVar14 = (double)ltcg_pool_0_0f;
  if (0 < *(int *)(param_1 + 0x44)) {
    iVar9 = 0;
    dVar13 = (double)lbl_821CA460;
    do {
      iVar10 = *(int *)(param_1 + 0x40) + iVar9;
      *(float *)(iVar10 + 0x84) = (float)dVar14;
      *(float *)(iVar10 + 0x80) = (float)dVar14;
      puVar3 = (unsigned int *)((int)in_r0 + *(int *)(param_1 + 0x40) + iVar9 + 0x90 & 0xfffffff0);
      *puVar3 = in_register_000104d0;
      puVar3[1] = in_register_000104d4;
      puVar3[2] = in_register_000104d8;
      puVar3[3] = in_vr77;
      puVar3 = (unsigned int *)((int)in_r0 + *(int *)(param_1 + 0x40) + iVar9 + 0xa0 & 0xfffffff0);
      *puVar3 = in_register_000104d0;
      puVar3[1] = in_register_000104d4;
      puVar3[2] = in_register_000104d8;
      puVar3[3] = in_vr77;
      fn_8280DD50(*(int *)(param_1 + 0x40) + iVar9 + 0xb0);
      iVar7 = iVar7 + 1;
      *(float *)(*(int *)(param_1 + 0x40) + iVar9 + 0xc0) = (float)dVar14;
      puVar3 = (unsigned int *)((int)in_r0 + *(int *)(param_1 + 0x40) + iVar9 + 0xd0 & 0xfffffff0);
      *puVar3 = in_register_000104d0;
      puVar3[1] = in_register_000104d4;
      puVar3[2] = in_register_000104d8;
      puVar3[3] = in_vr77;
      *(float *)(*(int *)(param_1 + 0x40) + iVar9 + 0xd4) = (float)dVar13;
      *(unsigned int *)(*(int *)(param_1 + 0x40) + iVar9 + 0xe4) = 0x80000000;
      *(unsigned char *)(*(int *)(param_1 + 0x40) + iVar9 + 0xe0) = 0;
      *(float *)(*(int *)(param_1 + 0x40) + iVar9 + 0xc4) = (float)dVar14;
      *(float *)(*(int *)(param_1 + 0x40) + iVar9 + 200) = (float)dVar13;
      *(float *)(*(int *)(param_1 + 0x40) + iVar9 + 0xe8) = (float)dVar14;
      iVar9 = iVar9 + 0xf0;
    } while (iVar7 < *(int *)(param_1 + 0x44));
  }
  lVar5 = 0;
  if (0 < *(int *)(param_1 + 0x4c)) {
    do {
      iVar7 = 0;
      if (0 < *(int *)(param_1 + 0x48)) {
        do {
          iVar9 = (int)lVar5 * *(int *)(param_1 + 0x48) + iVar7;
          sprintf(auStack_90,0xffffffff821a7e88,iVar7,lVar5);
          uVar4 = (**(int (***)())(**(int **)(param_2 + 0x1b4) + 0x10))
                            (*(int **)(param_2 + 0x1b4),auStack_90);
          if ((-1 < (__int64)uVar4) && ((int)uVar4 < *(int *)(param_1 + 0x50))) {
            *(int *)((int)((uVar4 & 0xffffffff) << 2) + *(int *)(param_1 + 0x58)) = iVar9;
          }
          if ((-1 < iVar9) && (iVar9 < *(int *)(param_1 + 0x44))) {
            iVar12 = iVar9 * 0xf0 + *(int *)(param_1 + 0x40);
            iVar9 = **(int **)(param_2 + 0x1b4);
            *(float *)(iVar12 + 0x84) = (float)(__int64)(int)lVar5;
            pcVar2 = *(int (***)())(iVar9 + 0xc);
            *(float *)(iVar12 + 0x80) = (float)(__int64)iVar7;
            iVar9 = (*pcVar2)();
            iVar10 = iVar9 + 0x18;
            fn_8280DF98(iVar10,0xffffffff831d76f0,auStack_d0);
            fn_8280DF98(iVar10,0xffffffff831d76fc,auStack_c0);
            fn_8280DF98(iVar10,0xffffffff831d7708,auStack_e0);
            fn_8280ACD8(iVar12);
            fn_8280D140(iVar12,auStack_e0);
            fn_8280D160(iVar12,auStack_d0);
            fn_8280D180(iVar12,auStack_c0);
            *(unsigned int *)(iVar12 + 0x30) = *(unsigned int *)(iVar9 + 0xc);
            *(unsigned int *)(iVar12 + 0x34) = *(unsigned int *)(iVar9 + 0x10);
            *(unsigned int *)(iVar12 + 0x38) = *(unsigned int *)(iVar9 + 0x14);
            fn_8280CED8(iVar12,iVar12 + 0x40);
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(param_1 + 0x48));
      }
      lVar5 = lVar5 + 1;
    } while ((int)lVar5 < *(int *)(param_1 + 0x4c));
  }
  *(float *)(param_1 + 0x20) = (float)dVar14;
  *(float *)(param_1 + 0x24) = (float)dVar14;
  *(unsigned int *)(param_1 + 0x38) = lbl_821954C8;
  *(unsigned int *)(param_1 + 0x28) = lbl_82195648;
  *(float *)(param_1 + 0x34) = (float)(__int64)*(int *)(param_1 + 0x4c);
  *(float *)(param_1 + 0x30) = (float)(__int64)*(int *)(param_1 + 0x48);
  return;
}

