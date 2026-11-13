typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8267EB30();


unsigned __int64 fn_8267EBA0(int param_1,int param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  int iVar5;
  int *piVar6;
  __int64 lVar7;
  
  if ((unsigned __int64)*(unsigned int *)(param_1 + 8) == 0) {
    uVar3 = 0;
  }
  else {
    lVar7 = (unsigned __int64)*(unsigned int *)(param_1 + 8) + 0x10;
    uVar3 = 0;
    RtlEnterCriticalSection(lVar7);
    iVar1 = *(int *)(param_1 + 8);
    uVar4 = 0;
    if (*(unsigned int *)(iVar1 + 8) != 0) {
      iVar5 = 0;
      do {
        piVar6 = (int *)(*(int *)(iVar1 + 4) + iVar5);
        if ((*piVar6 != param_2) || (bVar2 = true, piVar6[1] != param_3)) {
          bVar2 = false;
        }
        if (bVar2) {
          fn_8267EB30(iVar1 + 4);
          uVar3 = 1;
          break;
        }
        uVar4 = uVar4 + 1;
        iVar5 = iVar5 + 8;
      } while (uVar4 < *(unsigned int *)(iVar1 + 8));
    }
    RtlLeaveCriticalSection(lVar7);
  }
  return uVar3;
}

