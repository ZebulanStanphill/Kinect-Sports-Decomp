extern int fn_823CC298();
extern int fn_823D4E88();
extern unsigned int lbl_82191F44;
extern unsigned int ltcg_pool_0_0f;


void fn_823DEAE8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  char cVar5;
  int *piVar6;
  __int64 lVar7;
  
  iVar1 = *(int *)(param_1 + 8);
  if (*(char *)(iVar1 + 0xe00) == '\0') {
    piVar6 = (int *)(iVar1 + 0xe10);
    lVar7 = 3;
    do {
      piVar6 = piVar6 + 1;
      *(unsigned int *)(*piVar6 + 0x1d0) = 0;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    *(unsigned char *)(iVar1 + 0xe00) = 1;
    fn_823CC298(*(unsigned int *)(iVar1 + 0x4b8),7);
  }
  else {
    cVar5 = fn_823D4E88(*(unsigned int *)(iVar1 + 0xe20));
    uVar4 = lbl_82191F44;
    if (cVar5 != '\0') {
      piVar6 = *(int **)(iVar1 + 0xe20);
      iVar2 = *piVar6;
      *(unsigned int *)(iVar2 + 0x1334) = ltcg_pool_0_0f;
      *(unsigned int *)(iVar2 + 0x1330) = uVar4;
      iVar3 = *piVar6;
      iVar2 = piVar6[0x26];
      *(float *)((*(int *)(iVar3 + 0x1684) + 0x5a2) * 4 + iVar3) = (float)(__int64)piVar6[0x25];
      *(int *)((*(int *)(iVar3 + 0x1684) + 0x5a6) * 4 + iVar3) = iVar2;
      *(int *)(iVar3 + 0x1684) = *(int *)(iVar3 + 0x1684) + 1;
      *(unsigned int *)(iVar1 + 0xe0c) = 2;
    }
  }
  return;
}

