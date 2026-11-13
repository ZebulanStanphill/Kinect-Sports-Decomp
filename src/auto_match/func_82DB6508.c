#define TBLr 0
extern int fn_82CE5410();
extern int fn_82D80CB8();
extern int fn_82D80CE8();
extern int fn_82DBA1E0();
extern int fn_83088518();
extern int fn_830885D0();
extern int fn_83088640();
extern int fn_83096038();
extern int fn_83096040();
extern unsigned int iStack_84;
extern unsigned int iStack_90;
extern unsigned int iStack_94;
extern unsigned int iStack_a0;
extern unsigned int lbl_8202CF7C;
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;


void fn_82DB6508(unsigned __int64 param_1,int *param_2,unsigned __int64 param_3,int param_4,char *param_5)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  unsigned int *puVar4;
  int iVar5;
  int iVar6;
  unsigned int uVar7;
  unsigned __int64 uVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  char cVar13;
  int iVar12;
  unsigned int uVar14;
  int *piVar15;
  __int64 lVar16;
  int aiStack_b0 [4];
  struct { int first; unsigned int second; } stack_pair_a0;

  unsigned int uStack_98;
  int iStack_94;
  struct { int first; unsigned int second; } stack_pair_90;

  unsigned int uStack_88;
  int iStack_84;

  if ((int)param_3 != 0) {
    iVar9 = KeTlsGetValue(lbl_8323B4A0);
    puVar4 = *(unsigned int **)(iVar9 + 4);
    if (puVar4 < *(unsigned int **)(iVar9 + 0xc)) {
      *puVar4 = "LtBroadPhase";
      puVar4[3] = "StGatherAabbs";
      uVar8 = TBLr;
      puVar4[1] = (int)uVar8;
      *(unsigned int **)(iVar9 + 4) = puVar4 + 4;
    }
    uVar14 = *(unsigned int *)(param_4 + 0x33c);
    stack_pair_90.first = 0;
    stack_pair_90.second = 0;
    uStack_88 = 0x80000000;
    piVar10 = (int *)fn_82CE5410();
    uStack_88 = uVar14 | 0x80000000;
    stack_pair_90.first = *piVar10;
    *piVar10 = (uVar14 * 8 + 0x7f & 0xffffff80) + stack_pair_90.first;
    stack_pair_a0.first = 0;
    stack_pair_a0.second = 0;
    uStack_98 = 0x80000000;
    uVar14 = *(unsigned int *)(param_4 + 0x33c);
    iStack_84 = stack_pair_90.first;
    piVar10 = (int *)fn_82CE5410();
    uStack_98 = uVar14 | 0x80000000;
    stack_pair_a0.first = *piVar10;
    *piVar10 = (uVar14 * 8 + 0x7f & 0xffffff80) + stack_pair_a0.first;
    iStack_94 = stack_pair_a0.first;
    piVar10 = (int *)fn_82CE5410();
    iVar9 = *piVar10;
    *piVar10 = ((int)((param_3 & 0xffffffff) << 5) + 0x7fU & 0xffffff80) + iVar9;
    piVar10 = (int *)fn_82CE5410();
    iVar12 = *piVar10;
    lVar16 = param_3 - 1;
    *piVar10 = ((int)((param_3 & 0xffffffff) << 2) + 0x7fU & 0xffffff80) + iVar12;
    if (-1 < lVar16) {
      piVar10 = (int *)(iVar9 + -8);
      piVar15 = param_2;
      do {
        iVar11 = *piVar15;
        if (3 < (int)lVar16) {
          dataCacheBlockTouch((unsigned __int64)(unsigned int)piVar15[4] + 0x10);
        }
        *(int *)((iVar12 - (int)param_2) + (int)piVar15) = iVar11 + 0x24;
        aiStack_b0[0] = iVar11;
        if (*(unsigned int *)(iVar11 + 0x40) < *(unsigned int *)(iVar11 + 0x30)) {
          fn_82DBA1E0(*(unsigned int *)(param_4 + 0x78),aiStack_b0,1);
        }
        bVar1 = *(unsigned char *)(iVar11 + 0x3f);
        lVar16 = lVar16 + -1;
        piVar15 = piVar15 + 1;
        bVar2 = *(unsigned char *)(iVar11 + 0x3e);
        bVar3 = *(unsigned char *)(iVar11 + 0x3c);
        iVar5 = *(int *)(iVar11 + 0x38);
        uVar14 = (unsigned int)bVar1;
        iVar6 = *(int *)(iVar11 + 0x30);
        piVar10[3] = *(int *)(iVar11 + 0x34) - ((unsigned int)*(unsigned char *)(iVar11 + 0x3d) << (bVar1 & 0x3f));
        piVar10[4] = iVar5 - ((unsigned int)bVar2 << (bVar1 & 0x3f));
        piVar10[2] = iVar6 - ((unsigned int)bVar3 << (uVar14 & 0x3f));
        bVar1 = *(unsigned char *)(iVar11 + 0x4c);
        bVar2 = *(unsigned char *)(iVar11 + 0x4e);
        iVar5 = *(int *)(iVar11 + 0x40);
        iVar6 = *(int *)(iVar11 + 0x48);
        piVar10[7] = ((unsigned int)*(unsigned char *)(iVar11 + 0x4d) << (uVar14 & 0x3f)) + *(int *)(iVar11 + 0x44);
        piVar10[6] = ((unsigned int)bVar1 << (uVar14 & 0x3f)) + iVar5;
        piVar10 = piVar10 + 8;
        *piVar10 = ((unsigned int)bVar2 << (uVar14 & 0x3f)) + iVar6;
      } while (-1 < lVar16);
    }
    iVar11 = KeTlsGetValue(lbl_8323B4A0);
    puVar4 = *(unsigned int **)(iVar11 + 4);
    if (puVar4 < *(unsigned int **)(iVar11 + 0xc)) {
      *puVar4 = "St3AxisSweep";
      uVar8 = TBLr;
      puVar4[1] = (int)uVar8;
      *(unsigned int **)(iVar11 + 4) = puVar4 + 3;
    }
    if (*(int *)(*(int *)(param_4 + 0x58) + 0x10) != 0) {
      fn_83096038();
    }
    (**(int (***)())(**(int **)(param_4 + 0x58) + 0x2c))
              (*(int **)(param_4 + 0x58),iVar12,iVar9,param_3,&stack_pair_90.first,&stack_pair_a0.first);
    if (*(int *)(*(int *)(param_4 + 0x58) + 0x10) != 0) {
      fn_83096040();
    }
    piVar10 = (int *)fn_82CE5410();
    *piVar10 = iVar12;
    piVar10 = (int *)fn_82CE5410();
    *piVar10 = iVar9;
    if ((unsigned __int64)stack_pair_a0.second + (unsigned __int64)stack_pair_90.second != 0) {
      iVar9 = KeTlsGetValue(lbl_8323B4A0);
      puVar4 = *(unsigned int **)(iVar9 + 4);
      if (puVar4 < *(unsigned int **)(iVar9 + 0xc)) {
        *puVar4 = "StRemoveDup";
        uVar8 = TBLr;
        puVar4[1] = (int)uVar8;
        *(unsigned int **)(iVar9 + 4) = puVar4 + 3;
      }
      fn_83088640(&stack_pair_90.first,&stack_pair_a0.first);
    }
    if (param_5 != (char *)0x0) {
      iVar9 = KeTlsGetValue(lbl_8323B4A0);
      puVar4 = *(unsigned int **)(iVar9 + 4);
      if (puVar4 < *(unsigned int **)(iVar9 + 0xc)) {
        *puVar4 = "TtWaitForExport";
        uVar8 = TBLr;
        puVar4[1] = (int)uVar8;
        *(unsigned int **)(iVar9 + 4) = puVar4 + 3;
      }
      do {
        if (*param_5 == '\x01') break;
      } while (*param_5 != '\x02');
      iVar9 = KeTlsGetValue(lbl_8323B4A0);
      puVar4 = *(unsigned int **)(iVar9 + 4);
      if (puVar4 < *(unsigned int **)(iVar9 + 0xc)) {
        *puVar4 = &lbl_82132BC4;
        uVar8 = TBLr;
        puVar4[1] = (int)uVar8;
        *(unsigned int **)(iVar9 + 4) = puVar4 + 3;
      }
    }
    if ((unsigned __int64)stack_pair_a0.second + (unsigned __int64)stack_pair_90.second != 0) {
      iVar9 = KeTlsGetValue(lbl_8323B4A0);
      puVar4 = *(unsigned int **)(iVar9 + 4);
      if (puVar4 < *(unsigned int **)(iVar9 + 0xc)) {
        *puVar4 = "StRemoveAgt";
        uVar8 = TBLr;
        puVar4[1] = (int)uVar8;
        *(unsigned int **)(iVar9 + 4) = puVar4 + 3;
      }
      fn_82D80CB8(param_4,*(unsigned int *)(*param_2 + 0xcc));
      fn_830885D0(*(unsigned int *)(param_4 + 100),stack_pair_a0.first,stack_pair_a0.second);
      uVar14 = stack_pair_90.second;
      iVar9 = fn_82CE5410();
      cVar13 = (**(int (***)())(**(int **)(iVar9 + 0x10) + 0x24))(*(int **)(iVar9 + 0x10),uVar14 << 10);
      if (cVar13 == '\0') {
        uVar7 = *(unsigned int *)(*param_2 + 0xcc);
      }
      else {
        iVar9 = KeTlsGetValue(lbl_8323B4A0);
        puVar4 = *(unsigned int **)(iVar9 + 4);
        if (puVar4 < *(unsigned int **)(iVar9 + 0xc)) {
          *puVar4 = "StAddAgt";
          uVar8 = TBLr;
          puVar4[1] = (int)uVar8;
          *(unsigned int **)(iVar9 + 4) = puVar4 + 3;
        }
        fn_83088518(*(unsigned int *)(param_4 + 100),stack_pair_90.first,stack_pair_90.second,
                        -(unsigned __int64)((unsigned __int64)*(unsigned int *)(param_4 + 0x7c) != 0) &
                        (unsigned __int64)*(unsigned int *)(param_4 + 0x7c) + 8);
        uVar7 = *(unsigned int *)(*param_2 + 0xcc);
      }
      fn_82D80CE8(param_4,uVar7);
    }
    iVar12 = KeTlsGetValue(lbl_8323B4A0);
    iVar9 = iStack_94;
    puVar4 = *(unsigned int **)(iVar12 + 4);
    if (puVar4 < *(unsigned int **)(iVar12 + 0xc)) {
      *puVar4 = &lbl_8202CF7C;
      uVar8 = TBLr;
      puVar4[1] = (int)uVar8;
      *(unsigned int **)(iVar12 + 4) = puVar4 + 3;
    }
    stack_pair_a0.second = -(unsigned int)(stack_pair_a0.first != iStack_94) & stack_pair_a0.second;
    piVar10 = (int *)fn_82CE5410();
    *piVar10 = iVar9;
    iVar9 = fn_82CE5410();
    stack_pair_a0.second = 0;
    if ((uStack_98 & 0x80000000) == 0) {
      (**(int (***)())(**(int **)(iVar9 + 0x10) + 0x10))
                (*(int **)(iVar9 + 0x10),stack_pair_a0.first,uStack_98 & 0x3fffffff);
    }
    iVar9 = iStack_84;
    stack_pair_a0.first = 0;
    uStack_98 = 0x80000000;
    stack_pair_90.second = -(unsigned int)(stack_pair_90.first != iStack_84) & stack_pair_90.second;
    piVar10 = (int *)fn_82CE5410();
    *piVar10 = iVar9;
    iVar9 = fn_82CE5410();
    stack_pair_90.second = 0;
    if ((uStack_88 & 0x80000000) == 0) {
      (**(int (***)())(**(int **)(iVar9 + 0x10) + 0x10))
                (*(int **)(iVar9 + 0x10),stack_pair_90.first,uStack_88 & 0x3fffffff,8);
    }
  }
  return;
}
