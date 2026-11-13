typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82414F58();
extern int fn_82415090();


__int64 fn_82427540(int param_1,unsigned __int64 param_2)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  char cVar5;
  __int64 lVar4;
  __int64 lVar6;
  int iVar7;
  unsigned __int64 uVar8;
  
  if (1 < (unsigned int)param_2) {
    iVar7 = (unsigned int)param_2 << 2;
    do {
      cVar5 = (**(int (***)())**(unsigned int **)(iVar7 + *(int *)(param_1 + 4) + -4))();
      if (cVar5 != '\0') break;
      param_2 = param_2 - 1;
      iVar7 = iVar7 + -4;
    } while (1 < (param_2 & 0xffffffff));
  }
  lVar6 = 0;
  if ((param_2 & 0xffffffff) != 0) {
    iVar7 = 0;
    uVar8 = param_2;
    do {
      lVar4 = fn_82415090(*(unsigned int *)(iVar7 + *(int *)(param_1 + 4)));
      uVar8 = uVar8 - 1;
      lVar6 = lVar4 + lVar6;
      iVar7 = iVar7 + 4;
    } while (uVar8 != 0);
  }
  iVar7 = (int)((param_2 & 0x3fffffff) << 2);
  cVar5 = fn_82414F58(*(unsigned int *)(iVar7 + *(int *)(param_1 + 4) + -4));
  if (cVar5 == '\0') {
    piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 4) + iVar7 + -4) + 4);
    if ((piVar1 == (int *)0x0) || (bVar3 = true, *piVar1 != 10)) {
      bVar3 = false;
    }
    if (bVar3) {
      if ((param_2 & 0xffffffff) < 2) {
        return lVar6 + 10;
      }
      piVar1 = *(int **)(*(int *)((int)((param_2 - 2 & 0xffffffff) << 2) + *(int *)(param_1 + 4)) +
                        4);
      if ((piVar1 == (int *)0x0) || (bVar3 = true, *piVar1 != 10)) {
        bVar3 = false;
      }
      if (!bVar3) {
        return lVar6 + 10;
      }
      return lVar6 + 0x1e;
    }
  }
  cVar5 = fn_82414F58(*(unsigned int *)(iVar7 + *(int *)(param_1 + 4) + -4));
  if (cVar5 == '\0') {
    iVar7 = *(int *)(iVar7 + *(int *)(param_1 + 4) + -4);
    piVar1 = *(int **)(iVar7 + 4);
    if (((piVar1 == (int *)0x0) || (piVar2 = *(int **)(iVar7 + 8), piVar2 == (int *)0x0)) ||
       (bVar3 = true, *piVar2 + *piVar1 != 10)) {
      bVar3 = false;
    }
    if (bVar3) {
      lVar6 = lVar6 + 10;
    }
  }
  return lVar6;
}

