#define true 1
typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int fStack_68;
extern unsigned int fStack_6c;
extern unsigned int fStack_70;
extern int fn_82291DD0();
extern int fn_822A0238();
extern int fn_8242C1B8();
extern int fn_8242C410();
extern int fn_8242DE00();
extern int fn_824329A8();
extern int fn_824334C0();
extern int fn_824504E0();
extern int fn_8249ABC0();
extern int fn_825279F8();
extern int fn_82528948();
extern int fn_8252A1B0();
extern int fn_8252D240();
extern int fn_82573530();
extern unsigned int lbl_821916F4;
extern unsigned int lbl_82192734;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_83265A28;
extern unsigned int lbl_8328D41C;
extern unsigned int lbl_8329E5E4;
extern unsigned int lbl_8329E5E8;
extern unsigned int lbl_8329E5EC;
extern unsigned int lbl_8329E5F0;
extern unsigned int lbl_8329E600;
extern unsigned int lbl_8329E604;
extern unsigned int lbl_8329E608;
extern unsigned int lbl_8329E610;
extern unsigned int lbl_8329E620;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorConditionalSelect();
extern V16 vectorMultiplyAddFloatingPoint();
extern V16 vectorRotateLeftImmediateMaskInsert128();
extern void *memcpy(void *, const void *, unsigned int);


/* WARNING: Removing unreachable block (ram,0x8244c920) */

void fn_8244C8E0(int param_1)

{
  float fVar1;
  unsigned int *puVar2;
  float fVar3;
  unsigned __int64 in_r0;
  int iVar4;
  int iVar5;
  unsigned __int64 uVar6;
  int *piVar7;
  unsigned int uVar8;
  int iVar9;
  double dVar10;
  unsigned char in_vs32 [16];
  unsigned char in_vs38 [16];
  unsigned char in_vs39 [16];
  unsigned char in_vs40 [16];
  unsigned char in_vs41 [16];
  unsigned char in_vs42 [16];
  unsigned char in_vs43 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  unsigned char in_vr0 [16];
  unsigned int uVar14;
  unsigned char in_vr13 [16];
  unsigned char auVar15 [16];
  unsigned int in_register_00010430;
  unsigned int in_register_00010434;
  unsigned int in_register_00010438;
  unsigned int in_vr67;
  unsigned char auVar16 [16];
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  unsigned int uStack_64;
  unsigned int uStack_60;
  unsigned int uStack_5c;

  iVar4 = *(int *)(param_1 + 0x44);
  iVar9 = *(int *)(iVar4 + 0xb8);
  if (iVar9 != *(int *)(iVar4 + 0xbc)) {
    for (iVar5 = iVar9; iVar5 != *(int *)(iVar4 + 0xbc); iVar5 = iVar5 + 0x18) {
    }
    *(int *)(iVar4 + 0xbc) = iVar9;
  }
  iVar9 = 0;
  iVar4 = fn_8242C410(**(unsigned int **)(param_1 + 0x40));
  if (0 < iVar4) {
    do {
      fStack_70 = 0.0;
      fStack_6c = 0.0;
      uStack_60 = 0;
      fStack_68 = 0.0;
      uStack_5c = lbl_8328D41C;
      uStack_64 = 0;
      fn_824504E0((unsigned __int64)*(unsigned int *)(param_1 + 0x44) + 0xb8,&fStack_70);
      iVar9 = iVar9 + 1;
      iVar4 = fn_8242C410(**(unsigned int **)(param_1 + 0x40));
    } while (iVar9 < iVar4);
  }
  fn_8242DE00(**(unsigned int **)(param_1 + 0x40),(*(unsigned int **)(param_1 + 0x40))[0x45]);
  fVar3 = ltcg_pool_0_0f;
  uVar11 = lbl_82192734;
  dVar10 = (double)ltcg_pool_0_0f;
  fVar1 = *(float *)(*(int *)(param_1 + 0x44) + 0xe4);
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  *(float *)(*(int *)(param_1 + 0x44) + 0xec) =
       (*(float *)(*(int *)(param_1 + 0x44) + 0xe8) - fVar1) *
       ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) + fVar1;
  *(unsigned char *)(*(int *)(param_1 + 0x44) + 0xf0) = 0;
  *(unsigned char *)(*(int *)(param_1 + 0x44) + 0xf8) = 0;
  *(unsigned char *)(*(int *)(param_1 + 0x44) + 0xfc) = 0;
  *(unsigned char *)(*(int *)(param_1 + 0x44) + 0xfc) = 0;
  *(unsigned int *)(*(int *)(param_1 + 0x44) + 0x100) = 0;
  *(unsigned int *)(*(int *)(param_1 + 0x44) + 0x10c) = 0;
  *(unsigned int *)(*(int *)(param_1 + 0x44) + 0x110) = 0;
  *(unsigned int *)(*(int *)(param_1 + 0x44) + 0x108) = uVar11;
  *(unsigned char *)(*(int *)(param_1 + 0x44) + 0x114) = 0;
  *(unsigned int *)(*(int *)(param_1 + 0x44) + 0x78) = 0;
  *(unsigned int *)(*(int *)(param_1 + 0x44) + 0x7c) = 0;
  *(unsigned int *)(*(int *)(param_1 + 0x44) + 0x80) = 0;
  *(unsigned int *)(*(int *)(param_1 + 0x44) + 0x84) = 0;
  *(unsigned int *)(*(int *)(param_1 + 0x44) + 0x88) = 0;
  *(unsigned int *)(*(int *)(param_1 + 0x44) + 0x8c) = 0;
  *(float *)(*(int *)(param_1 + 0x44) + 0xac) = fVar3;
  *(float *)(*(int *)(param_1 + 0x44) + 0xb0) = fVar3;
  (*(int (**)())**(unsigned int **)(*(int *)(param_1 + 0x44) + 0x118))(*(int *)(param_1 + 0x44) + 0x118);
  *(unsigned int *)(*(int *)(**(int **)(param_1 + 0x40) + 0x174) + 0x170) = 1;
  if (*(int *)(*(int *)(param_1 + 0x40) + 0xf8) == 0) {
    iVar4 = **(int **)(param_1 + 0x40);
    *(int *)(*(int *)(iVar4 + 0x174) + 0xc0) = (*(int **)(param_1 + 0x40))[0x53];
    *(unsigned char *)(*(int *)(iVar4 + 0x174) + 200) = 0;
  }
  else {
    iVar4 = **(int **)(param_1 + 0x40);
    *(int *)(*(int *)(iVar4 + 0x174) + 0xc0) = (*(int **)(param_1 + 0x40))[0x53];
    *(unsigned char *)(*(int *)(iVar4 + 0x174) + 200) = 1;
  }
  iVar4 = fn_8242C1B8();
  if ((iVar4 != 0) && (*(int *)(iVar4 + 0x24) != 0)) {
    uVar11 = *(unsigned int *)(*(int *)(iVar4 + 0x24) + 0x30);
    iVar4 = fn_8249ABC0();
    *(unsigned int *)(iVar4 + 0x20) = uVar11;
  }
  iVar4 = fn_8242C1B8(**(unsigned int **)(param_1 + 0x40));
  if (iVar4 != 0) {
    *(unsigned int *)(*(int *)(param_1 + 0x40) + 0xe4) =
         *(unsigned int *)
          ((*(unsigned char *)(*(int *)(iVar4 + 0x1a0) + 0x44) + 0x14) * 4 + *(int *)(param_1 + 0x44));
  }
  iVar4 = *(int *)(*(int *)(**(int **)(param_1 + 0x40) + 0x174) + 0x9c);
  for (piVar7 = *(int **)(iVar4 + 0x310); piVar7 < *(int **)(iVar4 + 0x314); piVar7 = piVar7 + 2) {
    if (piVar7[1] == 0x2c) {
      iVar4 = *piVar7;
      goto LAB_8244cbdc;
    }
  }
  iVar4 = 0;
LAB_8244cbdc:
  if (iVar4 != 0) {
    *(int *)(*(int *)(param_1 + 0x44) + 0x70) = iVar4;
  }
  iVar4 = *(int *)(*(int *)(**(int **)(param_1 + 0x40) + 0x174) + 0x9c);
  piVar7 = *(int **)(iVar4 + 0x310);
  do {
    if (*(int **)(iVar4 + 0x314) <= piVar7) {
      iVar4 = 0;
LAB_8244cc2c:
      if (iVar4 != 0) {
        iVar9 = (int)in_r0;
        if ((*(int **)(param_1 + 0x40))[0x45] == 1) {
          if ((lbl_8329E620 & 1) == 0) {
            uVar8 = lbl_8329E620 | 1;{ V16 _vt0 = loadVectorLeftIndexed128(in_r0,0xffffffff821cc160); memcpy(in_vs32, &_vt0, 16); }{ V16 _vt1 = loadVectorLeftIndexed128(0xffffffff821954b0,0x9c8); memcpy(auVar16, &_vt1, 16); }{ V16 _vt2 = loadVectorLeftIndexed128(0xffffffff821929e8,0x78); memcpy(in_vs45, &_vt2, 16); }{ V16 _vt3 = vectorRotateLeftImmediateMaskInsert128(in_vr13,in_vr0,4,3); memcpy(auVar15, &_vt3, 16); }{ V16 _vt4 = vectorRotateLeftImmediateMaskInsert128(auVar16,in_vr0,4,3); memcpy(auVar16, &_vt4, 16); }{ V16 _vt5 = vectorRotateLeftImmediateMaskInsert128(auVar16,auVar15,3,2); memcpy(auVar15, &_vt5, 16); }
            lbl_8329E620 = uVar8;
            memcpy((void *)((const void *)((unsigned int)(&lbl_8329E610 + iVar9) & 0xfffffff0)), auVar15, 16);
          }
          else {
            memcpy((void *)(auVar15), (const void *)((unsigned int)(&lbl_8329E610 + iVar9) & 0xfffffff0), 16);
            uVar8 = lbl_8329E620;
          }
          uVar6 = 0xffffffff8329e600;
          if ((uVar8 & 2) == 0) {
            lbl_8329E608 = (float)dVar10;
            lbl_8329E600 = (float)dVar10;
            lbl_8329E620 = uVar8 | 2;
            lbl_8329E604 = (float)dVar10;
            fStack_70 = lbl_8329E600;
            fStack_6c = lbl_8329E604;
            fStack_68 = lbl_8329E608;
          }
        }
        else {
          if ((lbl_8329E620 & 4) == 0) {
            uVar8 = lbl_8329E620 | 4;{ V16 _vt6 = loadVectorLeftIndexed128(0xffffffff821954b0,0x9cc); memcpy(auVar15, &_vt6, 16); }{ V16 _vt7 = loadVectorLeftIndexed128(in_r0,0xffffffff821cc160); memcpy(in_vs32, &_vt7, 16); }{ V16 _vt8 = loadVectorLeftIndexed128(0xffffffff821913c8,0x50); memcpy(in_vs45, &_vt8, 16); }{ V16 _vt9 = vectorRotateLeftImmediateMaskInsert128(auVar15,in_vr0,4,3); memcpy(auVar16, &_vt9, 16); }{ V16 _vt10 = vectorRotateLeftImmediateMaskInsert128(in_vr13,in_vr0,4,3); memcpy(auVar15, &_vt10, 16); }{ V16 _vt11 = vectorRotateLeftImmediateMaskInsert128(auVar16,auVar15,3,2); memcpy(auVar15, &_vt11, 16); }
            lbl_8329E620 = uVar8;
            memcpy((void *)((const void *)((unsigned int)(&lbl_8329E5F0 + iVar9) & 0xfffffff0)), auVar15, 16);
          }
          else {
            memcpy((void *)(auVar15), (const void *)((unsigned int)(&lbl_8329E5F0 + iVar9) & 0xfffffff0), 16);
            uVar8 = lbl_8329E620;
          }
          uVar6 = 0xffffffff8329e5e4;
          if ((uVar8 & 8) == 0) {
            lbl_8329E5E4 = (float)dVar10;
            lbl_8329E5EC = (float)dVar10;
            lbl_8329E620 = uVar8 | 8;
            fStack_6c = lbl_821916F4;
            lbl_8329E5E8 = lbl_821916F4;
            fStack_70 = lbl_8329E5E4;
            fStack_68 = lbl_8329E5EC;
          }
        }
        fn_8252A1B0(iVar4,uVar6,0);
        iVar9 = (int)in_r0;
        iVar5 = fn_825279F8(iVar4);
        if ((iVar5 == 0) || (iVar5 == 3)) {
          memcpy((void *)((const void *)(iVar9 + iVar4 + 0x70 & 0xfffffff0)), auVar15, 16);
        }
        else {{ V16 _vt12 = vectorMultiplyAddFloatingPoint(in_vs43,in_vs40,in_vs32); memcpy(auVar15, &_vt12, 16); }{ V16 _vt13 = vectorMultiplyAddFloatingPoint(in_vs39,in_vs42,auVar15); memcpy(auVar15, &_vt13, 16); }{ V16 _vt14 = vectorMultiplyAddFloatingPoint(in_vs38,in_vs41,auVar15); memcpy(auVar15, &_vt14, 16); }
          vectorConditionalSelect(auVar15,in_vs45,in_vs44);
          puVar2 = (unsigned int *)(iVar9 + iVar4 + 0x70 & 0xfffffff0);
          *puVar2 = in_register_00010430;
          puVar2[1] = in_register_00010434;
          puVar2[2] = in_register_00010438;
          puVar2[3] = in_vr67;
        }
        puVar2 = (unsigned int *)(iVar9 + iVar4 + 0x70 & 0xfffffff0);
        uVar11 = *puVar2;
        uVar12 = puVar2[1];
        uVar13 = puVar2[2];
        uVar14 = puVar2[3];
        *(unsigned int *)(iVar4 + 0x170) = 0;
        puVar2 = (unsigned int *)(iVar4 + 0x60U & 0xfffffff0);
        *puVar2 = uVar11;
        puVar2[1] = uVar12;
        puVar2[2] = uVar13;
        puVar2[3] = uVar14;
        fn_82528948(iVar4);
        *(int *)(*(int *)(param_1 + 0x44) + 0x74) = iVar4;
      }
      iVar4 = fn_82573530((unsigned __int64)
                                *(unsigned int *)(*(int *)(*(int *)(param_1 + 0x44) + 0x74) + 0x8c0) + 0x128
                                ,0xffffffff821ba148);
      if (iVar4 != 0) {
        (**(int (***)())(**(int **)(iVar4 + 0x1b0) + 8))(*(int **)(iVar4 + 0x1b0),5,0);
        *(unsigned int *)(iVar4 + 400) = 0;
      }
      iVar4 = *(int *)(*(int *)(param_1 + 0x44) + 0x74);
      fn_8252D240(iVar4,iVar4 + 0xba4,0);
      *(unsigned int *)(iVar4 + 0xba0) = 0;
      uVar11 = **(unsigned int **)(param_1 + 0x44);
      iVar4 = *(int *)(**(int **)(param_1 + 0x40) + 0x174);
      *(unsigned int *)(*(int *)(iVar4 + 0x18) + 8) = uVar11;
      *(unsigned int *)(*(int *)(iVar4 + 0x18) + 4) = uVar11;
      *(float *)(*(int *)(iVar4 + 0x18) + 0x10) = (float)dVar10;
      uVar8 = (*(int **)(param_1 + 0x40))[0x46];
      fn_82291DD0(*(unsigned int *)(**(int **)(param_1 + 0x40) + 0xd4),(int)uVar8 / 100,
                        (unsigned __int64)uVar8 + (__int64)((int)uVar8 / 100) * -100);
      fn_824329A8((unsigned __int64)*(unsigned int *)(**(int **)(param_1 + 0x40) + 0x174) + 0x60,0);
      fn_824334C0(param_1);
      fn_822A0238(*(unsigned int *)(*(int *)(**(int **)(param_1 + 0x40) + 0xd4) + 0xc),0);
      fn_822A0238(*(unsigned int *)(*(int *)(**(int **)(param_1 + 0x40) + 0xd4) + 0xc),1);
      return;
    }
    if (piVar7[1] == 0x2d) {
      iVar4 = *piVar7;
      goto LAB_8244cc2c;
    }
    piVar7 = piVar7 + 2;
  } while( true );
}
