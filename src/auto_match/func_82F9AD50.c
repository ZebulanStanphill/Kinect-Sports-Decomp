extern int fn_82F655D8();
extern int fn_82F65FB0();
extern int fn_82F6A544();
extern int fn_82F6A590();
extern unsigned int lbl_82005758;
extern unsigned int lbl_82011630;
extern unsigned int lbl_83264200;


void fn_82F9AD50(void)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  unsigned int *puVar4;
  unsigned __int64 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  unsigned __int64 uVar10;
  double dVar11;
  
  iVar3 = fn_82F6A544();
  dVar8 = lbl_82005758 / (double)*(float *)(iVar3 + 0x10);
  dVar9 = lbl_82005758 / (double)*(unsigned int *)(iVar3 + 0x214);
  dVar11 = lbl_82005758 - lbl_82005758 / (dVar8 * dVar8);
  uVar10 = lbl_82011630;
  dVar8 = lbl_82005758;
  fn_82F655D8(lbl_82011630,
                    ((double)*(unsigned int *)((*(int *)(iVar3 + 0x14) + 0x23) * 4 + iVar3) * dVar9) /
                    (double)*(float *)(iVar3 + 0xc));
  dVar6 = (double)fn_82F65FB0();
  if (dVar8 < dVar6 * lbl_83264200 * dVar11) {
    dVar11 = dVar8 / (dVar6 * lbl_83264200);
  }
  uVar5 = 0;
  if (*(int *)(iVar3 + 0x14) != 0) {
    puVar4 = (unsigned int *)(iVar3 + 0x8c);
    do {
      puVar4 = puVar4 + 1;
      dVar6 = (double)fn_82F655D8(uVar10,((double)*puVar4 * dVar9) /
                                               (double)*(float *)(iVar3 + 0xc));
      dVar7 = (double)fn_82F65FB0();
      uVar1 = (unsigned int)uVar5 & 3;
      iVar2 = (int)((uVar5 & 0xffffffff) >> 2);
      uVar5 = uVar5 + 1;
      dVar7 = dVar7 * lbl_83264200 * dVar11;
      *(float *)(((iVar2 + 0x14) * 4 + uVar1) * 4 + iVar3) = (float)((dVar8 - dVar7) * dVar6);
      *(float *)(((iVar2 + 0x18) * 4 + uVar1) * 4 + iVar3) = (float)dVar7;
    } while ((uVar5 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(iVar3 + 0x14));
  }
  fn_82F6A590();
  return;
}

