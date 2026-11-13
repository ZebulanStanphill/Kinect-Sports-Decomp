extern int fn_822ABA88();
extern int fn_82508078();


void fn_8243B938(unsigned __int64 param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  __int64 lVar7;
  unsigned __int64 uVar8;
  
  iVar1 = *(int *)((int)param_1 + 0x40);
  uVar8 = 0;
  uVar6 = 0;
  if ((*(int *)(iVar1 + 0x1f8) - *(int *)(iVar1 + 500)) / 0x5c != 0) {
    lVar7 = 0;
    uVar5 = (unsigned __int64)((*(int *)(iVar1 + 0x1f8) - *(int *)(iVar1 + 500)) / 0x5c);
    do {
      iVar3 = *(int *)((int)param_1 + 0x40);
      piVar2 = *(int **)(*(int *)(*(int *)(iVar3 + 500) + (int)lVar7) * 4 +
                        **(int **)(*(int *)(iVar3 + 0x1d8) + 8));
      iVar3 = fn_822ABA88(*(unsigned int *)(piVar2[4] * 4 + *piVar2),0);
      if (*(int *)(iVar3 + 0x24) != 0) {
        uVar8 = uVar6 + 1;
        break;
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x5c;
    } while ((uVar6 & 0xffffffff) < (uVar5 & 0xffffffff));
  }
  if (1 < (unsigned int)(*(int *)(iVar1 + 0x1c8) - *(int *)(iVar1 + 0x1c4) >> 2)) {
    if ((uVar8 & 0xffffffff) == 1) {
      uVar4 = 0xffffffff821b94d0;
    }
    else if ((uVar8 & 0xffffffff) == 2) {
      uVar4 = 0xffffffff821b94f0;
    }
    else if ((uVar8 & 0xffffffff) == 3) {
      uVar4 = 0xffffffff821b9510;
    }
    else {
      uVar4 = 0xffffffff821b9530;
    }
    fn_82508078(*(unsigned int *)(*(int *)(iVar1 + 0x1d8) + 0xa4),uVar4,0);
  }
  return;
}

