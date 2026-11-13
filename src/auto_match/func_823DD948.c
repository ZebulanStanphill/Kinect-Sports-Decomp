#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_822ABA88();
extern int fn_82359C18();
extern int fn_8235A648();
extern int fn_823DDB00();
extern int fn_824C8258();
extern int fn_8255B1E0();
extern unsigned int lbl_821B2630;
extern unsigned int ltcg_pool_0_0f;


/* WARNING: Removing unreachable block (ram,0x823dd9d0) */

void fn_823DD948(__int64 param_1,__int64 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  __int64 lVar7;
  unsigned __int64 uVar8;
  unsigned char **ppuStack_40;
  int (**pcStack_3c)();
  unsigned char ***pppuStack_30;
  
  iVar3 = (int)param_1;
  iVar4 = *(int *)(iVar3 + 8);
  fn_823DDB00();
  *(int *)(iVar3 + 0xe0) = (int)param_2;
  param_1 = param_2 * 0x14 + param_1;
  iVar2 = fn_8255B1E0((double)ltcg_pool_0_0f,*(unsigned int *)(*(int *)(iVar3 + 0xc) + 0x844),
                            param_1 + 0x10,0,0,0,0,0);
  *(int *)(iVar3 + 0xe4) = iVar2;
  if (iVar2 != 0) {
    if (*(char *)((int)param_1 + 0x15) != '\0') {
      pcStack_3c = fn_8235A648;
      pppuStack_30 = &ppuStack_40;
      ppuStack_40 = &lbl_821B2630;
      fn_824C8258(*(unsigned int *)(iVar4 + 0x1510),&ppuStack_40);
      fn_82359C18(&ppuStack_40);
    }
    uVar6 = 1;
    uVar5 = 0;
    piVar1 = *(int **)(*(int *)(iVar4 + 0xee8) * 4 + **(int **)(iVar4 + 8));
    uVar8 = ZEXT48(piVar1);
    if (*(int *)(*(int *)(piVar1[4] * 4 + *piVar1) + 8) != 0) {
      lVar7 = param_1 + 0x16;
      do {
        if ((*(char *)((int)lVar7 + (int)uVar5) != '\0') ||
           ((uVar5 & 0xffffffff) == (unsigned __int64)*(unsigned int *)(iVar4 + 0xeec))) {
          iVar3 = fn_822ABA88();
          *(int *)(*(int *)(iVar3 + 0x14) + 0x1d0) = (int)uVar6;
        }
        uVar5 = uVar5 + 1;
      } while ((uVar5 & 0xffffffff) <
               (unsigned __int64)*(unsigned int *)(*(int *)(((int *)uVar8)[4] * 4 + *(int *)uVar8) + 8));
    }
    uVar5 = 0;
    piVar1 = *(int **)(((unsigned int)LZCOUNT(*(unsigned int *)(iVar4 + 0xee8)) >> 3 & 4) +
                      **(int **)(iVar4 + 8));
    uVar8 = ZEXT48(piVar1);
    if (*(int *)(*(int *)(piVar1[4] * 4 + *piVar1) + 8) != 0) {
      param_1 = param_1 + 0x1d;
      do {
        if (*(char *)((int)param_1 + (int)uVar5) != '\0') {
          iVar4 = fn_822ABA88();
          *(int *)(*(int *)(iVar4 + 0x14) + 0x1d0) = (int)uVar6;
        }
        uVar5 = uVar5 + 1;
      } while ((uVar5 & 0xffffffff) <
               (unsigned __int64)*(unsigned int *)(*(int *)(((int *)uVar8)[4] * 4 + *(int *)uVar8) + 8));
    }
  }
  return;
}

