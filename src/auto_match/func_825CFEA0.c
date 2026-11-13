extern int fn_8251DD18();
extern int fn_8251DEE8();
extern int fn_8251E400();
extern int fn_8251F720();
extern int fn_82522D98();
extern int fn_82522DF8();
extern int fn_82522ED8();
extern int fn_825269D0();
extern int fn_82529A38();
extern int fn_8253CC70();
extern int fn_8253D1C0();
extern int fn_8254B250();
extern int fn_82557E40();
extern int fn_8255BDB8();
extern int fn_82577D38();
extern int fn_8257CD70();
extern int fn_8257CED8();
extern int fn_8257CF90();
extern int fn_8257F228();
extern int fn_8257F360();
extern int fn_82587AC0();
extern int fn_8258B938();
extern int fn_825B6CE0();
extern int fn_825B9FB0();
extern int fn_825BA1E8();
extern int fn_825BA250();
extern int fn_8261BBE0();
extern int fn_8261BD28();
extern int fn_826236B8();
extern int fn_82A1DD38();
extern unsigned int lbl_821961F4;
extern unsigned int ltcg_pool_0_0f;
extern int (*lbl_8326B7CC)();
extern unsigned int lbl_83270020;
extern unsigned int lbl_83270024;
extern unsigned int lbl_83270028;
extern unsigned int lbl_8327002C;
extern unsigned int lbl_83270030;
extern unsigned int lbl_83270034;
extern unsigned int lbl_83270038;
extern unsigned int lbl_8327003C;
extern unsigned int lbl_83270040;
extern unsigned int lbl_83270044;
extern unsigned int lbl_83270048;
extern unsigned int lbl_83270050;
extern unsigned int lbl_83270054;
extern unsigned int lbl_83270058;
extern unsigned int lbl_8327005C;
extern unsigned int lbl_83270060;
extern unsigned int lbl_83270064;
extern unsigned int lbl_83270068;
extern unsigned int lbl_8327006C;
extern unsigned int lbl_83270070;
extern unsigned int lbl_83270074;
extern unsigned int lbl_83270078;
extern int (*lbl_8327F658)();
extern int (*lbl_8327F65C)();
extern unsigned int lbl_8327F674;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;


void fn_825CFEA0(unsigned int *param_1,int param_2)

{
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned __int64 uVar1;
  int iVar4;
  int *piVar5;
  unsigned __int64 uVar6;
  unsigned int *puVar7;
  unsigned int uVar8;
  int *piVar9;
  int iVar10;
  unsigned int *puVar11;
  int iVar12;
  unsigned int *puVar13;
  int *piVar14;
  __int64 lVar15;
  double dVar16;
  double dVar17;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  struct { unsigned int first; unsigned int second; } stack_pair_90;

  unsigned int uStack_88;
  unsigned int uStack_84;
  
  dVar17 = (double)ltcg_pool_0_0f;
  lbl_83270020 = ltcg_pool_0_0f;
  lbl_83270044 = 0;
  lbl_83270024 = ltcg_pool_0_0f;
  lbl_83270034 = 0xff;
  lbl_83270028 = ltcg_pool_0_0f;
  lbl_83270030 = lbl_821961F4;
  lbl_8327002C = ltcg_pool_0_0f;
  lbl_83270038 = lbl_821961F4;
  lbl_8327003C = ltcg_pool_0_0f;
  lbl_83270048 = 0;
  lbl_83270040 = ltcg_pool_0_0f;
  lbl_83270074 = 0;
  lbl_83270058 = ltcg_pool_0_0f;
  lbl_83270078 = 0;
  lbl_8327005C = ltcg_pool_0_0f;
  lbl_83270070 = 0;
  lbl_83270060 = ltcg_pool_0_0f;
  lbl_83270064 = ltcg_pool_0_0f;
  lbl_83270068 = ltcg_pool_0_0f;
  lbl_8327006C = ltcg_pool_0_0f;
  lbl_83270050 = ltcg_pool_0_0f;
  lbl_83270054 = ltcg_pool_0_0f;
  iVar10 = param_2 + 0x30c;
  if (*(int *)(param_2 + 4) != 0) {
    puVar7 = *(unsigned int **)(param_2 + 0x2fc);
    puVar11 = (unsigned int *)(param_2 + 8);
    puVar2 = (unsigned int *)*puVar7;
    if (puVar2 == (unsigned int *)0x0) {
      puVar2 = (unsigned int *)fn_82522D98(8,0,0,0,0,0,0);
      *puVar2 = 0;
      puVar2[1] = 8;
    }
    uVar3 = fn_825B9FB0(param_2 + 4,puVar2,0);
    *puVar7 = uVar3;
    if ((puVar11 != (unsigned int *)0x0) &&
       (uVar6 = (unsigned __int64)*puVar11, uVar6 != (uVar6 - 1) + (unsigned __int64)(uVar6 == 0))) {
      puVar2 = (unsigned int *)fn_82522D98(8);
      *puVar2 = 0;
      puVar2[1] = 8;
      uVar3 = fn_825B9FB0(puVar11,puVar2,10000);
      puVar7[1] = uVar3;
    }
  }
  puVar7 = (unsigned int *)0x83274a10;
  lVar15 = 6;
  do {
    puVar7 = puVar7 + 8;
    *puVar7 = 0;
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  fn_825269D0(4,param_2);
  puVar11 = (unsigned int *)(param_2 + 0xd38);
  if ((puVar11 != (unsigned int *)0x0) &&
     (uVar6 = (unsigned __int64)*puVar11, uVar6 != (uVar6 - 1) + (unsigned __int64)(uVar6 == 0))) {
    uVar3 = fn_8251F720(puVar11,0);
    *(unsigned int *)(param_2 + 0xd3c) = uVar3;
  }
  iVar12 = *(int *)(param_2 + 0x2f4);
  if (*(int *)(iVar12 + 0x14) != 0) {
    fn_82557E40(iVar12,iVar12 + 8,iVar12 + 0xc,iVar12 + 0x10);
  }
  *(unsigned int *)(iVar12 + 8) = 0;
  *(unsigned int *)(iVar12 + 0x14) = 0;
  fn_8253CC70(param_2 + 0x1f0,param_2);
  fn_825269D0(5,param_2);
  fn_8258B938(param_2,param_2 + 0x6dc,param_2 + 0x6e8,param_2 + 0x6f4,param_2 + 0x700);
  uVar8 = *(unsigned int *)(param_2 + 0x6fc);
  uVar3 = fn_82522DF8(uVar8 << 2);
  *(unsigned int *)(param_2 + 0x70c) = uVar3;
  fn_826236B8(param_2 + 0x720,
                    ((__int64)((int)uVar8 >> 2) + (unsigned __int64)((int)uVar8 < 0 && (uVar8 & 3) != 0) +
                     0x10 & 0x1ffffff) << 7);
  *(unsigned int *)(param_2 + 0x74c) = 0;
  *(unsigned int *)(param_2 + 0x750) = 0;
  *(unsigned int *)(param_2 + 0x714) = 0x80;
  *(unsigned int *)(param_2 + 0x718) = 0;
  *(unsigned int *)(param_2 + 0x71c) = 1;
  *(unsigned int *)(param_2 + 0x710) = 0;
  *(unsigned int *)(param_2 + 0x6d8) = 1;
  fn_8251DD18(iVar10);
  fn_8253D1C0(param_2 + 0x1f0,param_2);
  puVar11 = *(unsigned int **)(param_2 + 0x8c4);
  if ((*puVar11 != 0) && (lVar15 = (unsigned __int64)*puVar11 - 1, *puVar11 = (unsigned int)lVar15, lVar15 == 0)) {
    *puVar11 = 0xffffffff;
    if (*(int *)(*(int *)(*(int *)(puVar11[1] + 0x8c4) + 4) + 0x3e4) != 0) {
      fn_82577D38();
    }
    *puVar11 = 0;
  }
  fn_825269D0(6,param_2);
  if (lbl_8327F65C != (int (**)())0x0) {
    (*lbl_8327F65C)(lbl_8327F674);
  }
  puVar11 = *(unsigned int **)(param_2 + 0x2f8);
  iVar12 = 0;
  puVar13 = puVar11;
  if (0 < (int)puVar11[0x10]) {
    do {
      uVar8 = *puVar13 >> 0x18;
      if (*puVar13 == 0) {
        uVar8 = 0x7a;
      }
      if (uVar8 == 0x60) {
        fn_8257CF90(puVar13,param_2);
      }
      else if ((uVar8 == 0x1f) && (iVar4 = fn_825B6CE0(puVar13), iVar4 != 0)) {
        *(int *)(iVar4 + 0x84) = param_2;
        uVar1 = fn_82587AC0(iVar4 + 0x4b);
        fn_82529A38(uVar1,iVar4,0);
        fn_82522ED8(iVar4);
      }
      iVar12 = iVar12 + 1;
      puVar13 = puVar13 + 1;
    } while (iVar12 < (int)puVar11[0x10]);
  }
  piVar14 = (int *)(param_2 + 0xcc0);
  puVar11[0x10] = 0;
  piVar5 = *(int **)(param_2 + 0xcdc);
  for (piVar9 = *(int **)(param_2 + 0xcd8); piVar9 < piVar5; piVar9 = piVar9 + 5) {
    if (*piVar9 == 0) {
      fn_8257F360((double)(float)piVar9[2],(double)(float)piVar9[3],param_2,piVar9[1]);
    }
    else if (*piVar9 == 1) {
      dVar16 = (double)(float)piVar9[2];
      if ((*(int *)(*piVar14 + 0x3e4) != 0) &&
         (iVar12 = *(int *)(*(int *)(*piVar14 + 0x3e4) + 0x8c0), iVar12 != 0)) {
        fn_8257F228(dVar16,piVar14,iVar12,piVar9 + 1);
      }
      iVar12 = *(int *)(*(int *)(*piVar14 + 0x7e4) + 4);
      if (iVar12 != 0) {
        fn_8257F228(dVar16,piVar14,iVar12,piVar9 + 1);
      }
    }
  }
  fn_8251E400(param_2 + 0xcd8);
  uVar6 = 0;
  piVar5 = *(int **)(param_2 + 0x2fc);
  if (*piVar5 != 0) {
    uVar1 = fn_825BA250();
    fn_8261BBE0();
    fn_8261BD28();
    if (piVar5[1] != 0) {
      uVar6 = fn_825BA250();
    }
    fn_8255BDB8(piVar5,param_2,uVar1,uVar6,0);
    if ((uVar6 & 0xffffffff) != 0) {
      fn_825BA1E8(uVar6);
    }
    fn_825BA1E8(uVar1);
  }
  fn_8257CD70(param_2 + 0x78,param_2);
  fn_8251DD18(iVar10);
  stack_pair_90.second = 8;
  iVar12 = param_2 + 0x300;
  stack_pair_90.first = 0x45;
  if ((lbl_8326B7CC != (int (**)())0x0) && (iVar4 = (*lbl_8326B7CC)(iVar12,&stack_pair_90.first), iVar4 != 0)) {
    piVar5 = (int *)fn_82522D98((unsigned __int64)stack_pair_90.second + 0x30);
    piVar5[1] = 0;
    piVar9 = (int *)(param_2 + 0x304);
    *piVar5 = 0;
    iVar4 = *piVar9;
    while (iVar4 != 0) {
      iVar12 = *piVar9;
      piVar9 = (int *)(iVar12 + 4);
      iVar4 = *(int *)(iVar12 + 4);
    }
    *piVar9 = (int)piVar5;
    *piVar5 = iVar12;
    piVar5[2] = (int)(piVar5 + 0xc);
    piVar5[1] = 0;
    fn_82A1DD38(piVar5 + 0xc,&stack_pair_90.first,stack_pair_90.second);
    piVar5[9] = (int)(float)dVar17;
    piVar5[8] = (int)(float)dVar17;
    puVar7 = (unsigned int *)((unsigned int)(piVar5 + 4) & 0xfffffff0);
    *puVar7 = in_register_000104d0;
    puVar7[1] = in_register_000104d4;
    puVar7[2] = in_register_000104d8;
    puVar7[3] = in_vr77;
  }
  if (lbl_8327F674 != 0) {
    (*lbl_8327F658)(lbl_8327F674,&stack_pair_90.first);
  }
  puVar7 = *(unsigned int **)(param_2 + 0x3a0);
  if (puVar7 != *(unsigned int **)(param_2 + 0x39c)) {
    puVar2 = *(unsigned int **)(param_2 + 0x39c);
    uStack_84 = 8;
    uStack_88 = 0x4d;
    for (; puVar2 < puVar7; puVar2 = puVar2 + 1) {
      (**(int (***)())(*(int *)*puVar2 + 0xc))((int *)*puVar2,&uStack_88);
    }
  }
  fn_8257CED8(param_2 + 0x78);
  fn_8251DEE8(iVar10);
  while (piVar5 = *(int **)(param_2 + 0x94), piVar5 != (int *)0x0) {
    if (*piVar5 != 0) {
      *(int *)(*piVar5 + 4) = piVar5[1];
    }
    if ((int *)piVar5[1] != (int *)0x0) {
      *(int *)piVar5[1] = *piVar5;
    }
    piVar5[1] = 0;
    *piVar5 = 0;
  }
  *(unsigned short *)(param_2 + 0x3ac) = 0;
  *(unsigned int *)(param_2 + 0x3a0) = *(unsigned int *)(param_2 + 0x39c);
  fn_825269D0(7,param_2);
  fn_8254B250(*(unsigned int *)(param_2 + 0x8c8));
  *param_1 = 0;
  return;
}

