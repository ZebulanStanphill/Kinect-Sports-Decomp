extern int fn_82230040();
extern int fn_8265C9E0();
extern int fn_828C49F8();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_2c;


void fn_828C5120(int param_1,unsigned int *param_2)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  unsigned char **ppuStack_30;
  unsigned int uStack_2c;
  
  if ((*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0xc) & 3U) == 0) {
    if (*(unsigned int *)(param_1 + 8) <= *(int *)(param_1 + 0x10) + 4U >> 2) {
      fn_828C49F8(param_1,1);
    }
  }
  uVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 0xc) + (unsigned __int64)*(unsigned int *)(param_1 + 0x10);
  uVar3 = (uVar5 & 0xffffffff) >> 2;
  if (*(unsigned int *)(param_1 + 8) <= uVar3) {
    uVar3 = uVar3 - *(unsigned int *)(param_1 + 8);
  }
  iVar1 = (int)((uVar3 & 0x3fffffff) << 2);
  if (*(int *)(*(int *)(param_1 + 4) + iVar1) == 0) {
    iVar2 = fn_8265C9E0(0x10);
    if (iVar2 == 0) {
      uStack_2c = 0;
      ppuStack_30 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_30);
    }
    *(int *)(*(int *)(param_1 + 4) + iVar1) = iVar2;
  }
  lVar4 = (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 4) + iVar1) + (uVar5 & 3) * 4;
  if (lVar4 != 0) {
    *(unsigned int *)lVar4 = *param_2;
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return;
}

