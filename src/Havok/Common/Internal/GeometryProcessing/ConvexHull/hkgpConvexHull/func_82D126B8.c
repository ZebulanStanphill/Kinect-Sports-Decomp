typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82D11638();


int * fn_82D126B8(int *param_1,unsigned __int64 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  unsigned __int64 uVar6;
  int *piVar7;
  
  *(unsigned __int64 *)param_1 = param_2;
  iVar1 = *param_1;
  if (iVar1 != 0) {
    uVar6 = (unsigned __int64)(unsigned int)param_1[1];
    iVar5 = 0;
    iVar2 = *(int *)((int)(((-(unsigned __int64)(uVar6 != 2) & uVar6 + 1) + 2 & 0xffffffff) << 2) + iVar1);
    piVar7 = (int *)(iVar2 + 0x20);
    do {
      iVar3 = *(int *)((*(int *)((int)((uVar6 + 2 & 0xffffffff) << 2) + iVar1) - iVar2) +
                      (int)piVar7);
      if (iVar3 < *piVar7) break;
      if (*piVar7 < iVar3) {
        bVar4 = false;
        goto LAB_82d12740;
      }
      iVar5 = iVar5 + 1;
      piVar7 = piVar7 + 1;
    } while (iVar5 < 3);
    bVar4 = true;
LAB_82d12740:
    if ((bVar4) ||
       (bVar4 = false, (*(unsigned int *)((int)((uVar6 + 5 & 0xffffffff) << 2) + iVar1) & 0xfffffffc) == 0))
    {
      bVar4 = true;
    }
    if (!bVar4) {
      fn_82D11638(param_1);
    }
  }
  return param_1;
}

