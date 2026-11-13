typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int lbl_821AAD20;


void fn_82FEC1E0(int param_1,int param_2,__int64 param_3)

{
  unsigned int uVar1;
  int iVar2;
  bool bVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  unsigned __int64 *puVar7;
  __int64 lVar6;
  unsigned __int64 uVar8;
  __int64 lVar9;
  unsigned __int64 uVar10;
  unsigned int uVar11;
  
  uVar4 = lbl_821AAD20;
  uVar8 = 0;
  lVar9 = param_3 + -4;
  puVar7 = (unsigned __int64 *)(param_2 + -8);
  do {
    if (*(int *)(puVar7 + 1) == 0) break;
    puVar7 = puVar7 + 1;
    uVar8 = uVar8 + 1;
    *(unsigned __int64 *)((int)lVar9 + 4) = *puVar7;
    lVar9 = lVar9 + 0xc;
    *(unsigned int *)lVar9 = uVar4;
  } while ((uVar8 & 0xffffffff) < 4);
  uVar11 = 0;
  puVar5 = (unsigned int *)(param_1 + 4);
  lVar9 = (uVar8 + (uVar8 & 0x7fffffff) * 2 & 0x3fffffff) * 4 + param_3 + -4;
  do {
    iVar2 = puVar5[-1];
    if (iVar2 == 0) break;
    bVar3 = false;
    uVar10 = 0;
    lVar6 = param_3;
    if ((uVar8 & 0xffffffff) != 0) {
      do {
        if (*(int *)lVar6 == iVar2) {
          bVar3 = true;
          *(unsigned int *)
           ((int)((uVar10 + (uVar10 & 0x7fffffff) * 2 & 0xffffffff) << 2) + (int)param_3 + 8) =
               *puVar5;
          break;
        }
        uVar10 = uVar10 + 1;
        lVar6 = lVar6 + 0xc;
      } while ((uVar10 & 0xffffffff) < (uVar8 & 0xffffffff));
    }
    if ((!bVar3) && ((uVar8 & 0xffffffff) < 4)) {
      uVar1 = *puVar5;
      *(int *)((int)lVar9 + 4) = iVar2;
      *(unsigned int *)((int)lVar9 + 8) = uVar4;
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 0xc;
      *(unsigned int *)lVar9 = uVar1;
    }
    uVar11 = uVar11 + 1;
    puVar5 = puVar5 + 2;
  } while (uVar11 < 4);
  if ((uVar8 & 0xffffffff) < 4) {
    *(unsigned int *)((int)((uVar8 + (uVar8 & 0x7fffffff) * 2 & 0xffffffff) << 2) + (int)param_3) = 0;
  }
  return;
}

