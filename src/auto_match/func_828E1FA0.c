extern int fn_82311AB8();
extern int fn_82F69290();
extern unsigned int lbl_82167E64;


void fn_828E1FA0(int param_1,unsigned int param_2)

{
  unsigned int *puVar1;
  unsigned int uVar3;
  __int64 lVar2;
  int iVar4;
  unsigned char **appuStack_20 [4];
  
  if ((unsigned int)((*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc)) / 0x1c) <= param_2) {
    fn_82311AB8(appuStack_20,0xffffffff821ae698);
    appuStack_20[0] = &lbl_82167E64;
                    /* WARNING: Subroutine does not return */
    fn_82F69290(appuStack_20,0xffffffff821dda18);
  }
  iVar4 = param_2 * 0x1c + *(int *)(param_1 + 0xc);
  if (*(int *)(iVar4 + 0x14) != 0) {
    puVar1 = *(unsigned int **)(*(int *)(iVar4 + 8) + *(int *)(iVar4 + 0x10) * 4);
    (**(int (***)())*puVar1)(puVar1,0);
    uVar3 = *(int *)(iVar4 + 0x10) + 1;
    *(unsigned int *)(iVar4 + 0x10) = uVar3;
    if (*(unsigned int *)(iVar4 + 0xc) <= uVar3) {
      *(unsigned int *)(iVar4 + 0x10) = 0;
    }
    lVar2 = (unsigned __int64)*(unsigned int *)(iVar4 + 0x14) - 1;
    *(int *)(iVar4 + 0x14) = (int)lVar2;
    if (lVar2 == 0) {
      *(unsigned int *)(iVar4 + 0x10) = 0;
    }
  }
  return;
}

