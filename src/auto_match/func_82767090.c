typedef unsigned char bool;
#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
extern unsigned int lbl_821AAD20;


double fn_82767090(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  float fVar2;
  int iVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned int uVar7;
  __int64 lVar8;
  __int64 lVar9;
  bool bVar10;
  
  lVar8 = 0;
  lVar9 = (unsigned __int64)*(unsigned int *)(param_1 + 0x14) - 1;
  fVar2 = lbl_821AAD20;
  if (-1 < lVar9) {
    iVar1 = **(int **)(param_1 + 8);
    do {
      uVar7 = (int)lVar8 + (int)lVar9;
      lVar4 = (__int64)((int)uVar7 >> 1) + (unsigned __int64)((int)uVar7 < 0 && (uVar7 & 1) != 0);
      iVar3 = (int)lVar4 * 6 + *(int *)(param_1 + 0x18);
      uVar6 = (unsigned __int64)CONCAT11(*(unsigned char *)(iVar1 + iVar3 + 1),*(unsigned char *)(iVar1 + iVar3))
      ;
      uVar5 = (unsigned __int64)
              CONCAT11(*(unsigned char *)(iVar1 + iVar3 + 2 + 1),*(unsigned char *)(iVar1 + iVar3 + 2));
      if (uVar6 == (param_2 & 0xffffffff)) {
        if (uVar5 == (param_3 & 0xffffffff)) {
          fVar2 = (float)(__int64)
                         CONCAT11(*(unsigned char *)(iVar1 + iVar3 + 4 + 1),
                                  *(unsigned char *)(iVar1 + iVar3 + 4));
          break;
        }
        bVar10 = uVar5 <= param_3;
      }
      else {
        bVar10 = uVar6 <= param_2;
      }
      if (bVar10) {
        lVar8 = lVar4 + 1;
      }
      else {
        lVar9 = lVar4 + -1;
      }
    } while ((int)lVar8 <= (int)lVar9);
  }
  return (double)fVar2;
}

