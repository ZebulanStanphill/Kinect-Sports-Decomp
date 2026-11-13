extern int fn_82AC3438();
extern unsigned int stack0x00000010;
extern unsigned int uStack00000010;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

unsigned __int64 fn_82AC4708(unsigned __int64 param_1,int *param_2,unsigned int *param_3,unsigned __int64 param_4)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  int iVar6;
  int iVar7;
  unsigned char *pbVar8;
  unsigned char *pbVar9;
  unsigned __int64 uStack00000010;
  unsigned char abStack_40 [8];
  unsigned char abStack_38 [56];
  
  uVar3 = param_1 >> 0x20 & 0x1fff;
  pbVar9 = abStack_40;
  pbVar8 = (unsigned char *)&stack0x00000010;
  do {
    bVar1 = *pbVar9;
    bVar2 = *pbVar8;
    if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
    pbVar9 = pbVar9 + 1;
    pbVar8 = pbVar8 + 1;
  } while (pbVar9 != abStack_38);
  if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
    iVar7 = *param_2;
    uVar4 = (unsigned int)param_2[iVar7 * 4 + 3] >> 0x10 & 7;
    uVar5 = (unsigned int)param_2[iVar7 * 4 + 3] >> 0xd & 7;
    if ((((param_4 & 0xffffffff) < uVar3) || ((param_1 & 2) == 0)) && (uVar3 < *param_3)) {
      uStack00000010 = param_1;
      iVar6 = fn_82AC3438(param_2,uVar3,uVar4,uVar5,param_2 + iVar7 * 4 + 4);
      if ((-1 < iVar6) &&
         (((param_1 & 0x200000000000) != 0 ||
          (iVar7 = fn_82AC3438(param_2,param_4 + 1,uVar4,uVar5,param_2 + iVar7 * 4 + 4),
          -1 < iVar7)))) {
        return 0;
      }
    }
  }
  return 0xffffffff80004005;
}

