typedef unsigned char bool;
#define true 1
#define false 0
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))


void fn_82D11638(__int64 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  unsigned __int64 uVar7;
  int *piVar8;
  
  iVar1 = *(int *)param_1;
  iVar2 = iVar1;
  do {
    if (iVar2 == 0) {
      return;
    }
    uVar7 = (unsigned __int64)(unsigned int)*param_1;
    do {
      *param_1 = CONCAT44(iVar1,-(unsigned int)(uVar7 != 2) & (int)uVar7 + 1U);
      uVar7 = (unsigned __int64)(unsigned int)*param_1;
      if ((unsigned int)*param_1 == 0) goto LAB_82d117a8;
      iVar1 = *(int *)param_1;
      iVar5 = 0;
      iVar2 = *(int *)((int)((uVar7 + 2 & 0xffffffff) << 2) + iVar1);
      iVar6 = *(int *)((int)(((-(unsigned __int64)(uVar7 != 2) & uVar7 + 1) + 2 & 0xffffffff) << 2) + iVar1
                      );
      piVar8 = (int *)(iVar6 + 0x20);
      do {
        iVar3 = *(int *)((iVar2 - iVar6) + (int)piVar8);
        if (iVar3 < *piVar8) break;
        if (*piVar8 < iVar3) {
          bVar4 = false;
          goto LAB_82d116e4;
        }
        iVar5 = iVar5 + 1;
        piVar8 = piVar8 + 1;
      } while (iVar5 < 3);
      bVar4 = true;
LAB_82d116e4:
      if ((bVar4) ||
         (bVar4 = false, (*(unsigned int *)((int)((uVar7 + 5 & 0xffffffff) << 2) + iVar1) & 0xfffffffc) == 0
         )) {
        bVar4 = true;
      }
    } while (!bVar4);
    iVar5 = 0;
    iVar6 = *(int *)((int)(((-(unsigned __int64)(uVar7 != 2) & uVar7 + 1) + 2 & 0xffffffff) << 2) + iVar1);
    piVar8 = (int *)(iVar6 + 0x20);
    do {
      iVar3 = *(int *)((iVar2 - iVar6) + (int)piVar8);
      if (iVar3 < *piVar8) break;
      if (*piVar8 < iVar3) {
        bVar4 = false;
        goto LAB_82d11770;
      }
      iVar5 = iVar5 + 1;
      piVar8 = piVar8 + 1;
    } while (iVar5 < 3);
    bVar4 = true;
LAB_82d11770:
    if ((bVar4) ||
       (bVar4 = false, (*(unsigned int *)((int)((uVar7 + 5 & 0xffffffff) << 2) + iVar1) & 0xfffffffc) == 0))
    {
      bVar4 = true;
    }
    if (bVar4) {
      return;
    }
LAB_82d117a8:
    *param_1 = (unsigned __int64)**(unsigned int **)param_1 << 0x20;
    iVar1 = *(int *)param_1;
    if (iVar1 != 0) {
      uVar7 = (unsigned __int64)(unsigned int)*param_1;
      iVar6 = 0;
      iVar2 = *(int *)((int)(((-(unsigned __int64)(uVar7 != 2) & uVar7 + 1) + 2 & 0xffffffff) << 2) + iVar1
                      );
      piVar8 = (int *)(iVar2 + 0x20);
      do {
        iVar5 = *(int *)((*(int *)((int)((uVar7 + 2 & 0xffffffff) << 2) + iVar1) - iVar2) +
                        (int)piVar8);
        if (iVar5 < *piVar8) break;
        if (*piVar8 < iVar5) {
          bVar4 = false;
          goto LAB_82d11830;
        }
        iVar6 = iVar6 + 1;
        piVar8 = piVar8 + 1;
      } while (iVar6 < 3);
      bVar4 = true;
LAB_82d11830:
      if ((bVar4) ||
         (bVar4 = false, (*(unsigned int *)((int)((uVar7 + 5 & 0xffffffff) << 2) + iVar1) & 0xfffffffc) == 0
         )) {
        bVar4 = true;
      }
      if (bVar4) {
        return;
      }
    }
    iVar2 = *(int *)param_1;
  } while( true );
}

