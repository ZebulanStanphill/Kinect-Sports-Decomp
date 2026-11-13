extern int fn_82AA1C90();
extern int fn_82AA2720();
extern int fn_82AA31E8();
extern unsigned int iStack_9c;
extern unsigned int iStack_a4;
extern unsigned int lbl_821CE828;
extern unsigned int lbl_8315FC18;
extern unsigned int lbl_8315FF78;
extern unsigned int uStack_a8;
extern unsigned int uStack_b0;


int fn_82AA3680(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                 unsigned __int64 param_5)

{
  int iVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  unsigned char *puVar6;
  unsigned int *puVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int *puVar10;
  unsigned int uVar11;
  unsigned int uStack_b0;
  unsigned char **ppuStack_ac;
  unsigned int uStack_a8;
  int iStack_a4;
  unsigned char *puStack_a0;
  int iStack_9c;
  
  iStack_9c = fn_82AA31E8(param_5,0,0x24,param_1,param_2,param_3,param_4,&uStack_b0);
  if ((-1 < iStack_9c) && ((param_5 & 0x100) != 0)) {
    uVar5 = *(unsigned int *)(param_1 + 0x1c);
    iVar1 = *(int *)(param_1 + 0x18);
    puStack_a0 = &lbl_821CE828;
    ppuStack_ac = &lbl_8315FC18;
    if (uVar5 != 0) {
      fn_82AA2720(param_2,0xffffffff821ce7a4);
      fn_82AA1C90(param_2,0xffffffff821cc86c);
      fn_82AA2720(param_2,0xffffffff821ce838);
      puVar7 = (unsigned int *)(iVar1 * 4 + uStack_b0);
      fn_82AA1C90(param_2,0xffffffff820d33cc);
      fn_82AA2720(param_2,0xffffffff821ce7a4);
      fn_82AA1C90(param_2,0xffffffff821cc86c);
      uVar8 = 0;
      if (uVar5 != 0) {
        do {
          uVar9 = *puVar7;
          fn_82AA1C90(param_2,0xffffffff820d3394,uVar8,
                        *(unsigned int *)((int)&lbl_8315FC18 + (uVar9 >> 10 & 0x3c)),
                        uVar9 >> 0x10 & 0xf,uVar9 & 0xfff,uVar9 & 0xfff);
          if ((uVar9 & 0x400000) != 0) {
            fn_82AA1C90(param_2,0xffffffff820d33b0);
          }
          if ((uVar9 >> 0x14 & 3) != 0) {
            fn_82AA1C90(param_2,0xffffffff820d33c8,(&lbl_8315FF78)[uVar9 >> 0x14 & 3]);
          }
          fn_82AA2720(param_2,0xffffffff821ce7a4);
          fn_82AA1C90(param_2,0xffffffff821cc86c);
          uVar8 = uVar8 + 1;
          puVar7 = puVar7 + 1;
        } while (uVar8 < uVar5);
      }
      fn_82AA2720(param_2,0xffffffff821ce828);
    }
    uVar8 = *(unsigned int *)(param_1 + 0x14) >> 5;
    if ((uVar8 & 0x1f) != 0) {
      fn_82AA2720(param_2,0xffffffff821ce7a4);
      fn_82AA1C90(param_2,0xffffffff821cc86c);
      fn_82AA2720(param_2,0xffffffff821ce838);
      iStack_a4 = ((uVar8 & 0x1f) + uVar5 + iVar1) * 4 + uStack_b0;
      puVar7 = (unsigned int *)((uVar5 + iVar1) * 4 + uStack_b0);
      uVar5 = *(unsigned int *)(param_1 + 0x20);
      uStack_b0 = uVar5;
      fn_82AA1C90(param_2,0xffffffff820d3374);
      fn_82AA2720(param_2,0xffffffff821ce7a4);
      fn_82AA1C90(param_2,0xffffffff821cc86c);
      uVar9 = 0;
      puVar6 = &lbl_821CE828;
      if ((uVar8 & 0x1f) != 0) {
        uVar11 = 0;
        do {
          uVar2 = *puVar7;
          uVar4 = 0xffffffff821ce35c;
          if ((uVar2 >> 0xc & 2) == 0) {
            uVar4 = 0xffffffff82196582;
          }
          uVar3 = 0xffffffff821ce358;
          if ((uVar2 >> 0xc & 1) == 0) {
            uVar3 = 0xffffffff82196582;
          }
          fn_82AA1C90(param_2,0xffffffff820d330c,uVar9,ppuStack_ac[uVar2 >> 4 & 0xf],uVar2 & 0xf,
                        uVar2 >> 8 & 0xf,uVar3,uVar4);
          fn_82AA2720(param_2,0xffffffff821ce7a4);
          fn_82AA1C90(param_2,0xffffffff821cc86c);
          if ((uVar9 != 0) && ((uVar2 & 0xff) <= uVar11)) {
            fn_82AA1C90(param_2,0xffffffff820d3244);
            fn_82AA2720(param_2,0xffffffff821ce7a4);
            fn_82AA1C90(param_2,0xffffffff821cc86c);
          }
          uVar11 = uVar2 >> 0x10 & 0xfff;
          uStack_a8 = uVar2 & 0xff;
          if (uVar11 < uVar5) {
            puVar10 = (unsigned int *)(uVar11 * 4 + iStack_a4);
            do {
              uVar5 = *puVar10;
              fn_82AA1C90(param_2,0xffffffff820d3328,uVar11,uVar5 & 0xfff);
              fn_82AA2720(param_2,0xffffffff821ce7a4);
              fn_82AA1C90(param_2,0xffffffff821cc86c);
              if ((uVar5 & 0x1000) != 0) break;
              uVar11 = uVar11 + 1;
              puVar10 = puVar10 + 1;
            } while (uVar11 < uStack_b0);
            uVar5 = uStack_b0;
            if (uStack_b0 <= uVar11) goto LAB_82aa3a40;
          }
          else {
LAB_82aa3a40:
            fn_82AA1C90(param_2,0xffffffff820d3338);
            fn_82AA2720(param_2,0xffffffff821ce7a4);
            fn_82AA1C90(param_2,0xffffffff821cc86c);
          }
          fn_82AA2720(param_2,0xffffffff821ce7a4);
          fn_82AA1C90(param_2,0xffffffff821cc86c);
          uVar9 = uVar9 + 1;
          puVar7 = puVar7 + 1;
          uVar11 = uStack_a8;
          puVar6 = puStack_a0;
        } while (uVar9 < (uVar8 & 0x1f));
      }
      fn_82AA2720(param_2,puVar6);
    }
  }
  return iStack_9c;
}

