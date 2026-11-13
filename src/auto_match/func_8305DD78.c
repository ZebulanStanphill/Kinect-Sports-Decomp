extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern int fn_82810240();
extern int fn_82810280();
extern int fn_82810328();
extern int fn_82810558();
extern int fn_82810B78();
extern int fn_82F6A544();
extern int fn_82F6A590();
extern int fn_8305F7A0();
extern int fn_83060570();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8201DCB8;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;
extern unsigned int uStack_c8;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;
extern unsigned int uStack_d8;
extern unsigned int uStack_dc;
extern unsigned int uStack_e0;


void fn_8305DD78(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned int *puVar5;
  unsigned char *puVar6;
  unsigned int uVar7;
  int iVar8;
  double extraout_f1;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  struct { unsigned int first; unsigned int second; } stack_pair_e0;

  unsigned int uStack_d8;
  struct { unsigned int first; unsigned int second; } stack_pair_d0;

  unsigned int uStack_c8;
  unsigned int uStack_c0;
  unsigned int uStack_bc;
  unsigned int uStack_b8;
  unsigned char auStack_b0 [16];
  unsigned int auStack_a0 [1];
  unsigned char auStack_90 [16];
  unsigned char auStack_80 [16];
  unsigned char auStack_70 [32];

  uVar4 = fn_82F6A544();
  if ((param_3 & 0xffffffff) == 0) {
    param_3 = uVar4;
  }
  iVar1 = (int)uVar4;
  iVar2 = (int)param_3;
  dVar11 = extraout_f1;
  puVar5 = (unsigned int *)
           fn_8305F7A0(*(unsigned int *)(iVar2 + 0x28),
                        *(unsigned int *)((*(int *)(iVar1 + 0x30) + -2) * 4 + *(int *)(iVar2 + 0x2c)))
  ;
  uStack_c0 = *puVar5;
  uStack_bc = puVar5[1];
  uStack_b8 = puVar5[2];
  puVar5 = (unsigned int *)
           fn_8305F7A0(*(unsigned int *)(iVar2 + 0x28),
                        *(unsigned int *)((*(int *)(iVar1 + 0x30) + -1) * 4 + *(int *)(iVar2 + 0x2c)))
  ;
  stack_pair_e0.first = *puVar5;
  stack_pair_e0.second = puVar5[1];
  iVar8 = 0;
  uStack_d8 = puVar5[2];
  if (0 < *(int *)(iVar1 + 0x30)) {
    dVar12 = (double)lbl_8201DCB8;
    dVar13 = (double)lbl_82002AE0;
    do {
      puVar5 = (unsigned int *)
               fn_8305F7A0(*(unsigned int *)(iVar2 + 0x28),
                            *(unsigned int *)(iVar8 * 4 + *(int *)(iVar2 + 0x2c)));
      stack_pair_d0.first = *puVar5;
      stack_pair_d0.second = puVar5[1];
      uStack_c8 = puVar5[2];
      fn_82810328(&stack_pair_e0.first,&uStack_c0,auStack_b0);
      fn_82810328(&stack_pair_d0.first,&stack_pair_e0.first,auStack_90);
      fn_82810B78(auStack_b0,auStack_b0);
      fn_82810B78(auStack_90,auStack_90);
      fn_82810240(auStack_b0,uVar4 + 0x34,auStack_80);
      fn_82810240(auStack_90,uVar4 + 0x34,auStack_70);
      dVar9 = (double)fn_82810280(auStack_80,auStack_70);
      dVar14 = (double)(float)(dVar13 - dVar9);
      dVar10 = (double)fn_82810280(auStack_b0,auStack_70);
      puVar5 = &stack_pair_e0.first;
      puVar6 = auStack_80;
      dVar9 = dVar11;
      if (dVar12 <= dVar10) {
        fn_82810558(dVar11,puVar6,puVar5);
        puVar5 = auStack_a0;
        puVar6 = auStack_b0;
        dVar11 = (double)(float)((double)(float)(dVar14 / dVar10) * dVar9);
      }
      fn_82810558(dVar11,puVar6,puVar5);
      iVar3 = iVar8;
      if (iVar8 == 0) {
        iVar3 = *(int *)(iVar1 + 0x30);
      }
      uVar7 = fn_83060570(*(unsigned int *)(iVar1 + 0x28),auStack_a0);
      iVar8 = iVar8 + 1;
      *(unsigned int *)((iVar3 + -1) * 4 + *(int *)(iVar1 + 0x2c)) = uVar7;
      uStack_b8 = uStack_d8;
      uStack_c0 = stack_pair_e0.first;
      uStack_bc = stack_pair_e0.second;
      stack_pair_e0.first = stack_pair_d0.first;
      stack_pair_e0.second = stack_pair_d0.second;
      uStack_d8 = uStack_c8;
      dVar11 = dVar9;
    } while (iVar8 < *(int *)(iVar1 + 0x30));
  }
  fn_82F6A590();
  return;
}
