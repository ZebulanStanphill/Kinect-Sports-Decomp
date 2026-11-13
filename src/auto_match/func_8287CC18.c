typedef unsigned char bool;
#define true 1
#define false 0
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8200DFF4;
extern unsigned int lbl_82021538;
extern unsigned int lbl_82022F98;
extern unsigned int lbl_82022FC0;
extern unsigned int lbl_82022FC4;
extern unsigned int lbl_82022FC8;
extern unsigned int lbl_82022FCC;
extern unsigned int lbl_820579A8;
extern unsigned int lbl_82186E6C;
extern unsigned int lbl_821AAD20;
extern unsigned int stack0xfffffff8;
extern unsigned int uStack_4;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_8287CC18(int param_1,char *param_2,__int64 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  float *pfVar5;
  unsigned int uVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  float afStack_10 [3];
  unsigned int uStack_4;
  
  fVar1 = *(float *)(param_2 + 0x94);
  pfVar5 = (float *)(param_2 + 0x94);
  fVar2 = lbl_82022FCC;
  if (lbl_821AAD20 < fVar1) {
    afStack_10[0] = lbl_821AAD20;
    pfVar8 = afStack_10;
    stack0xfffffff8 = CONCAT44(lbl_8200DFF4,uStack_4);
    afStack_10[1] = *(float *)(param_2 + 0x20) - (lbl_8200DFF4 / fVar1 + lbl_82022FC8);
    if (lbl_821AAD20 <= afStack_10[1]) {
      pfVar8 = afStack_10 + 1;
    }
    if (lbl_8200DFF4 < *pfVar8) {
      pfVar8 = afStack_10 + 2;
    }
    fVar2 = *pfVar8;
  }
  fVar3 = lbl_82021538;
  if (*(int *)(param_2 + 0x60) != 0) {
    if ((*(float *)(param_2 + 0x84) <= lbl_82022F98) || (bVar4 = false, *param_2 != '\0')) {
      bVar4 = true;
    }
    if (!bVar4) {
      *pfVar5 = (float)*(unsigned int *)(param_1 + 0x114);
      *(unsigned char *)(param_1 + 0x110) = 1;
      goto code_r0x8287cdc8;
    }
    if (fVar2 <= lbl_82022FC4) {
      if ((4999 < (unsigned __int64)(param_3 - *(__int64 *)(param_2 + 0x98))) &&
         (4999 < (unsigned __int64)(param_3 - *(__int64 *)(param_2 + 0xa0)))) {
        stack0xfffffff8 = CONCAT44(lbl_821AAD20,uStack_4);
        pfVar8 = afStack_10 + 2;
        afStack_10[1] = fVar2 * lbl_82022FC0;
        afStack_10[0] = lbl_82002AE0;
        if (lbl_821AAD20 <= fVar2 * lbl_82022FC0) {
          pfVar8 = afStack_10 + 1;
        }
        if (lbl_82002AE0 < *pfVar8) {
          pfVar8 = afStack_10;
        }
        fVar2 = lbl_82002AE0 - *pfVar8;
        *(__int64 *)(param_2 + 0x98) = param_3;
        *pfVar5 = fVar1 * lbl_82186E6C * fVar2 + fVar1;
      }
      goto code_r0x8287cdc8;
    }
    if ((unsigned __int64)(param_3 - *(__int64 *)(param_2 + 0xa0)) < 5000) goto code_r0x8287cdc8;
    *(__int64 *)(param_2 + 0xa0) = param_3;
    fVar3 = lbl_820579A8;
  }
  *pfVar5 = fVar1 * fVar3;
code_r0x8287cdc8:
  iVar9 = *(int *)(param_1 + 0xf8);
  iVar7 = iVar9;
  if (*param_2 == '\0') {
    iVar7 = 1;
  }
  afStack_10[1] = (float)(unsigned int)(*(int *)(param_1 + 0x118) * iVar7);
  if (*param_2 == '\0') {
    iVar9 = 1;
  }
  uVar6 = *(int *)(param_1 + 0x114) * iVar9;
  fVar1 = (float)uVar6;
  stack0xfffffff8 = CONCAT44(fVar1,uVar6);
  pfVar8 = afStack_10 + 2;
  if (fVar1 <= *pfVar5) {
    pfVar8 = pfVar5;
  }
  if (afStack_10[1] < *pfVar8) {
    pfVar8 = afStack_10 + 1;
  }
  *pfVar5 = *pfVar8;
  return;
}

