extern int fn_823CC298();
extern int fn_823D3C28();
extern unsigned int lbl_82191F44;
extern unsigned int ltcg_pool_0_0f;


void fn_823DF5A0(int param_1)

{
  int *piVar1;
  int iVar2;
  unsigned int uVar3;
  char cVar4;
  int iVar5;
  __int64 lVar6;
  
  if (*(char *)(*(int *)(param_1 + 8) + 0xe00) == '\0') {
    iVar5 = 0xe14;
    lVar6 = 3;
    do {
      piVar1 = (int *)(iVar5 + *(int *)(param_1 + 8));
      iVar5 = iVar5 + 4;
      *(unsigned int *)(*piVar1 + 0x1d0) = 0;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    *(unsigned char *)(*(int *)(param_1 + 8) + 0xe00) = 1;
    fn_823CC298(*(unsigned int *)(*(int *)(param_1 + 8) + 0x4b8),7);
  }
  else {
    cVar4 = fn_823D3C28(*(unsigned int *)(*(int *)(param_1 + 8) + 0xe20));
    uVar3 = lbl_82191F44;
    if (cVar4 != '\0') {
      piVar1 = *(int **)(*(int *)(param_1 + 8) + 0xe20);
      iVar5 = *piVar1;
      *(unsigned int *)(iVar5 + 0x1334) = ltcg_pool_0_0f;
      *(unsigned int *)(iVar5 + 0x1330) = uVar3;
      iVar2 = *piVar1;
      iVar5 = piVar1[0x26];
      *(float *)((*(int *)(iVar2 + 0x1684) + 0x5a2) * 4 + iVar2) = (float)(__int64)piVar1[0x25];
      *(int *)((*(int *)(iVar2 + 0x1684) + 0x5a6) * 4 + iVar2) = iVar5;
      *(int *)(iVar2 + 0x1684) = *(int *)(iVar2 + 0x1684) + 1;
      *(unsigned int *)(*(int *)(param_1 + 8) + 0xe0c) = 2;
    }
  }
  return;
}

