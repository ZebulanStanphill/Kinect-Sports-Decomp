typedef unsigned char bool;
#define false 0
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_82364DF0();
extern int fn_82536690();
extern int fn_825521F0();
extern int fn_8288B760();
extern int fn_82F63108();
extern unsigned int iStack_5c;
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821BA994;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_82456678;
extern unsigned int uStack_4c;


void fn_82364988(int param_1,unsigned char *param_2)

{
  int iVar1;
  unsigned int uVar2;
  int *piVar3;
  bool bVar4;
  unsigned char *puStack_60;
  int iStack_5c;
  unsigned char **ppuStack_50;
  unsigned __int64 uStack_4c;
  unsigned char ***pppuStack_40;
  
  puStack_60 = param_2;
  fn_82536690(param_1 + 0x83c,&puStack_60);
  if (*(int *)(param_1 + 0x84c) == 0) {
    *(unsigned int *)(param_1 + 0x850) = 0;
    pppuStack_40 = &ppuStack_50;
    ppuStack_50 = &lbl_821BA994;
    puStack_60 = &lbl_82456678;
    uStack_4c = CONCAT44(&lbl_82456678,param_1 + 0x820);
    iStack_5c = param_1 + 0x820;
    fn_825521F0((double)lbl_821CA460,(double)lbl_8218E8E8);
    *(unsigned int *)(param_1 + 0x828) = 0;
    *(unsigned int *)(param_1 + 0x84c) = 1;
    *(unsigned int *)(param_1 + 0x854) = ltcg_pool_0_0f;
  }
  (**(int (***)())(**(int **)(param_1 + 0x3ec) + 0x1c))(*(int **)(param_1 + 0x3ec),param_2);
  iVar1 = fn_82364DF0(param_1,param_2);
  if (*(int *)(*(int *)(iVar1 * 0x44 + param_1 + 0x18c) + 0x24) != 0) {
    iVar1 = fn_82364DF0(param_1);
    iVar1 = *(int *)(iVar1 * 0x44 + param_1 + 0x18c);
    if (*(int *)(iVar1 + 0x168) == 0) {
      uVar2 = *(unsigned int *)(iVar1 + 0x16c);
    }
    else {
      uVar2 = fn_8288B760();
      uVar2 = uVar2 & 0xff;
    }
    if (uVar2 != 0) {
      piVar3 = (int *)(param_1 + 0x7b0);
      if (piVar3 == (int *)0x0) {
        bVar4 = false;
      }
      else {
        bVar4 = *piVar3 != 0;
      }
      if ((bVar4) && (*(int *)(param_1 + 2000) == 0)) {
        if (*(int *)(param_1 + 0x7c8) == 0) {
                    /* WARNING: Subroutine does not return */
          fn_82F63108();
        }
        (**(int (***)())(**(int **)(param_1 + 0x7c8) + 4))(*(int **)(param_1 + 0x7c8),piVar3);
        *(unsigned int *)(param_1 + 2000) = 1;
      }
    }
  }
  return;
}

