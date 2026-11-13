typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_a4;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_e0;
extern unsigned int *auStack_f0;
extern int fn_82560100();
extern int fn_82560100();
extern int fn_822C1730();
extern int fn_82381BC0();
extern int fn_82381BC0();
extern int fn_8243DAE0();
extern int fn_82536288();
extern int fn_82536070();
extern int fn_82381BC0();
extern int fn_82552720();
extern int fn_82536288();
extern int fn_82535298();
extern int fn_822C18B8();
extern unsigned int iStack_100;
extern unsigned int iStack_120;
extern unsigned int iStack_fc;
extern unsigned int lbl_82196320;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int stack0x0000001c;
extern unsigned int uStack0000001c;
extern unsigned int uStack_108;
extern unsigned int uStack_10c;
extern unsigned int uStack_110;


void fn_8243D2D8(int param_1,unsigned int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int *puVar4;
  bool bVar5;
  int iVar6;
  unsigned __int64 in_r0;
  unsigned char *puVar7;
  unsigned int *puVar8;
  int *piVar9;
  unsigned int uVar10;
  __int64 lVar11;
  bool bVar12;
  double dVar13;
  unsigned int uVar14;
  unsigned int uVar15;
  unsigned int uVar16;
  unsigned int uVar17;
  unsigned int in_register_00010440;
  unsigned int in_register_00010444;
  unsigned int in_register_00010448;
  unsigned int in_vr68;
  unsigned int uStack0000001c;
  int iStack_120;
  int aiStack_11c [3];
  struct { unsigned int first; unsigned int second; } stack_pair_110;

  unsigned int uStack_108;
  int iStack_100;
  int iStack_fc;
  unsigned char auStack_f0 [16];
  unsigned char auStack_e0 [16];
  unsigned char auStack_d0 [16];
  unsigned char auStack_c0 [28];
  unsigned char auStack_a4 [4];

  puVar8 = *(unsigned int **)(param_1 + 4);
  uVar10 = 0;
  if ((int)(puVar8[1] - *puVar8) / 0x30 != 0) {
    lVar11 = 0;
    dVar13 = (double)ltcg_pool_0_0f;
    uStack0000001c = param_2;
    do {
      fn_8243DAE0(&iStack_100,lVar11 + (unsigned __int64)*puVar8 + 0x1c,&stack0x0000001c);
      iVar6 = iStack_fc;
      if (((param_3 & 0xffffffff) == 0) || (bVar5 = true, (param_4 & 0xffffffff) == 0)) {
        bVar5 = false;
      }
      aiStack_11c[0] = iStack_100;
      while (aiStack_11c[0] != iVar6) {
        iVar1 = *(int *)(aiStack_11c[0] + 0x10);
        uVar2 = *(unsigned int *)(iVar1 + 0x30);
        if (uVar2 == 0) {
          piVar9 = (int *)(iVar1 + 0x38);
          if (piVar9 == (int *)0x0) {
            bVar12 = false;
          }
          else {
            bVar12 = *piVar9 != 0;
          }
          if (bVar12) {
            iStack_120 = *piVar9;
LAB_8243d574:
            iStack_120 = fn_82536288(&iStack_120,
                                           *(unsigned int *)
                                            (*(int *)(*(int *)(param_1 + 4) + 0x10) + 0x84c),
                                           0xffffffff83296bc0,0xffffffff83296bd0);
            fn_82381BC0(&iStack_120);
          }
        }
        else if (uVar2 == 1) {
          if (bVar5) {
            uVar14 = in_vr68;
            uVar15 = in_register_00010448;
            uVar16 = in_register_00010444;
            uVar17 = in_register_00010440;
            fn_82535298(param_4);
            iVar3 = *(int *)(iVar1 + 0x38);
            puVar4 = (unsigned int *)((unsigned int)(auStack_e0 + (int)in_r0) & 0xfffffff0);
            *puVar4 = in_register_00010440;
            puVar4[1] = in_register_00010444;
            puVar4[2] = in_register_00010448;
            puVar4[3] = in_vr68;
            in_vr68 = uVar14;
            in_register_00010448 = uVar15;
            in_register_00010444 = uVar16;
            in_register_00010440 = uVar17;
            if (iVar3 != 0) {
              fn_822C18B8(dVar13,*(unsigned int *)(*(int *)(param_1 + 4) + 0x10),iVar1 + 0x38,
                                param_3);
              in_vr68 = uVar14;
              in_register_00010448 = uVar15;
              in_register_00010444 = uVar16;
              in_register_00010440 = uVar17;
            }
          }
        }
        else if (uVar2 < 3) {
          piVar9 = (int *)(iVar1 + 0x38);
          if (piVar9 == (int *)0x0) {
            bVar12 = false;
          }
          else {
            bVar12 = *piVar9 != 0;
          }
          if (bVar12) {
            if ((param_4 & 0xffffffff) == 0) {
              puVar7 = (unsigned char *)0x0;
            }
            else {
              puVar4 = (unsigned int *)((unsigned int)(&lbl_82196320 + (int)in_r0) & 0xfffffff0);
              uVar14 = *puVar4;
              uVar15 = puVar4[1];
              uVar16 = puVar4[2];
              uVar17 = puVar4[3];
              fn_82535298(param_4);
              puVar7 = auStack_f0;
              puVar4 = (unsigned int *)((unsigned int)(auStack_f0 + (int)in_r0) & 0xfffffff0);
              *puVar4 = uVar14;
              puVar4[1] = uVar15;
              puVar4[2] = uVar16;
              puVar4[3] = uVar17;
            }
            fn_82552720((unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 4) + 0x10) + 0x84c,
                              (unsigned __int64)*(unsigned int *)(iVar1 + 0x3c) * 0xc +
                              (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 4) + 0x14),piVar9,0,0,param_3,
                              puVar7);
          }
        }
        else if (uVar2 == 3) {
          piVar9 = (int *)(iVar1 + 0x38);
          if (piVar9 == (int *)0x0) {
            bVar12 = false;
          }
          else {
            bVar12 = *piVar9 != 0;
          }
          if (bVar12) {
            if (*(int *)(iVar1 + 0x9c) != 0) {
              fn_82536070(iVar1 + 0x3c,iVar1 + 0x6c);
              iStack_120 = *piVar9;
              goto LAB_8243d574;
            }
            stack_pair_110.first = 0;
            stack_pair_110.second = 0;
            uStack_108 = 0;
            fn_82560100(auStack_c0,iVar1 + 0x3c);
            fn_82560100(auStack_a4,iVar1 + 0x6c);
            fn_822C1730(&stack_pair_110.first,auStack_c0);
            fn_82560100(auStack_a4,1,0);
            fn_82560100(auStack_c0,1,0);
            if ((param_4 & 0xffffffff) != 0) {
              puVar4 = (unsigned int *)((unsigned int)(&lbl_82196320 + (int)in_r0) & 0xfffffff0);
              uVar14 = *puVar4;
              uVar15 = puVar4[1];
              uVar16 = puVar4[2];
              uVar17 = puVar4[3];
              fn_82535298(param_4);
              puVar4 = (unsigned int *)((unsigned int)(auStack_d0 + (int)in_r0) & 0xfffffff0);
              *puVar4 = uVar14;
              puVar4[1] = uVar15;
              puVar4[2] = uVar16;
              puVar4[3] = uVar17;
            }
            fn_82536288(*(unsigned int *)(*(int *)(param_1 + 4) + 0x10),piVar9,param_3,
                              auStack_d0,&stack_pair_110.first);
            fn_82381BC0(&stack_pair_110.first);
          }
        }
        fn_82381BC0(aiStack_11c);
      }
      puVar8 = *(unsigned int **)(param_1 + 4);
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + 0x30;
    } while (uVar10 < (unsigned int)((int)(puVar8[1] - *puVar8) / 0x30));
  }
  return;
}
