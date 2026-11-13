#define _uStack00000010 ((*(unsigned __int64*)&uStack00000010))
extern int fn_82AC3438();
extern int fn_82AC3548();
extern unsigned int stack0x00000010;
extern unsigned int uStack00000010;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

unsigned int fn_82AC42D8(unsigned __int64 param_1,int *param_2,unsigned int *param_3,unsigned __int64 param_4)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  int iVar7;
  int iVar8;
  unsigned char *pbVar9;
  unsigned char *pbVar10;
  unsigned int uStack00000010;
  unsigned char abStack_40 [8];
  unsigned char abStack_38 [56];
  
  uStack00000010 = (unsigned int)((unsigned __int64)param_1 >> 0x20);
  uVar6 = uStack00000010;
  pbVar10 = abStack_40;
  pbVar9 = (unsigned char *)&stack0x00000010;
  do {
    bVar1 = *pbVar10;
    bVar2 = *pbVar9;
    if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
    pbVar10 = pbVar10 + 1;
    pbVar9 = pbVar9 + 1;
  } while (pbVar10 != abStack_38);
  if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
    iVar8 = *param_2;
    uVar4 = (unsigned int)param_2[iVar8 * 4 + 3] >> 0x10 & 7;
    uVar5 = (unsigned int)param_2[iVar8 * 4 + 3] >> 0xd & 7;
    if (((uVar4 < 4) && (uVar3 = (unsigned __int64)uStack00000010 & 0x1fff, (param_4 & 0xffffffff) < uVar3)
        ) && (uVar3 < *param_3)) {
      _uStack00000010 = param_1;
      iVar7 = fn_82AC3438(param_2,uVar3,uVar4,uVar5,param_2 + iVar8 * 4 + 4);
      if (-1 < iVar7) {
        iVar8 = fn_82AC3548(param_2,param_4 + 1,uVar4 + 1,uVar5,param_2 + iVar8 * 4 + 4,
                              (uVar6 >> 0x10 & 0x1f) + 1);
        return iVar8 >> 0x1f & 0x80004005;
      }
    }
  }
  return 0x80004005;
}

