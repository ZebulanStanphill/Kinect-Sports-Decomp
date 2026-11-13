#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_822ABA88();
extern int fn_82359C18();
extern int fn_8235A6A0();
extern int fn_824C8258();
extern int fn_8255B400();
extern unsigned int lbl_821B2630;


/* WARNING: Removing unreachable block (ram,0x823ddb5c) */

void fn_823DDB00(int param_1)

{
  int *piVar1;
  int iVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  unsigned char **ppuStack_40;
  int (**pcStack_3c)();
  unsigned char ***pppuStack_30;
  
  if (*(int *)(param_1 + 0xe4) != 0) {
    iVar2 = *(int *)(param_1 + 8);
    fn_8255B400(*(unsigned int *)(*(int *)(param_1 + 0xc) + 0x844));
    *(unsigned int *)(param_1 + 0xe4) = 0;
    if (*(char *)(*(int *)(param_1 + 0xe0) * 0x14 + param_1 + 0x15) != '\0') {
      pcStack_3c = fn_8235A6A0;
      pppuStack_30 = &ppuStack_40;
      ppuStack_40 = &lbl_821B2630;
      fn_824C8258(*(unsigned int *)(iVar2 + 0x1510),&ppuStack_40);
      fn_82359C18(&ppuStack_40);
    }
    lVar4 = 0;
    do {
      uVar3 = 0;
      piVar1 = *(int **)(**(int **)(*(int *)(param_1 + 8) + 8) + (int)lVar4);
      uVar5 = ZEXT48(piVar1);
      if (*(int *)(*(int *)(piVar1[4] * 4 + *piVar1) + 8) != 0) {
        do {
          iVar2 = fn_822ABA88();
          if (*(int *)(*(int *)(iVar2 + 0x14) + 0x1d0) != 0) {
            *(unsigned int *)(*(int *)(iVar2 + 0x14) + 0x1d0) = 0;
          }
          uVar3 = uVar3 + 1;
        } while ((uVar3 & 0xffffffff) <
                 (unsigned __int64)*(unsigned int *)(*(int *)(((int *)uVar5)[4] * 4 + *(int *)uVar5) + 8));
      }
      lVar4 = lVar4 + 4;
    } while ((int)lVar4 < 8);
  }
  return;
}

