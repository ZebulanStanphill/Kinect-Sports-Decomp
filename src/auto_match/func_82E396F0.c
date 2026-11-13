typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82A75390();
extern int fn_82E38A90();
extern unsigned int lbl_8215ECF8;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int fn_82E396F0(unsigned short *param_1,int *param_2)

{
  int iVar1;
  unsigned int uVar2;
  bool bVar3;
  unsigned __int64 uVar4;
  int iVar5;
  unsigned __int64 uVar6;
  int iVar7;
  unsigned int uVar8;
  unsigned int *puVar10;
  unsigned __int64 uVar9;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  unsigned __int64 uVar14;
  
  uVar4 = fn_82A75390(*param_1);
  iVar7 = *param_2;
  iVar1 = param_2[1];
  iVar5 = fn_82E38A90(uVar4,iVar1,iVar7,*(unsigned int *)(param_1 + 2),param_1[1]);
  uVar6 = 0xffffffffffffffff;
  if ((iVar7 == 0) || (iVar1 != 0)) {
    bVar3 = false;
    uVar14 = ((unsigned __int64)*(unsigned int *)(param_1 + 4) & 0x1fffffff) << 3;
  }
  else {
    uVar14 = (unsigned __int64)(unsigned int)param_2[5];
    bVar3 = true;
  }
  uVar13 = 0;
  if ((uVar4 & 0xffffffff) == 2) {
    uVar13 = 8;
  }
  else if ((uVar4 & 0xffffffff) == 3) {
    uVar13 = 0x10;
  }
  if (iVar5 != 0) {
    uVar8 = 0;
    if (*(unsigned int *)(iVar5 + 8) != 0) {
      iVar7 = 0;
      uVar11 = 0xffffffff;
      do {
        puVar10 = (unsigned int *)(iVar7 + *(int *)(iVar5 + 0xc));
        uVar12 = uVar11;
        if ((((*(unsigned int *)((int)puVar10 + 0x15) & lbl_8215ECF8) != 0) &&
            ((*(unsigned int *)((int)puVar10 + 0x15) & uVar13) != 0)) &&
           ((unsigned short)*(unsigned char *)(puVar10 + 5) == param_1[7])) {
          if (bVar3) {
            uVar2 = puVar10[4];
          }
          else {
            uVar2 = *puVar10;
          }
          uVar9 = uVar14 - uVar2;
          uVar4 = (unsigned __int64)((int)uVar9 >> 0x1f);
          uVar4 = (uVar9 ^ uVar4) - uVar4;
          uVar12 = uVar8;
          if (uVar4 == 0) break;
          uVar12 = uVar11;
          if (((uVar4 & 0xffffffff) < (uVar6 & 0xffffffff)) && ((!bVar3 || (uVar14 <= uVar2)))) {
            uVar6 = uVar4;
            uVar12 = uVar8;
          }
        }
        uVar8 = uVar8 + 1;
        iVar7 = iVar7 + 0x19;
        uVar11 = uVar12;
      } while (uVar8 < *(unsigned int *)(iVar5 + 8));
      if (uVar12 != 0xffffffff) {
        return uVar12 * 0x19 + *(int *)(iVar5 + 0xc);
      }
    }
  }
  return 0;
}

