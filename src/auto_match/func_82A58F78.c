typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82A58270();
extern int fn_82A75390();


int fn_82A58F78(unsigned short *param_1,int *param_2)

{
  int iVar1;
  unsigned int uVar2;
  bool bVar3;
  unsigned __int64 uVar4;
  int iVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  int iVar8;
  unsigned int uVar9;
  unsigned int *puVar11;
  unsigned __int64 uVar10;
  unsigned int uVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  
  uVar4 = fn_82A75390(*param_1);
  iVar8 = *param_2;
  iVar1 = param_2[1];
  iVar5 = fn_82A58270(uVar4,iVar1,iVar8,*(unsigned int *)(param_1 + 2),param_1[1]);
  uVar7 = 0xffffffffffffffff;
  if ((iVar8 == 0) || (iVar1 != 0)) {
    bVar3 = false;
    uVar6 = ((unsigned __int64)*(unsigned int *)(param_1 + 4) & 0x1fffffff) << 3;
  }
  else {
    uVar6 = (unsigned __int64)(unsigned int)param_2[5];
    bVar3 = true;
  }
  uVar14 = 0;
  if ((uVar4 & 0xffffffff) == 2) {
    uVar14 = 8;
  }
  else if ((uVar4 & 0xffffffff) == 3) {
    uVar14 = 0x10;
  }
  if (iVar5 != 0) {
    uVar9 = 0;
    if (*(unsigned int *)(iVar5 + 8) != 0) {
      iVar8 = 0;
      uVar12 = 0xffffffff;
      do {
        puVar11 = (unsigned int *)(iVar8 + *(int *)(iVar5 + 0xc));
        uVar13 = uVar12;
        if (((*(unsigned int *)((int)puVar11 + 0x15) & uVar14) != 0) &&
           ((unsigned short)*(unsigned char *)(puVar11 + 5) == param_1[7])) {
          if (bVar3) {
            uVar2 = puVar11[4];
          }
          else {
            uVar2 = *puVar11;
          }
          uVar10 = uVar6 - uVar2;
          uVar4 = (unsigned __int64)((int)uVar10 >> 0x1f);
          uVar4 = (uVar10 ^ uVar4) - uVar4;
          uVar13 = uVar9;
          if (uVar4 == 0) break;
          uVar13 = uVar12;
          if (((uVar4 & 0xffffffff) < (uVar7 & 0xffffffff)) && ((!bVar3 || (uVar6 <= uVar2)))) {
            uVar7 = uVar4;
            uVar13 = uVar9;
          }
        }
        uVar9 = uVar9 + 1;
        iVar8 = iVar8 + 0x19;
        uVar12 = uVar13;
      } while (uVar9 < *(unsigned int *)(iVar5 + 8));
      if (uVar13 != 0xffffffff) {
        return uVar13 * 0x19 + *(int *)(iVar5 + 0xc);
      }
    }
  }
  return 0;
}

