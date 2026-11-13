extern unsigned int *auStack_98;
extern unsigned int *auStack_d0;
extern unsigned int *fStack_b0;
extern unsigned int *fStack_b4;
extern unsigned int *fStack_b8;
extern int fn_82BA02A8();
extern int fn_82BE4008();
extern int fn_82BE9200();
extern int fn_82BE92C0();
extern int fn_82BE92E0();
extern int fn_82BE9300();
extern int fn_82BE93B0();
extern int fn_82BE94F0();
extern int fn_82BE9528();
extern int fn_82BEA038();
extern int fn_82BEA200();
extern int fn_82BEA230();
extern int fn_82BEEAB0();
extern int fn_82BEEAC8();
extern int fn_82BEEB18();
extern int fn_82BEEB50();
extern int fn_82BEEB88();
extern int fn_82BEEC00();
extern unsigned int lbl_8200133C;
extern unsigned int lbl_82005344;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_a0;
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;
extern unsigned int uStack_c0;
extern unsigned int uStack_c4;
extern unsigned int uStack_c8;
extern unsigned int uStack_d8;
extern unsigned int uStack_e0;


unsigned __int64 fn_82BE4690(int param_1)

{
  float fVar1;
  unsigned int uVar2;
  int iVar7;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned int *puVar8;
  short sVar10;
  unsigned __int64 uVar5;
  unsigned int uVar9;
  unsigned __int64 uVar6;
  float *pfVar11;
  float *pfVar12;
  double dVar13;
  unsigned __int64 uStack_e0;
  unsigned int uStack_d8;
  unsigned char auStack_d0 [8];
  struct { unsigned int first; unsigned int second; } stack_pair_c8;

  unsigned int uStack_c0;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  unsigned int uStack_a8;
  unsigned int uStack_a4;
  unsigned int uStack_a0;
  unsigned char auStack_98 [24];
  struct { unsigned int first; unsigned int second; } stack_pair_80;

  unsigned int uStack_78;
  struct { unsigned int first; unsigned int second; } stack_pair_74;

  unsigned int uStack_6c;
  unsigned int uStack_68;
  unsigned int uStack_64;
  unsigned int uStack_60;
  unsigned int uStack_5c;

  *(unsigned int *)(param_1 + 0xd0) = 0;
  pfVar12 = (float *)(param_1 + 0xe0);
  *(unsigned int *)(param_1 + 0xd4) = 0;
  uVar2 = lbl_8200133C;
  pfVar11 = (float *)(param_1 + 0xe8);
  *(unsigned int *)(param_1 + 0xe0) = lbl_8200133C;
  *(unsigned int *)(param_1 + 0xe4) = uVar2;
  *(unsigned int *)(param_1 + 0xe8) = uVar2;
  *(unsigned int *)(param_1 + 0xec) = uVar2;
  iVar7 = fn_82BE94F0();
  if ((iVar7 != 0) && (iVar7 = fn_82BE9528(), iVar7 != 0)) {
    uVar3 = fn_82BE92C0();
    uVar4 = fn_82BE92E0();
    puVar8 = (unsigned int *)fn_82BE9200();
    if (((uVar3 & 0xffffffff) != 0) && (((uVar4 & 0xffffffff) != 0 && (puVar8 != (unsigned int *)0x0)))) {
      if ((*(int *)(param_1 + 0x6c) == 0) ||
         (iVar7 = fn_82BEA200(*(int *)(param_1 + 0x6c),0xffffffff820e9060), iVar7 == 0)) {
        *(unsigned int *)(param_1 + 0xc) = 0x69;
      }
      else {
        fn_82BEA230(*(unsigned int *)(param_1 + 0x6c),0xffffffff820e9060);
        sVar10 = fn_82BEA038(param_1 + 0xac,param_1 + 0xb8);
        if (sVar10 == 0) {
          return 1;
        }
        uVar5 = fn_82BEEB88(&uStack_a8,param_1 + 0xac,param_1 + 0xb8);
        dVar13 = (double)lbl_82005344;
        fn_82BEEB50(dVar13,&stack_pair_c8.first,uVar5);
        uVar9 = fn_82BEA038(&stack_pair_c8.first,&stack_pair_c8.first);
        *(unsigned int *)(param_1 + 0xd4) = (unsigned int)LZCOUNT((uVar9 & 0xffff) - 2) >> 5;
        if (*(int *)(param_1 + 200) != 0) {
          fn_82BA02A8(&stack_pair_80.first);
          fn_82BA02A8(&stack_pair_74.first);
          fn_82BA02A8(&uStack_68);
          uVar5 = fn_82BEEB88(auStack_98,param_1 + 0x7c,&stack_pair_c8.first);
          fn_82BEEB50(dVar13,&uStack_e0,uVar5);
          uVar5 = fn_82BEEB88(auStack_98,param_1 + 0x94,&stack_pair_c8.first);
          fn_82BEEB50(dVar13,&uStack_a8,uVar5);
          uStack_5c = *(unsigned int *)(param_1 + 0xcc);
          stack_pair_74.first = stack_pair_c8.first;
          stack_pair_74.second = stack_pair_c8.second;
          uStack_6c = uStack_c0;
          stack_pair_80.first = (((unsigned __int64)(uStack_e0) >> 0) & 0xFFFFFFFF);
          stack_pair_80.second = (((unsigned __int64)(uStack_e0) >> 32) & 0xFFFFFFFF);
          uStack_78 = uStack_d8;
          uStack_68 = uStack_a8;
          uStack_64 = uStack_a4;
          uStack_60 = uStack_a0;
          iVar7 = (**(int (***)())(param_1 + 200))(&stack_pair_80.first);
          if (iVar7 != 0) {
            return 1;
          }
        }
        *(unsigned int *)(param_1 + 0xd0) = 1;
        uVar5 = fn_82BA02A8(uVar4);
        uVar6 = fn_82BA02A8(uVar3);
        fn_82BE4008(param_1 + 0x7c,uVar6,uVar5,puVar8,pfVar12);
        uVar5 = fn_82BA02A8(uVar4);
        uVar6 = fn_82BA02A8(uVar3);
        fn_82BE4008(param_1 + 0x94,uVar6,uVar5,puVar8,pfVar11);
        fVar1 = *pfVar11;
        if ((float)puVar8[2] <= *pfVar11) {
          fVar1 = (float)puVar8[2];
        }
        *pfVar11 = fVar1;
        if (fVar1 <= (float)*puVar8) {
          fVar1 = (float)*puVar8;
        }
        *pfVar11 = fVar1;
        fVar1 = *(float *)(param_1 + 0xec);
        if ((float)puVar8[3] <= *(float *)(param_1 + 0xec)) {
          fVar1 = (float)puVar8[3];
        }
        *(float *)(param_1 + 0xec) = fVar1;
        if (fVar1 <= (float)puVar8[1]) {
          fVar1 = (float)puVar8[1];
        }
        *(float *)(param_1 + 0xec) = fVar1;
        fVar1 = *pfVar12;
        if ((float)puVar8[2] <= *pfVar12) {
          fVar1 = (float)puVar8[2];
        }
        *pfVar12 = fVar1;
        if (fVar1 <= (float)*puVar8) {
          fVar1 = (float)*puVar8;
        }
        *pfVar12 = fVar1;
        dVar13 = (double)*(float *)(param_1 + 0xe4);
        if ((double)puVar8[3] <= (double)*(float *)(param_1 + 0xe4)) {
          dVar13 = (double)puVar8[3];
        }
        *(float *)(param_1 + 0xe4) = (float)dVar13;
        uStack_e0 = (unsigned __int64)puVar8[1];
        if (dVar13 <= (double)uStack_e0) {
          dVar13 = (double)uStack_e0;
        }
        *(float *)(param_1 + 0xe4) = (float)dVar13;
        fn_82BEEAC8(auStack_d0,pfVar11,pfVar12);
        dVar13 = (double)fn_82BEEAB0(auStack_d0);
        *(int *)(param_1 + 0xdc) = (int)(__int64)dVar13;
        uVar3 = fn_82BE9300();
        iVar7 = fn_82BE93B0();
        if (((uVar3 & 0xffffffff) != 0) && (iVar7 != 0)) {
          fn_82BEEB18(&fStack_b8,&stack_pair_c8.first,uVar3);
          fn_82BEEC00(&fStack_b8);
          *(float *)(param_1 + 0xd8) =
               -(*(float *)(param_1 + 0x70) * fStack_b8 +
                *(float *)(param_1 + 0x78) * fStack_b0 + *(float *)(param_1 + 0x74) * fStack_b4);
          return 1;
        }
      }
    }
  }
  return 0;
}
