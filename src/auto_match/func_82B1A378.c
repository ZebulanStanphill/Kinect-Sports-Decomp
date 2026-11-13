extern int fn_82AA66A8();
extern int fn_82AD20C0();
extern int fn_82B80EF8();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_82002C40;
extern unsigned int lbl_82005730;
extern unsigned int lbl_8207F708;
extern unsigned int lbl_820D7E90;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82B1A378(unsigned __int64 param_1,unsigned __int64 param_2,int param_3)

{
  int iVar1;
  unsigned int *puVar2;
  int iVar4;
  unsigned __int64 uVar3;
  unsigned int uVar5;
  unsigned int uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  iVar4 = fn_82F6A548();
  iVar1 = *(int *)(param_3 + 0x14);
  uVar6 = 0;
  dVar8 = lbl_82002C40;
  dVar9 = lbl_8207F708;
  dVar10 = lbl_820D7E90;
  dVar11 = lbl_82005730;
  if (*(int *)(iVar1 + 4) != 0) {
    do {
      puVar2 = *(unsigned int **)((uVar6 + 2) * 4 + iVar1);
      if ((*(unsigned int *)(puVar2[3] + 8) & 0x3f80) != 16000) {
        uVar3 = 0xe24;
        goto code_r0x82b1a494;
      }
      dVar7 = (double)fn_82B80EF8(puVar2[3],*puVar2 >> 5 & 3,*puVar2 & 0x1f);
      if ((dVar7 < dVar10) || (dVar9 < dVar7)) {
        *(double *)(iVar4 + 0x270) = dVar7;
        uVar3 = 0xe25;
        *(double *)(iVar4 + 0x278) = dVar10;
        *(double *)(iVar4 + 0x280) = dVar9;
        goto code_r0x82b1a494;
      }
      uVar5 = (unsigned int)(dVar7 * dVar8);
      if ((double)(__int64)(int)uVar5 * dVar11 != dVar7) {
        *(double *)(iVar4 + 0x270) = dVar7;
        uVar3 = 0xe26;
        *(double *)(iVar4 + 0x278) = dVar11;
        goto code_r0x82b1a494;
      }
      if (uVar6 == 0) {
        uVar5 = (uVar5 & 0x1f) << 0x10 | *(unsigned int *)(param_3 + 8) & 0xffe0ffff;
      }
      else if (uVar6 == 1) {
        uVar5 = (uVar5 & 0x1f) << 0x15 | *(unsigned int *)(param_3 + 8) & 0xfc1fffff;
      }
      else {
        if (2 < uVar6) {
                    /* WARNING: Subroutine does not return */
          fn_82AA66A8(iVar4,0x12c0);
        }
        uVar5 = (uVar5 & 0x1f) << 0x1a | *(unsigned int *)(param_3 + 8) & 0x83ffffff;
      }
      *(unsigned int *)(param_3 + 8) = uVar5;
      fn_82AD20C0(param_2,puVar2,iVar4);
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(unsigned int *)(iVar1 + 4));
  }
  uVar3 = 0;
code_r0x82b1a494:
  fn_82F6A594(uVar3);
  return;
}

