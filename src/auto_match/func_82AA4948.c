typedef unsigned char bool;
extern int fn_82AA1C90();
extern int fn_82AA2720();
extern int fn_82AA4498();
extern int fn_82AA4500();
extern unsigned int lbl_820D3C10;
extern unsigned int lbl_821CC86C;
extern unsigned int lbl_821CE828;
extern unsigned int lbl_8315FC18;
extern unsigned int lbl_8315FC58;


unsigned __int64
fn_82AA4948(unsigned __int64 param_1,int param_2,unsigned int *param_3,unsigned int param_4,unsigned __int64 param_5,
             int param_6)

{
  unsigned char bVar1;
  unsigned short uVar2;
  unsigned short uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  bool bVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned int uVar10;
  char *pcVar11;
  unsigned char *puVar12;
  char cVar13;
  unsigned char *puVar14;
  unsigned int uVar15;
  unsigned int uVar16;
  unsigned __int64 uVar17;
  unsigned int *puVar18;
  unsigned int *puVar19;
  char acStack_b0 [4];
  unsigned char *puStack_ac;
  unsigned char *puStack_a8;
  char *pcStack_a4;
  
  if (param_4 < 0x24) {
    uVar8 = 0xffffffff80070057;
  }
  else {
    bVar7 = param_2 == 0;
    uVar15 = param_3[(param_6 + 3) * 2];
    if (uVar15 != 0) {
      uVar4 = *(unsigned int *)((int)param_3 + uVar15 + 0x14);
      uVar5 = *(unsigned int *)((int)param_3 + uVar15 + 8);
      puVar19 = (unsigned int *)((int)param_3 + *(int *)(&lbl_820D3C10 + param_2 * 4) + uVar15);
      uVar6 = *(unsigned int *)((int)param_3 + uVar15 + 0xc);
      uVar10 = uVar4 >> 0x11;
      if (!bVar7) {
        uVar10 = uVar4 >> 0x12;
      }
      uVar17 = (param_1 & 0xffffffff) >> 7 & 1;
      fn_82AA4498(param_5,0xffffffff8202f634);
      fn_82AA1C90(param_5,0xffffffff820d3bf8);
      pcVar11 = "\\line";
      pcStack_a4 = "\\line";
      fn_82AA2720(param_5,0xffffffff821ce7a4);
      puStack_ac = &lbl_821CC86C;
      fn_82AA1C90(param_5,0xffffffff821cc86c);
      fn_82AA4498(param_5,0xffffffff8202f634);
      fn_82AA1C90(param_5,0xffffffff820d3be4);
      fn_82AA2720(param_5,0xffffffff821ce7a4);
      fn_82AA1C90(param_5,0xffffffff821cc86c);
      acStack_b0[0] = '\x01';
      uVar8 = 0xffffffff82196f18;
      if ((uVar17 != 0) || ((uVar10 & 1) != 0)) {
        fn_82AA4498(param_5,0xffffffff8202f634);
        uVar9 = uVar8;
        if ((uVar10 & 1) == 0) {
          uVar9 = 0xffffffff82196f10;
        }
        fn_82AA1C90(param_5,0xffffffff820d3bc8,uVar9);
        fn_82AA2720(param_5,0xffffffff821ce7a4);
        fn_82AA1C90(param_5,0xffffffff821cc86c);
      }
      acStack_b0[0] = '\x01';
      fn_82AA4500(param_5,0,uVar17,bVar7,uVar5,uVar6,acStack_b0);
      if (acStack_b0[0] != '\0') {
        fn_82AA2720(param_5,0xffffffff821ce7a4);
        fn_82AA1C90(param_5,0xffffffff821cc86c);
      }
      puStack_a8 = &lbl_821CE828;
      if ((param_1 & 0x100) != 0) {
        fn_82AA2720(param_5,0xffffffff821ce838);
        uVar10 = *(unsigned int *)((int)param_3 + uVar15 + 0x10);
        if ((uVar17 != 0) || (uVar10 != 0)) {
          fn_82AA1C90(param_5,0xffffffff820d3b8c,uVar10 & 0xffff,uVar10 >> 0x10 & 0xf);
          fn_82AA2720(param_5,0xffffffff821ce7a4);
          fn_82AA1C90(param_5,0xffffffff821cc86c);
        }
        if ((uVar17 != 0) || ((uVar4 & 0x1f) != 0)) {
          fn_82AA1C90(param_5,0xffffffff820d3b54,uVar4 & 0x1f,uVar4 >> 5 & 0x1f,
                            uVar4 >> 10 & 0x7f);
          fn_82AA2720(param_5,0xffffffff821ce7a4);
          fn_82AA1C90(param_5,0xffffffff821cc86c);
        }
        uVar10 = uVar4 >> 5 & 0x1f;
        if (uVar10 < (uVar4 & 0x1f)) {
          fn_82AA1C90(param_5,0xffffffff820d3b2c);
          fn_82AA2720(param_5,0xffffffff821ce7a4);
          fn_82AA1C90(param_5,0xffffffff821cc86c);
        }
        uVar16 = uVar4 >> 10 & 0x7f;
        if (uVar16 < uVar10) {
          fn_82AA1C90(param_5,0xffffffff820d3b04);
          fn_82AA2720(param_5,0xffffffff821ce7a4);
          fn_82AA1C90(param_5,0xffffffff821cc86c);
        }
        if ((uVar4 & 0x1f) << 2 < uVar16) {
          fn_82AA1C90(param_5,0xffffffff820d3ad8);
          fn_82AA2720(param_5,0xffffffff821ce7a4);
          fn_82AA1C90(param_5,0xffffffff821cc86c);
        }
        if ((*param_3 & 0x10) == 0) {
          uVar8 = 0xffffffff82196f10;
        }
        fn_82AA1C90(param_5,0xffffffff820d3ac0,uVar8);
        fn_82AA2720(param_5,0xffffffff821ce7a4);
        fn_82AA1C90(param_5,0xffffffff821cc86c);
        fn_82AA2720(param_5,0xffffffff821ce828);
      }
      fn_82AA2720(param_5,0xffffffff821ce838);
      cVar13 = '\0';
      puVar14 = &lbl_821CC86C;
      puVar12 = &lbl_821CE828;
      if (bVar7) {
        uVar2 = *(unsigned short *)((int)param_3 + uVar15 + 0x18);
        uVar4 = uVar4 >> 5 & 0x1f;
        uVar3 = *(unsigned short *)((int)param_3 + uVar15 + 0x1a);
        uVar15 = 0;
        if (uVar4 != 0) {
          acStack_b0[0] = '\x01';
          do {
            bVar1 = (unsigned char)*puVar19;
            uVar10 = 1 << (uVar15 & 0x3f);
            fn_82AA2720(param_5,0xffffffff821ce818);
            fn_82AA1C90(param_5,0xffffffff820d3a8c,
                              *(unsigned int *)
                               ((int)&lbl_8315FC18 + (bVar1 >> 2 & 0x3ffffffc)));
            if ((bVar1 & 0xf) != 0) {
              fn_82AA1C90(param_5,0xffffffff821aa66c,bVar1 & 0xf);
            }
            uVar8 = 0xffffffff820d3a94;
            if ((uVar10 & ~(unsigned int)uVar2) == 0) {
              if ((uVar10 & ~(unsigned int)uVar3) != 0) {
                uVar8 = 0xffffffff820d3aa0;
                goto LAB_82aa4d8c;
              }
            }
            else {
LAB_82aa4d8c:
              fn_82AA1C90(param_5,uVar8);
            }
            fn_82AA2720(param_5,puStack_a8);
            fn_82AA1C90(param_5,0xffffffff820d3ab4,*puVar19 >> 8 & 0xf);
            uVar10 = *puVar19 >> 0xc & 0xf;
            if (uVar10 != 0xf) {
              fn_82AA1C90(param_5,0xffffffff820d3abc,(&lbl_8315FC58)[uVar10]);
            }
            pcVar11 = pcStack_a4;
            fn_82AA2720(param_5,pcStack_a4);
            fn_82AA1C90(param_5,puStack_ac);
            uVar15 = uVar15 + 1;
            puVar19 = puVar19 + 1;
            cVar13 = acStack_b0[0];
            puVar14 = puStack_ac;
            puVar12 = puStack_a8;
          } while (uVar15 < uVar4);
        }
      }
      else {
        uVar17 = (unsigned __int64)*(unsigned int *)((int)param_3 + uVar15 + 0x18);
        if (uVar17 != 0) {
          cVar13 = '\x01';
          puVar18 = puVar19;
          do {
            bVar1 = (unsigned char)*puVar18;
            fn_82AA2720(param_5,0xffffffff821ce818);
            fn_82AA1C90(param_5,0xffffffff820d3a8c,
                              *(unsigned int *)
                               ((int)&lbl_8315FC18 + (bVar1 >> 2 & 0x3ffffffc)));
            if ((bVar1 & 0xf) != 0) {
              fn_82AA1C90(param_5,0xffffffff821aa66c,bVar1 & 0xf);
            }
            fn_82AA2720(param_5,0xffffffff821ce828);
            fn_82AA1C90(param_5,0xffffffff820d3ab4,*puVar18 >> 8 & 1);
            uVar10 = *puVar18 >> 9 & 0xf;
            if (uVar10 != 0xf) {
              fn_82AA1C90(param_5,0xffffffff820d3abc,(&lbl_8315FC58)[uVar10]);
            }
            fn_82AA2720(param_5,0xffffffff821ce7a4);
            fn_82AA1C90(param_5,0xffffffff821cc86c);
            uVar17 = uVar17 - 1;
            puVar18 = puVar18 + 1;
          } while (uVar17 != 0);
        }
        uVar17 = (unsigned __int64)(uVar4 >> 5) & 0x1f;
        puVar19 = puVar19 + *(int *)((int)param_3 + uVar15 + 0x1c) +
                            *(int *)((int)param_3 + uVar15 + 0x18);
        if ((uVar4 >> 5 & 0x1f) != 0) {
          do {
            bVar1 = (unsigned char)*puVar19;
            fn_82AA2720(param_5,0xffffffff821ce818);
            fn_82AA1C90(param_5,0xffffffff820d3a8c,
                              *(unsigned int *)
                               ((int)&lbl_8315FC18 + (bVar1 >> 2 & 0x3ffffffc)));
            if ((bVar1 & 0xf) != 0) {
              fn_82AA1C90(param_5,0xffffffff821aa66c,bVar1 & 0xf);
            }
            fn_82AA2720(param_5,0xffffffff821ce828);
            fn_82AA1C90(param_5,0xffffffff820d3a84,*puVar19 >> 8 & 0xf);
            uVar15 = *puVar19 >> 0xc & 0xf;
            if (uVar15 != 0xf) {
              fn_82AA1C90(param_5,0xffffffff820d3abc,(&lbl_8315FC58)[uVar15]);
            }
            fn_82AA2720(param_5,0xffffffff821ce7a4);
            fn_82AA1C90(param_5,0xffffffff821cc86c);
            uVar17 = uVar17 - 1;
            puVar19 = puVar19 + 1;
            cVar13 = '\x01';
          } while (uVar17 != 0);
        }
      }
      fn_82AA2720(param_5,puVar12);
      if (cVar13 != '\0') {
        fn_82AA2720(param_5,pcVar11);
        fn_82AA1C90(param_5,puVar14);
      }
    }
    uVar8 = 0;
  }
  return uVar8;
}

