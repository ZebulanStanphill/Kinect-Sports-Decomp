typedef unsigned char bool;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82006848;
extern unsigned int lbl_8200BF40;
extern unsigned int lbl_820145BC;
extern unsigned int lbl_82021534;
extern unsigned int lbl_82021538;
extern unsigned int lbl_820579A8;
extern unsigned int lbl_8207F4E8;
extern unsigned int lbl_8207F528;
extern unsigned int lbl_8208DDB4;
extern unsigned int lbl_8208DDB8;
extern unsigned int lbl_8208DDBC;
extern unsigned int lbl_8208DDC0;
extern unsigned int lbl_8208DDC4;
extern unsigned int lbl_8208DDC8;
extern unsigned int lbl_8208DDCC;
extern unsigned int lbl_8208DDD0;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82E36008(int *param_1)

{
  int iVar1;
  unsigned short uVar2;
  int iVar3;
  int iVar4;
  unsigned int uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  
  fVar8 = lbl_82002AE0;
  iVar3 = *param_1;
  iVar4 = param_1[0x1dd4];
  uVar5 = *(unsigned int *)(iVar3 + 0x54);
  uVar2 = *(unsigned short *)(iVar3 + 0x22);
  trapWord(6,(unsigned __int64)uVar2,0);
  iVar1 = ((int)(((unsigned __int64)uVar5 & 0xfffffff) << 4) / (int)(unsigned int)uVar2 + 500) / 1000;
  trapWord(5,(unsigned __int64)uVar2 &
             ~((((unsigned __int64)uVar5 & 0x7ffffff) << 5 | ((unsigned __int64)uVar5 & 0xfffffff) >> 0x1b) - 1),
           0xffff);
  fVar7 = lbl_82002AE0;
  if (0 < iVar1) {
    fVar7 = (float)(__int64)(iVar4 - iVar1) / (float)(__int64)iVar1;
  }
  if (param_1[0x1d78] == 0) {
    return;
  }
  if (param_1[0x1dd3] == 0) {
    return;
  }
  if (iVar1 != 0) {
    if (0xc0 < iVar4) {
      return;
    }
    if (iVar1 < 0xc1) {
      if (iVar1 <= iVar4) {
        fVar6 = lbl_82002AE0;
        if ((((fVar7 < lbl_8200BF40) && (fVar6 = lbl_8208DDCC, fVar7 < lbl_8208DDD0)) &&
            (fVar6 = lbl_82021538, fVar7 < lbl_8208DDC8)) &&
           (((fVar7 < lbl_820145BC && (fVar6 = lbl_8208DDC4, fVar7 < lbl_82002AE0)) &&
            (fVar6 = lbl_8207F4E8, lbl_8207F528 <= fVar7)))) {
          fVar6 = lbl_8208DDC0;
        }
        bVar9 = lbl_82002AE0 < fVar6;
        fVar7 = (float)param_1[0x1d86] * fVar6;
        param_1[0x1d86] = (int)fVar7;
        if (bVar9) {
          fVar6 = fVar8;
        }
        fVar6 = (float)param_1[0x1d87] * fVar6;
        param_1[0x1d87] = (int)fVar6;
        iVar1 = *(int *)(iVar3 + 0x50);
        fVar8 = lbl_8208DDBC;
        if (((0xac43 < iVar1) || (fVar8 = lbl_8208DDB8, 31999 < iVar1)) ||
           ((fVar8 = lbl_8208DDB4, 0x5621 < iVar1 ||
            (((fVar8 = lbl_82021534, 15999 < iVar1 || (0x2b10 < iVar1)) ||
             (fVar8 = lbl_820579A8, 7999 < iVar1)))))) {
          if (fVar7 <= fVar8) {
            fVar7 = fVar8;
          }
          param_1[0x1d86] = (int)fVar7;
        }
        fVar7 = (float)param_1[0x1d86] + lbl_82006848;
        if ((float)param_1[0x1d86] + lbl_82006848 < fVar6) {
          fVar7 = fVar6;
        }
        param_1[0x1d87] = (int)fVar7;
        return;
      }
      return;
    }
    return;
  }
  return;
}

