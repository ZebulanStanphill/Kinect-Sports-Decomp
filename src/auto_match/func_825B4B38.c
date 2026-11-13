#define true 1
extern int fn_825B47E8();
extern int fn_82811500();
extern int fn_828116B8();


void fn_825B4B38(unsigned int *param_1,__int64 param_2)

{
  int *piVar1;
  int iVar2;
  __int64 lVar3;
  int *piVar4;
  unsigned __int64 uVar5;
  unsigned int uVar6;
  int iVar8;
  __int64 lVar7;
  unsigned __int64 uVar9;
  __int64 lVar10;
  
  do {
    uVar5 = 0x1000;
    uVar6 = 0;
    uVar9 = (param_2 - (unsigned __int64)param_1[3] & 0xffffffff) >> 0xc;
    if (*param_1 != 0) {
      iVar8 = 0;
      do {
        iVar2 = fn_828116B8(*(unsigned int *)(iVar8 + param_1[7] + 8),uVar9);
        if (iVar2 != 0) break;
        uVar6 = uVar6 + 1;
        uVar5 = (uVar5 & 0x7fffffff) << 1;
        uVar9 = uVar9 >> 1;
        iVar8 = iVar8 + 0xc;
      } while (uVar6 < *param_1);
    }
    iVar8 = uVar6 * 0xc;
    fn_82811500(*(unsigned int *)(param_1[7] + iVar8 + 8),uVar9);
    if ((uVar9 & 1) == 0) {
      lVar3 = uVar9 + 1;
      lVar7 = uVar5 + param_2;
      lVar10 = param_2;
    }
    else {
      lVar7 = param_2 - uVar5;
      lVar3 = uVar9 - 1;
      lVar10 = lVar7;
    }
    if (uVar6 == *param_1 - 1) {
LAB_825b4c5c:
      fn_825B47E8(param_1[7] + iVar8,param_2);
      param_1[4] = param_1[4] - (int)uVar5;
      return;
    }
    iVar2 = fn_828116B8(*(unsigned int *)(param_1[7] + iVar8 + 8),lVar3);
    if (iVar2 != 0) goto LAB_825b4c5c;
    iVar2 = *(int *)lVar7;
    piVar1 = (int *)((int *)lVar7)[1];
    piVar4 = (int *)(param_1[7] + iVar8);
    if (iVar2 == 0) {
      piVar4[1] = (int)piVar1;
    }
    else {
      *(int **)(iVar2 + 4) = piVar1;
    }
    if (piVar1 != (int *)0x0) {
      *piVar1 = iVar2;
    }
    *piVar4 = *piVar4 + -1;
    param_1[4] = param_1[4] + (int)uVar5;
    param_2 = lVar10;
  } while( true );
}

